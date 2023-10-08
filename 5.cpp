#include <iostream>
using namespace std;

class AirPlane{
public:
    int speed(int nMaxSpeed, int nVelocity);
};

int AirPlane::speed(int nMaxSpeed, int nVelocity){
    int x = nMaxSpeed * nVelocity;
    return x;
}

int main(){
    AirPlane Plane1;
    cout <<  "Plane#1 maximum speed is: " << Plane1.speed(500,100) << endl;
    return 0;
}
