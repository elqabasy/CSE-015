/*
    Create two classes. 
        The first, named Sale, 
        holds data for a sales transaction. 
        Its private data members include the 
            _day of the month, 
            amount of the sale, 
            salesperson’ ID number. 
            
        The second class, named Salesperson, 
        holds data for a salesperson, and its private data members include each salesperson’s ID number and last name. 
    Each class includes a constructor to which you can pass the field values. 
    
    Create a friend function named display()that is a friend of both classes and displays the 
        date of sale, the amount, and the salesperson ID and name. 
        
        Write a short main()demonstration program to test your classes and friend function. 
        Save the file as Sales.cpp.

    Add a function to both the Sale and Salesperson classes that returns the private salesperson ID number. 
    Write a main()function that contains an array of five Salesperson objects and store appropriate data in it. 
        Then, continue to prompt the user for Sale data until the user enters an appropriate sentinel value. 
        For each Sale transaction entered, determine whether the salesperson’s ID number is valid. 
        Either display an error message, or use the friend display()function to display all the data. 
        Save the file as cpp.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;


#define ll long long
#define usi unsigned short int

class Salesperson;
class Sale {
    private:
        usi _day;
        ll int _id;
        long double _amount;
    public:
        // Constructor
        Sale(ll id, usi day, long double amount) : _id(id), _day(day), _amount(amount) {}

        // Setters

        // Getters
        ll int id() const {
            return _id; 
        }

        // Functionality
        friend void display(Sale sale, Salesperson salesperson);
};

class Salesperson {
    private:
        ll int _id;
        string _lastName;
    public:
        Salesperson(ll int id, string lastName) : _id(id), _lastName(lastName) {}

        ll int id() const { 
            return _id; 
        }

        friend void display(Sale sale, Salesperson salesperson);
};

void display(Sale sale, Salesperson salesperson) {
    printf("Transaction(date = %i, amount = %.2lf, Person(id = %li, name = %s))\n", sale._day, sale._amount, salesperson._id, salesperson._lastName.c_str());
}

int main() {
    vector<Salesperson> SalesPerson = {
        {1, "Mahros"},
        {2, "Mohamed"},
        {3, "Yser"},
        {4, "ALQabasy"},
        {5, "Khaled"}
    };

    while (1) {
        ll int day, id;
        long double amount;
        cout << "Day: ";
        cin >> day;
        if (day == -1){
            break;
        }

        cout << "Amount: ";
        cin >> amount;

        cout << "Person ID: ";
        cin >> id;

        Sale sale(day, amount, id);

        bool CHECK_ID = false;
        for (Salesperson salesperson : SalesPerson) {
            if (salesperson.id() == id) {
                display(sale, salesperson);
                CHECK_ID = true;
                break;
            }
        }

        if (!CHECK_ID) {
            cout << "Error: Invalid salesperson ID." << endl;
        }
    }

    return 0;
}

/* OUTPUT
    PS GU\OOP\LEC\Assignments\#3\code> c++ .\Sales.cpp -o Sales.exe; .\Sales.exe
    Day: 1
    Amount: 10
    Person ID: 102
    Transaction(date = 10, amount = 0.00, Person(id = 102, name = Johnson))

    PS C:\Users\Mahros\Desktop\GU\OOP\LEC\Assignments\#3\code> c++ .\Sales.cpp -o Sales.exe; .\Sales.exe
    Day: 20
    Amount: 3500.20
    Person ID: 15
    Error: Invalid salesperson ID.
*/


