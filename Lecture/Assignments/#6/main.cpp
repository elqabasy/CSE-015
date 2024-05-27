#include <iostream>
using namespace std;

#define ll long long
#define ld long double
class Box{
    private:
        string _name, _no;
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
        Box operator+(const Box& other) const{
            return Box(_width + other._width, _height + other._height, _length + other._length);
        }   

        bool operator<(const Box& other) const{
            return this->volume() < other.volume();
        }        

        // Post fix
        Box operator++(){
            return Box(++_width, ++_height, ++_length);
        }        

        // +=
        void operator+=(const Box& other){
            _width += other._width;
            _height += other._height;
            _length += other._length; 
        }        

        string operator+(const Box& other){
            return _name + other._name;
        }        

        // display
        void display() const {
            printf("Box(width = %.2Lf, height = %.2Lf, length = %.2Lf)\n", _width, _height, _length);
        }
};

int main(){
    Box b1, b3;

    b1 = b3;
    return 0;
}

/* output
    PS GU\OOP\LEC\Assignments\#6\code> c++ .\main.cpp -o main.exe; .\main.exe
    Box(width = 1.00, height = 1.00, length = 1.00)
    Box(width = 1.00, height = 1.00, length = 1.00)
    Box(width = 2.00, height = 2.00, length = 2.00)
    Box(width = 1.00, height = 1.00, length = 1.00)
*/