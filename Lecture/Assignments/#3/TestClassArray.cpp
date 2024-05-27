// - Write another main()function that instantiates an array of 10 TestClass objects. Save the file as TestClassArray.cpp. Run this program and observe the results.

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
    TestClass data[10];
    return 0;
}

/* OUTPUT
    PS C:\Users\Mahros\Desktop\GU\OOP\LEC\Assignments\#3\code> c++ .\TestClass.cpp -o TestClass.exe; .\TestClass.exe
    Constructing
    Constructing
    Constructing
    Constructing
    Constructing
    Constructing
    Constructing
    Constructing
    Constructing
    Constructing
*/