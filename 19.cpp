#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main(){
    int nSpeed = 0;
    srand((unsigned) time(0)); ///20 - 30
    int result = 20 + rand() % ((30 + 1) - 20);

    cout << "Random: " << result << endl;

    cout << "Enter speed: " << endl;
    cin >> nSpeed;

    for(int x = 0; x < 5; x++){
        cout << "* ";
        Sleep(nSpeed);
    }
    cout << endl;

    result = 1 + (rand()%5000);
    cout << "Random: " << result << endl;
    cout << "Enter speed: " << endl;
    cin >> nSpeed;
    for(int x = 0; x < 5; x++){
        cout << "* ";
        Sleep(nSpeed);
    }
    cout << endl;

    result = 1 + (rand()%5000);
    cout << "Random: " << result << endl;
    cout << "Enter speed: " << endl;
    cin >> nSpeed;
    for(int x = 0; x < 5; x++){
        cout << "* ";
        Sleep(nSpeed);
    }
    cout << endl;
    return 0;
}
