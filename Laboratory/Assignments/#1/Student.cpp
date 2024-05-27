#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Student{
    private:
        char _grade;
        string _name;
        vector<ll int> _marks;
    public:
        // Constructor
        Student(string name, vector<ll int> marks, char grade) : _name(name), _marks(marks), _grade(grade){
            printf("Object(name = %s) has been created.\n", _name.c_str());
        }

        // Setters
        void name(string name){
            _name = name;
        }
        void marks(vector<ll int> marks){
            _marks = marks;
        }
        void grade(char grade){
            _grade = grade;
        }

        // Getters
        string name(){
            return _name;
        }
        vector<ll int> marks(){
            return _marks;
        }
        char grade(){
            return _grade;
        }

        // Functionality
        void show(){
            printf("Student(name = %s, grade = %c)\n", _name.c_str(), _grade);
        }

        // Destructor
        ~Student(){
            printf("Object(name = %s) has been deallocated.\n", _name.c_str());
        }
};

int main(){
    Student Mahros("Mahros", {100, 90, 80, 70}, 'A');
    Mahros.show();
    return 0;
}