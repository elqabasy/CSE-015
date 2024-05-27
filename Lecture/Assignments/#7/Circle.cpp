#include <iostream>
using namespace std;

#define ll long long
#define ld long double

class Circle{
    private:
        ld _r;
    public:
        // Constructor
        Circle(): _r(0.0){}
        Circle(ld radius): _r(radius){}

        // Overloading
        Circle operator++(){
            return Circle(2 * _r);
        }      

        // Functionality
        void display(){
            printf("Circle(radius = %.2Lf)\n", _r);
        }
};




int main(){
    Circle Cir1, Cir2(15), Cir3 = ++Cir2;

    // test
    Cir1.display();
    Cir2.display();
    Cir3.display();

    return 0;
}

/* output

*/


