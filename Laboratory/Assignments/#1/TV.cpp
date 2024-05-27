#include <bits/stdc++.h>
using namespace std;
#define ll long long

class TV{
    private:
        string _brand, _model;
        long double _price;
    public:
        // Constructor
        TV(string brand, string model, long double price) : _brand(brand), _model(model), _price(price){
            printf("Object(brand = %s) has been allocated.\n", _brand.c_str());
        }

        // Setters
        void brand(string brand){
            _brand = brand;
        }
        void model(string model){
            _model = model;
        }
        void price(long double price){
            _price = price;
        }

        // Getters
        string model(){
            return _model;
        }
        string brand(){
            return _brand;
        }
        
        long double price(){
            return _price;
        }

        // Functionality
        void show(){
            printf("TV(brand = %s, model = %s, price = %.2lf)\n", _brand.c_str(), _model.c_str(), _price);
        }

        // Destructor
        ~TV(){
            printf("Object(brand = %s) has been deallocated.\n", _brand.c_str());
        }
};

int main(){
    TV SONY("SONY", "BRAVIA", 7850);
    SONY.show();
    return 0;
}