#include <iostream>
using namespace std;

#define ll long long

class CurrentAccount;
class SavingAccount{
    private:
        string _name;
        ll int _number;
        long double _balance;
    public:
        // Constructor
        SavingAccount(string na, ll int nu, long double ba) : _name(na), _number(nu), _balance(ba) {
            
        }

        // Functionality 
        friend void transfer(CurrentAccount&, SavingAccount&, long double);
        void display(){
            printf("SavingAccount(balance = $%.2Lf)\n", _balance);
        }
};

class CurrentAccount{
    private:
        string _name;
        ll int _number;
        long double _balance;
    public:
        // Constructor
        CurrentAccount(string na, ll int nu, long double ba) : _name(na), _number(nu), _balance(ba) {
            
        }

        // Functionality 
        friend void transfer(CurrentAccount&, SavingAccount&, long double);
        void display(){
            printf("CurrentAccount(balance = $%.2Lf)\n", this->_balance);
        }
};


void transfer(CurrentAccount &C, SavingAccount &S, long double money){
    C._balance -= money;
    S._balance += money;
}

int main(){
    SavingAccount SAVING_Account("John", 30010020, 5000);
    CurrentAccount CURRENT_Account("John", 40010020, 2000);
    
    // transfer
    transfer(CURRENT_Account, SAVING_Account, 300);

    // dislay
    SAVING_Account.display();
    CURRENT_Account.display();
    return 0;
}

/* output
    PS GU\OOP\LEC\Assignments\#5\code> c++ main.cpp -o main.exe; .\main.exe
    SavingAccount(balance = $5300.00)
    CurrentAccount(balance = $1700.00)
*/