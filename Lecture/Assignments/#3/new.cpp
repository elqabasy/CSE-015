/*

*/

#include <iostream>
using namespace std;
#define ll long long

// Forward Declaration
class City;
class Customer{
    private:
        string _zip;
        ll int _number;
    public:
        // Constructor
        Customer(ll int number, string zip) : _number(number), _zip(zip){
        }

        // Functionality
        friend void show(Customer customer, City state);
};

class City{
    private:
        string _name, _zip, _state;
    public:
        // Constructor
        City(string name, string zip, string state) : _name(name), _zip(zip), _state(state){
        }

        // Functionality
        friend void show(Customer customer, City state);
};


void show(Customer customer, City city){
    printf("Customer(number = %i, city = %s, state = %s, zip = %s)\n", customer._number, city._name.c_str(), city._state.c_str(), city._zip.c_str());
}


int main(){
    Customer customer = {223106831, "22310"}; City city = {"Desouk", "22310", "Kafrelsheikh"};
    show(customer, city);
    return 0;
}