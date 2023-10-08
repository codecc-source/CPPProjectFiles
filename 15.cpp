#include <iostream>
#include <cmath>
using namespace std;

class Vector {
public:
    float length() const;
    float LengthSqr() const;
    float x,y;
};

class Point {
public:
    Point AddVector(Vector v);
    float x,y;
};

float Vector::length() const{
    float length;
    length = sqrt((x * x) + (y * y));
    return length;
}

float Vector::LengthSqr() const {
    float length;
    length = ((x * x) + (y * y));
    return length;
}

Vector operator-(Point a, Point b){
    Vector v;
    v.x = a.x - b.x;
    v.y = a.y - b.y;
    return v;
}

Point Point::AddVector(Vector v){
    Point pPrime;

    pPrime.x = x + v.x;
    pPrime.y = y + v.y;

    return pPrime;
}

int main(int arcc, char** args){
    Point p; ///(0,-1)
    p.x = 0;
    p.y = -1;

    Point i; ///(1,1)
    i.x = 1;
    i.y = 1;

    Point c; ///(2,-1)
    c.x = 2;
    c.y = -1;

    Vector cp;
    Vector ip;

    ip = p - i;
    cp = p - c;

    float length_sqr_cp = cp.LengthSqr();
    float length_sq_ip = ip.LengthSqr();

    cout << "Length squared of CP: " << length_sqr_cp << "\n";
    cout << "Lenght squared of IP: " << length_sq_ip << "\n";

    return 0;
}
