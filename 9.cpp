#include <iostream>
using namespace std;

int main() {
    int var;
    int *ptr;
    int **pptr;

    var = 800;
    ptr = &var;

    pptr = &ptr;

    cout << "Value of var:\t\t\t" << var << endl;
    cout << "Address of *ptr:\t\t" << ptr << endl;
    cout << "Value pointed by [*ptr] is:\t" << *ptr << endl;
    cout << "Address of **pptr:\t\t" << pptr << endl;
    cout << "Value pointed is [**pptr]:\t" << **pptr <<endl;

    cout << "----------------------------------------" <<endl;
    var = 888;
    cout << "Value of var:\t\t\t" << var << endl;
    cout << "Address of *ptr:\t\t" << ptr << endl;
    cout << "Value pointed by [*ptr] is:\t" << *ptr << endl;
    cout << "Address of **pptr:\t\t" << pptr << endl;
    cout << "Value pointed is [**pptr]:\t" << **pptr <<endl;
}
