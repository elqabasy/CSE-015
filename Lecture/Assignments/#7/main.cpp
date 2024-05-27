
#include <iostream>
using namespace std;

#define ll long long
#define ld long double

class Vector{
    private:
        ll int _mag, _direction;
    public:
        // Constructor
        Vector(): _mag(0), _direction(1){}
        Vector(ll int mag, ll int direction): _mag(mag), _direction(direction){}

        // Overloading
        Vector operator-(){
            return Vector(_mag, -1 * _direction);
        }

        // Functionality
        void display(){
            printf("Vector(mag = %lli, dire = %lli)\n", _mag, _direction);
        }
};

int main(){
    Vector C1, C2(15, 12), C3 = -C2;
    
    // test
    C1.display();
    C2.display();
    C3.display();

    return 0;
}

/* output
    PS GU\OOP\LEC\Assignments\#7\code> c++ .\main.cpp -o main.exe; .\main.exe
    Vector(mag = 0, dire = 1)
    Vector(mag = 15, dire = 12)
    Vector(mag = 15, dire = -12)
*/