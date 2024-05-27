/*
    Create a class named Car. 
    The Car class contains a static integer field named count. Create a constructor that adds 1 to the count and displays the count each time a Car is created. Create a destructor that subtracts 1 from the count and displays the count each time a Car goes out of scope. Write a main()function that declares an array of five Car objects. Output consists of five constructor messages and five destructor messages, each displaying the current count, similar to the output in Figure 8-34. Save the file as Car.cpp.
*/

#include <iostream>
using namespace std;

class Car{
    private:
        static long long int _count;
    public:
        // Constructors
        Car(){
            _count++;
            printf("Cars(count = %li)\n", _count);
        }
        
        // Destructors
        ~Car(){
            _count--;
            printf("Cars(count = %li)\n", _count);
        }
};

long long int Car::_count = 0;

int main(){
    Car cars[5];
    return 0;
}

/* OUTPUT
    PS GU\OOP\LEC\Assignments\#3\code> c++ .\Car.cpp -o Car.exe; .\Car.exe
    Cars(count = 1)
    Cars(count = 2)
    Cars(count = 3)
    Cars(count = 4)
    Cars(count = 5)
    Cars(count = 4)
    Cars(count = 3)
    Cars(count = 2)
    Cars(count = 1)
    Cars(count = 0)
*/