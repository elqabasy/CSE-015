#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define clli const ll int
#define cs const string


/*
    Write a class Employee that contains attributes of employee id and his scale. 
    The class contains member functions to input and show the attribute. 
    Write a child class Manager that inherits Employee class. 
    The child id has attributes of manager id and his department. 
    It also contains the declaration of member functions to input and show its attributes. 
    Also, draw the UML class diagram of the code.
*/





class Employee{
    private:
        ll int _id, _scale;

    public:
        // Constructor
        Employee(ll int id, ll int scale) : _id(id), _scale(scale){

        }

        // display
        void display(){
            printf("Employee(id = %lli, scale = %lli)\n");
        }
};


class Manager : public Employee{
    private:
        string _department;
    public:
        // Constructor
        Manager(clli& id, clli& scale, cs& department) : Employee(id, scale), _department(department){

        }

        // display
        void display(){
            printf("Manager(id = %lli, scale = %lli, department = %s)\n", _id, _scale, _department);
        }

};
int main(){


    return 0;
}