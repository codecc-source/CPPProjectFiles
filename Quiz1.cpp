#include <iostream>
using namespace std;

class MyValentine{
public:
    void InLove();
    int nSize;
    char sym1 = '+';
    char sym2 = '#';
    int i,j,check;

};

void MyValentine::InLove(){
    cout << "Enter size: ";
    cin >> nSize;

    for (i = 0; i < nSize; i++){
        for (j = 0; j < nSize; j++){
            if (j%2 !=0){
                cout << sym2;
                if (j < nSize){
                    cout << " ";
                }
            }
            else if (j % 2 ==0){
                cout << sym1;
                if (j < nSize){
                    cout << " ";
                }
            }
        }
        check = sym1;
        sym1 = sym2;
        sym2 = check;
        cout << endl;
    }
}

int main(){
    MyValentine obj;
    obj.InLove();
    return 0;
}


