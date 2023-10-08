#include <iostream>
using namespace std;

class myNumber {
public:
  int nResult, x;
};

myNumber operator-(myNumber a){
    myNumber obj;
    obj.nResult = a.x + 10;
    return obj;
}

int main(){
    myNumber obj1;
    obj1.x = 1;

    myNumber obj2;
    obj2 = -obj1;

    cout << obj2.nResult << endl;

    int x;
    x = -1;
    cout << x << endl;
}
