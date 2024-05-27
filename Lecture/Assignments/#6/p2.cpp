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

        // Getters
        ld volume()const{
            return _width * _length * _height;
        }

        // Operator Overloading
        bool operator<(const Box& other) const{
            return this->volume() < other.volume();
        }        

        // display
        void display() const {
            printf("Box(width = %.2Lf, height = %.2Lf, length = %.2Lf)\n", _width, _height, _length);
        }
};

int main(){
    Box B1(1, 1, 1), B2(1, 1, 1);
    cout << (B1 < B2 ? "B1 < B2" : "B2 < B1") << endl;

    return 0;
}

/* output
   PS GU\OOP\LEC\Assignments\#6\code> c++ .\main.cpp -o main.exe; .\main.exe
    B2 < B2
*/