// - Create a class named TestClass that holds a single private integer field and a public constructor. The only statement in the constructor is one that displays the message “Constructing”. Write a main()function that instantiates one object of the TestClass. Save the file as TestClass.cpp. Run the program and observe the results.

#include <iostream>
using namespace std;

class TestClass{
    private:
        int integer;
    public:
        int test;
        TestClass(){
            cout << "Constructing" << endl;
        }
};

int main(){
    // test TestClass
    TestClass object;
    return 0;
}

