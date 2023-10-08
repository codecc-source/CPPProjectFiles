#include <iostream>
using namespace std;

class Automobile {
public:
    string brand;
    string type;
    int yr;
    Automobile(string x, string y, int z);
    /*Automobile(string cBrand, string cType, int nYr) {
        brand = cBrand;
        type = cType;
        yr = nYr;
    }*/
};

Automobile::Automobile(string x, string y, int z){
    brand = x;
    type = y;
    yr = z;
}

int main(){
    Automobile car1("Range Rover", "SUV", 2080);
    Automobile car2 ("Rolls Royce", "Sedan", 2088);

    cout << car1.brand << " "<< car1.type << " " << car1.yr <<endl;
    cout << car2.brand << " "<< car2.type << " " << car2.yr <<endl;
    return 0;
}
