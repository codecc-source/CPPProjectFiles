#include <iostream>
using namespace std;

void swap1(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
    return;
}

void swap2(int &x, int &y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
    return;
}

int main(){
    int a = 100;  ///200
    int b = 200;  ///100

    cout << "Original value(s)" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap1(a, b); ///Pass by value
    cout << "New value(s)" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap2(a, b); ///Pass by reference
    cout << "New value(s)" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
