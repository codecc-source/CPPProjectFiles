#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class PassCode{
public:
    char u;
    char l;
    int r;
    char spChar;
    int storeNum;
    char userInput;

    void passcode_generator(){
        system("color 0A");

        srand(time(NULL));

        R:
        cout << "System generated password is: " << endl;
        for (int s = 0; s < 2; s++){ ///Special characters
            r = rand();
            spChar = r;
            cout << spChar << " ";
        }
        for (int i = 0; i < 1; i++){ ///UPPER CASE
            r = rand()%26;
            u = 'A' + r;
            cout << u << " ";
        }
        for (int i = 0; i < 10; i++){ ///NUMBERS
            storeNum =(rand()%10);
            cout << storeNum << " ";
        }
        for (int i = 0; i < 1; i++){ ///LOWER CASE
            r = rand()%26;
            l = 'a' + r;
            cout << l << " " << endl;
        }
        cout << "Generate again ?(y/n): ";
        cin >> userInput;
        if (userInput == 'Y' || userInput == 'y'){
            for (int x = 0; x < 5; x++){
                goto R;
                    }
        }
        else if (userInput == 'N' || userInput == 'n'){
                cout << "Password is set to: " << spChar << u << storeNum << l;
            }
        }
};

int main(){
    PassCode obj;
    obj.passcode_generator();
    return 0;
}
