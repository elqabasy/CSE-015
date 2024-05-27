#include <iostream>
using namespace std;

#define ll long long
#define ld long double
class Box{
    private:
        ld _width, _height, _length;
    public:
        // Constructors
        Box() : _width(0), _height(0), _length(0) {}
        Box(ld w, ld h, ld l ) : _width(w), _height(h), _length(l) {}


        // Operator Overloading
        Box operator+(const Box& other) const{
            return Box(_width + other._width, _height + other._height, _length + other._length);
        }        

        // display
        void display() const {
            printf("Box(width = %.2Lf, height = %.2Lf, length = %.2Lf)\n", _width, _height, _length);
        }
};

int main(){
    Box B1(1, 1, 1), B2(1, 1, 1), B3;
    B1.display();
    B2.display();
    B3.display();

    B3 = B1 + B2;


    return 0;
}

/* output
    PS GU\OOP\LEC\Assignments\#5\code> c++ main.cpp -o main.exe; .\main.exe
    SavingAccount(balance = $5300.00)
    CurrentAccount(balance = $1700.00)
*/