#include <iostream>
using namespace std;

class ExampleOne {
public:
    void show_WelcomeScreen(){
        cout<< "**************************" << endl;
        cout<< "*      W E L C O M E     *" << endl;
        cout<< "*           T O          *" << endl;
        cout<< "*           M Y          *" << endl;
        cout<< "*        W O R L D       *" << endl;
        cout<< "**************************" << endl;
    }
};

int main() {
ExampleOne obj;
obj.show_WelcomeScreen();
obj.show_WelcomeScreen();
obj.show_WelcomeScreen();
obj.show_WelcomeScreen();
return 0;
}
