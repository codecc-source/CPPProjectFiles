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
Vector operator-(Point a, Point b){ ///overloaded operator
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
    Point p; /// PLAYER P
    p.x = 0; /// PLAYER X and Y position is (0,-1)
    p.y = -1;
    Point i; ///ENEMY #I
    i.x = 1; /// ENEMY X and Y position (1,1)
    i.y = 1;

    Vector v;

    v = p - i;

    cout << "Result: (" << v.x << ", " << v.y << ")\n";


    string s1, s2;
    s1 = "Sir";
    s2 = "iCE";
    cout << s1 + s2 << endl;
    int n1, n2;
    n1 = 7;
    n2 = 1;
    cout << n1 + n2 << endl;
}
