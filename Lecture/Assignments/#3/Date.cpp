// Write the class definition for a Date class that contains three integer data members: month, day, and year. Include a default constructor that assigns the date 1/1/2000 to any new object that does not receive arguments. Also include a function that displays the Date object. Write a main()function in which you instantiate two Date objects—one that you create using the default constructor values, and one that you create using three arguments—and display its values. Save the file as Date.cpp.

#include <iostream>
using namespace std;
#define usi unsigned short int

class Date{
    private:
        usi _day, _month, _year;
    public:
        // Constrcutors
        Date(): _day(1), _month(1), _year(2000){}
        Date(usi day, usi month, usi year): _day(day), _month(month), _year(year){}

        // Functionality
        void show(){
            printf("Date(day = %i, month = %i, year = %i)\n", _day, _month, _year);
        }
};

int main(){
    // Result
    Date object1, object2(13, 5, 2005);
    object1.show();
    object2.show();
    return 0;
}

/* OUTPUT
    PS GU\OOP\LEC\Assignments\#3\code> c++ .\Date.cpp -o Date.exe; .\Date.exe
    Date(day = 1, month = 1, year = 2000)
    Date(day = 13, month = 5, year = 2005)
*/