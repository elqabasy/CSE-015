#include <bits/stdc++.h>
using namespace std;
#define ll long long


/*
    d) Write a class book that has attributes for pages, price, and title. It has two functions one to input 
    the values and the other to display the values. Create three objects of the class with the same input 
    values.
*/

class Book{
    private:
        string _title;
        ll int _pages, _price;
    public:
        // Constructor
        Book(string title, ll int pages, ll int price) : _title(title), _pages(pages), _price(price){}

        // Setters
        void title(string title){
            _title = title;
        }
        void pages(ll int pages){
            _pages = pages;
        }
        void price(ll int price){
            _price = price;
        }

        // Getters
        string title(){
            return _title;
        }
        ll int pages(){
            return _pages;
        }
        ll int price(){
            return _price;
        }

        // Functionality
        void show(){
            printf("Book(title = %s, pages = %ld, price = %ld)\n", _title.c_str(), _pages, _price);
        }

        // Destructor
        ~Book(){}
};

int main(){
    Book Book1("Book1", 100, 80), Book2("Book2", 200, 150);
    Book1.show(); Book2.show();
    return 0;
}