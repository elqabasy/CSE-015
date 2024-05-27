#include <iostream>
using namespace std;

#define ll long long
#define ld long double

class Complx{
    private:
        ll int _real, _imag;
    public:
        // Constructor
        Complx(): _real(0), _imag(0){}
        Complx(ll int real, ll int imag): _real(real), _imag(imag){}

        // Overloading
        Complx operator+(const Complx& C){
            return Complx(_real + C._real, _imag + C._imag);
        }

        // Functionality
        void display(){
            printf("Complx(real = %lli, imaginary = %lli)\n", _real, _imag);
        }
};

int main(){
    Complx C1, C2(15, 12), C3 = C1 + C2;
    
    // test
    C1.display();
    C2.display();
    C3.display();

    return 0;
}

/* output
    PS GU\OOP\LEC\Assignments\#7\code> c++ .\main.cpp -o main.exe; .\main.exe
    Complx(real = 0, imaginary = 0)
    Complx(real = 15, imaginary = 12)
    Complx(real = 15, imaginary = 12)
*/