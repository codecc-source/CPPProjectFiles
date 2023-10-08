#include <iostream>
using namespace std;

class myPlace {
private:
    int nPassword;
public:
    ///setter/mutator
    void setPassword(int n){
        nPassword = (n >= 0 && n <= 30) ? n : 0;
        /*nPassword = n;
        if(n >= 0 && n <= 30){
            nPassword = n;
        }
        else {
            nPassword = 0;
        }*/
    }
    ///getter/accessor
    int getPassword(){
        return nPassword;
    }
};

int main() {
    myPlace obj;
    ///obj.nPassword = 123;
    ///cout << obj.nPassword <<endl;
    obj.setPassword(100);
    cout << obj.getPassword() <<endl;
    return 0;
}
