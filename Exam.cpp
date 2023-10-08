#include <iostream>
using namespace std;

class CreateGraph {
public:
    int graphString;
    int *ptr;
    int **pptr;
    char ch = 177;
    char ch2 = 178;
    int numGraphs;
    char choice;

    void ShowStatFigures(){
        system("color 0A");

        cout << "# of Graphs to generate: ";
        cin >> numGraphs;
        cout << "Show percent text [Y/N]?: ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y'){
            int *ptr = new int [numGraphs];

            for (int i = 0; i < numGraphs; i ++){
                cout << "Graph #"<< i + 1 << ": ";
                cin >> ptr[i];
                }
                cout << "" << endl;

            for (int i = 0; i < numGraphs; i ++){
                for (int j = 1; j <= ptr[i]; j ++){
                    cout << ch2;
                    }
                    /*for (int g = 0; g < 26; g++){
                        cout << ch;
                    }*/
            cout << " " << ptr[i] << " / 100%" << endl;
            }

        }
        else if (choice == 'N' || choice == 'n') {
            int *ptr = new int [numGraphs];

            for (int i = 0; i < numGraphs; i ++){
                cout << "Graph #"<< i + 1 << ": ";
                cin >> ptr[i];
                }
                cout << "" << endl;

            for (int i = 0; i < numGraphs; i ++){
                for (int j = 1; j <= ptr[i]; j ++){
                    cout << ch;
                    }
            cout << endl;
                }
            }
    }
};

int main(){
CreateGraph obj;
obj.ShowStatFigures();
return 0;
}


