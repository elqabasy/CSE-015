/*
    Create a class named SavingsAccount. Provide fields for the customer (use the Person class from Exercise 3), account number, balance, and interest rate. Provide two constructors. One requires a customer and sets each numeric field to 0; the other requires a customer and an account number and sets the account’s opening balance to $100 at 3% interest. Include
 a function that displays an account’s data fields. Write a main()function that instantiates one SavingsAccount object of each type and displays their values. Save the file as SavingsAccount.cpp.
*/
#include <iostream>
using namespace std;
#define ld long double
#define lli long long int
#define usi unsigned short int

class SavingsAccount{
    private:
        string _name, _lName, _code;
        usi _intrest; lli _account; ld _balance;
    public:
        // Constructors
        SavingsAccount() : _account(0), _balance(0), _intrest(0){}
        SavingsAccount(string name, string lastName, string zipCode, lli account) : _name(name), _lName(lastName), _code(zipCode), _account(account), _balance(100), _intrest(3){}

        // Functionality
        void show(){
            printf("Person(name = %s, account = %lli, balance = $%.2lf, rate = %i%)\n", _name.data(), _account, _balance, _intrest);
        }
};


int main(){
    SavingsAccount defaultAccount, account1("mahros", "alqabasy", "K205", 223106831);
    defaultAccount.show();
    account1.show();
    return 0;
}

/* OUTPUT
    PS GU\OOP\LEC\Assignments\#3\code> c++ .\SavingAccount.cpp -o SavingAccount.exe; .\SavingAccount.exe
    Person(name = , account = 0, balance = $0.00, rate = 0%)
    Person(name = mahros, account = 223106831, balance = $0.00, rate = 3%)
*/