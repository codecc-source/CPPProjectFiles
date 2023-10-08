#include <iostream>
#include <cmath>
using namespace std;

class Vector {
public:
    float length() const;
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
    Point p;
    p.x = 0;
    p.y = -1;
    Point i;
    i.x = 1;
    i.y = 1;

    Vector v;

    v = p - i;

    float length = v.length();
    cout << "Result: (" << v.x << ", " << v.y << ")\n";
    cout << "Result: " << length << endl;
}
