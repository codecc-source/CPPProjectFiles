#include <iostream>
using namespace std;

class Vector {
public:
    float x,y;
};

class Point {
public:
    Point AddVector(Vector v);
    float x,y;
};

Point Point::AddVector(Vector v){
    Point pPrime;

    pPrime.x = x + v.x;
    pPrime.y = y + v.y;

    return pPrime;
}

int main(int arcc, char** args){
    Point p;
    p.x = 1;
    p.y = 0;

    Vector v;
    v.x = 2;
    v.y = 3;

    Point objPrime = p.AddVector(v);
    cout << "Source: [" << p.x << ", " << p.y << "]\n";
    cout << "Vector: [" << v.x << ", " << v.y << "]\n";
    cout << "Result: [" << objPrime.x << ", " << objPrime.y << "]\n";
}
