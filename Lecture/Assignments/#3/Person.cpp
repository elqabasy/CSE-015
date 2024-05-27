// Create a Person class that includes fields for last name, first name, and zip code. Include
// a default constructor that initializes last name, first name, and zip code to “X” if no arguments are supplied. Also include a display function. Write a main()function that instantiates and displays two Person objects: one that uses the default values, and one for which you supply your own values. Save the file as Person.cpp.

#include <iostream>
using namespace std;

class SavingsAccount{
    private:
        string _name, _lName, _code;
    public:
        // Constructors
        SavingsAccount() : _name("X"), _lName("X"), _code("X") {}
        SavingsAccount(string name, string lastName, string zipCode) : _name(name), _lName(lastName), _code(zipCode){}

        // Functionality
        void show(){
            printf("Person(name = %s, lastName = %s, code = %s)\n", _name.data(), _lName.data(), _code.data());
        }
};


int main(){
    SavingsAccount defaultPerson, mahros("mahros", "alqabasy", "K205"s);
    defaultPerson.show();
    mahros.show();
    return 0;
}

/* OUTPUT
    PS GU\OOP\LEC\Assignments\#3\code> c++ .\Person.cpp -o Person.exe; .\Person.exe
    Person(name = X, lastName = X, code = X)
    Person(name = mahros, lastName = alqabasy, code = K205)
*/