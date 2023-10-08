#include <iostream>
using namespace std;

class myTest{
    int value;
public:
    myTest(int v = 88){
        value = v;
    }
    int getValue() const{
        return value;
    }
    void setValue(int val){
        value = val;
    }
};

int main(){
    ///METHOD #1
    ///myTest t(20);
    myTest t;
    cout << t.getValue() <<endl;

    ///METHOD #2
    const myTest t_const(10);
    cout << t_const.getValue() << endl;
    ///t_const.setValue(25);
    ///cout << t_const.getValue() << endl;

    ///METHOD #3
    t.setValue(12);
    cout << t.getValue() << endl;

    return 0;
}
