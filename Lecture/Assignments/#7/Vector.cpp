
#include <iostream>
using namespace std;

#define ll long long
#define ld long double

class Vector{
    private:
        ld _r, _theta;
    public:
        // Constructor
        Vector(): _r(1), _theta(0){}
        Vector(ld radius, ld theta): _r(radius), _theta(theta){}

        // Overloading
        bool operator==(const Vector& C){
            return (_r == C._r && _theta == C._theta);
        }      

        // Functionality
        void display(){
            printf("Vector(radius = %8.2Lf, theta = %8.2Lf)\n", _r, _theta);
        }
};

int main(){
    Vector Vec1, Vec2(15, 180), Vec3;

    // test
    Vec1.display();
    Vec2.display();
    Vec3.display();

    cout << "Vec1 == Vec3: " << (Vec1 == Vec3) << endl; // yes: true > 1
    cout << "Vec1 == Vec2: " << (Vec1 == Vec2) << endl; // no: false > 0

    return 0;
}

/* output
    PS GU\OOP\LEC\Assignments\#7\code> c++ .\main.cpp -o main.exe; .\main.exe
    Vector(radius =     1.00, theta =     0.00)
    Vector(radius =    15.00, theta =   180.00)
    Vector(radius =     1.00, theta =     0.00)
    Vec1 == Vec3: 1
    Vec1 == Vec2: 0
*/