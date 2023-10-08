#include <iostream>
using namespace std;

class myClass {
public:
    int myAge;      //int var for age
    string myName;  //string var for name
};

int main(){
    int nPlayers;                   //int var for # of players
    cout << "Enter # of Players: ";
    cin >> nPlayers;                //user input for # of players
    myClass player [nPlayers];      //array for # of players
    cout << "-----Generating " << nPlayers << " player(s)-----" << endl;    //display # of players

    for (int x = 0; x < nPlayers; x++){                     //for loop
        cout << "Enter player (" << x + 1 << ")'s name: ";  //x + 1 to start x with 1 and avoid player 0
        cin >> player[x].myName;                            //user input for name
        player[x].myAge = x * 2 + 1;                        //player age x * 2 + 1 to avoid 0 age
    }

    cout << "\n---------Player(s)---------" << endl;
    for (int x = 0; x < nPlayers; x++){                     //for loop displays name + age
        cout << "Player '" << player[x].myName << "' -  Age: " << player[x].myAge << endl;
    }
}
