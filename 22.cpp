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

    Vector operator+(const Vector& v) const;
    Vector operator-(const Vector& v) const;
    Vector operator*(float s) const;
    Vector operator/(float s) const;

    Vector Normalized() const;

    float x,y;
};

Vector Vector::operator+(const Vector& v) const{
    Vector retV;
    retV.x = x + v.x;
    retV.y = y + v.y;
    return retV;
}
Vector Vector::operator-(const Vector& v) const{
    return Vector(x - v.x, y - v.y);
}

class Point {
public:
    Point() {}
    Point (float X, float Y) {
        x = X;
        y = Y;
    }
    Point AddVector(Vector v);
    float x,y;
};

Vector Vector::Normalized() const{
    Vector normalized;

    normalized = (*this) / length();
    return normalized;
}

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
    Vector r(4, 0);
    Vector d(0,-5);

    Vector v = r + d;
    cout << "(" << v.x << "," << v.y << ")" << endl;

    return 0;
}
