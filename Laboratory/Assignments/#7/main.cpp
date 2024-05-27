#include <iostream>
using namespace std;

#define ll long long
#define clli const ll int
#define cs const string

class Employee{
    private:
        ll int _id, _scale;

    public:
        // Constructor
        Employee(ll int id, ll int scale) : _id(id), _scale(scale){

        }

        // Getters
        ll int id(){return _id;}
        ll int scale(){return _scale;}

        // display
        void display(){
            printf("Employee(id = %lli, scale = %lli)\n", _id, _scale);
        }
};

class Manager : public Employee{
    private:
        string _department;
    public:
        // Constructor
        Manager(clli& id, clli& scale, cs& department) : Employee(id, scale), _department(department){}

        // display
        void display(){
            printf("Manager(id = %lli, scale = %lli, department = %s)\n", id(), scale(), _department);
        }
};

int main(){

    return 0;
}