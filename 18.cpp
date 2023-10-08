#include <iostream>
#include <cmath>
using namespace std;

class Vector {
public:
    Vector() {}
    Vector (float X, float Y){
        x = X;
        y = Y;
    }
    float length() const;
    float LengthSqr() const;

    Vector operator*(float s) const;
    Vector operator/(float s) const;

    float x,y;
};

class Point {
public:
    Point AddVector(Vector v);
    float x,y;
};

Vector Vector::operator*(float s) const{
    Vector scaled;
    scaled.x = x * s;
    scaled.y = y * s;
    return scaled;
}

Vector Vector::operator/(float s) const{
    Vector scaled;
    scaled.x = x / s;
    scaled.y = y / s;
    return scaled;
}

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
   Vector v(3, 4);

   cout << "Initial speed: " << v.length() << endl;

   Vector doubled;
   doubled = v * 2;
   cout << "Double speed: " << doubled.length() << endl;

   Vector half;
   half = v / 2;
   cout << "Half speed: " << half.length() << endl;
    return 0;
}
