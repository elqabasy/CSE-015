#include <iostream>
using namespace std;
#define ld long double

class SwimPool{
    public:
        virtual ld area() const = 0;
};

class RectanglePool : public SwimPool{
    private:
        ld _width;
        ld _height;
    public:
        // Constructor
        RectanglePool(ld width, ld height) : _width(width), _height(height) {}

        // Area
        ld area() const override{
            return _width * _height;
        }

        // display
        void display(){
            printf("RectanglePoo(width = %.2Lf, height = %.2Lf, area = %.2Lf)\n", _width, _height, area());
        }

        // Destructor
        ~RectanglePool(){}
};

class SquarePool : public SwimPool{
    private:
        ld _length;
    public:
        // Constructor
        SquarePool(ld length) : _length(length) {

        }

        // area
        ld area() const{
            return _length * _length;
        }

        // display
        void display(){
            printf("RectanglePoo(length = %.2Lf, area = %.2Lf)\n", _length, area());
        }

        // Destructor
        ~SquarePool(){}
};


int main(){
    RectanglePool Rectangle(50, 25);
    SquarePool Square(25);
    
    // display
    Square.display();
    Rectangle.display();
    return 0;
}

/* output
    PS Desktop\GU\QUIZ3> c++ main.cpp -o main.exe; .\main.exe
    RectanglePoo(length = 25.00, area = 625.00)
    RectanglePoo(width = 50.00, height = 25.00, area = 1250.00)
*/