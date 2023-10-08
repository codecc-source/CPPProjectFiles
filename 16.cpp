#include <iostream>
using namespace std;
void clearScreen(){
    for(int x = 0; x < 22; x++){
        cout << "\n";
    }
}
int main() {
    string x;
    for(int x = 0; x <= 10; x++){
        cout << "Hello Sir iCE xxxx" << endl;
    }
    cin >> x;
    clearScreen();
    cout << "Hello Sir iCE" << endl;
    clearScreen();

    return 0;
}
