#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define dinoPos 2
#define hurdlePos 74

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int dogy;
int speed = 12;
int gameover = 0;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setcursor(bool visible, DWORD size){
    if (size == 0) {
        size = 20; // default cursor size Changing to numbers from 1 to 20, decreases cursor width
    }
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, & lpCursor);
}

void init() {
    system("cls");
    gameover = 0;
    gotoxy(59, 2); cout<< "" << "" << "" <<"Score: ";
    for (int i = 0; i < 119; i++){
        SetConsoleTextAttribute(console,11);                        ///font color change
    	gotoxy(1+i, 1); cout<<"ß";                                  ///borders
    	gotoxy(1+i, 25); cout<<"ß";
	}
}

void movedog(int jump = 0) {
    static int foot = 0;

    if (jump == 0)
        dogy = 0;
    else if (jump == 2)
        dogy--;
    else dogy++;

    gotoxy(dinoPos, 14 - dogy);cout<<"                 ";
    gotoxy(dinoPos, 15 - dogy);cout<<"         0      0";
    gotoxy(dinoPos, 16 - dogy);cout<<"         00000000";
    gotoxy(dinoPos, 17 - dogy);cout<<" 0       0000(**)";
    gotoxy(dinoPos, 18 - dogy);cout<<" 0       0000##00";
    gotoxy(dinoPos, 19 - dogy);cout<<" 0      00000##00";
    gotoxy(dinoPos, 20 - dogy);cout<<" 000000000000##00";
    gotoxy(dinoPos, 21 - dogy);cout<<" 000000000000####";
    gotoxy(dinoPos, 22 - dogy);cout<<"   000000000 #  #";
    gotoxy(dinoPos, 23 - dogy);

    if (jump == 1 || jump == 2) {
        cout<<"    000 000      ";
        gotoxy(2, 24 - dogy);
        cout<<"    000  00      ";
    }
	else if (foot == 0) {
        cout<<"    0000  000    ";
        gotoxy(2, 24 - dogy);
        cout<<"      00         ";
        foot = !foot;
    }
	else if (foot == 1) {
        cout<<"     000 00      ";
        gotoxy(2, 24 - dogy);
        cout<<"          00    ";
        foot = !foot;
    }

    gotoxy(2, 25 - dogy);
    if (jump == 0) {
        SetConsoleTextAttribute(console,3);
        cout<<"ßßßßßßßßßßßßßßßß";
    } else {
        cout<<"                ";
    }
    Sleep(speed);
}
void drawHurdle() {
    static int plantX = 0;
	static int score = 0;
    if (plantX == 56 && dogy < 4) {
        score = 0;
        speed = 40;
        SetConsoleTextAttribute(console,4);                 ///font color change
        gotoxy(55, 8); cout<<"______________";
        gotoxy(55, 10); cout<<"  Game Over!  ";
        gotoxy(55, 11); cout<<"______________";
        getch();
        gameover = 1;
    }

    SetConsoleTextAttribute(console,2);                     ///font color change
    gotoxy(hurdlePos - plantX, 20);cout<<"*** *** ";
    gotoxy(hurdlePos - plantX, 21);cout<<"*** *** ";
    gotoxy(hurdlePos - plantX, 22);cout<<"***_*** ";
    gotoxy(hurdlePos - plantX, 23);cout<<"   *  ";
    gotoxy(hurdlePos - plantX, 24);cout<<"   *  ";
    SetConsoleTextAttribute(console,7);                     ///font color

    plantX++;

    if (plantX == 73) {
        plantX = 0;
        score++;
        gotoxy(11, 2);cout<<                   "     ";
        gotoxy(66, 2);cout<< score;                         ///score location
        if (speed > 20){
            speed--;
            }
    }
}
void play(){
	system("cls");
    char ch;
    int i;
	init();
    while (true) {
        while (!kbhit()) {
            if( gameover==1 ){
            	return;
			}
			movedog();
            drawHurdle();
        }
        ch = getch();
        if (ch == 32) {
        	i = 0;
            while( i < 12) {
                movedog(1);
                drawHurdle();
                i++;
            }
            while(i > 0) {
                movedog(2);
                drawHurdle();
                i--;
        	}
        }
		else if (ch == 'p'||ch=='P')
           getch();
		else if (ch == 27)
           break;
    }
}

int main() {                                                        ///main menu

    setcursor(0, 0);

    do{
		system("cls");
		SetConsoleTextAttribute(console,2);                         ///font color
		gotoxy(45,5); cout<<"----------------------------";
		gotoxy(45,6); cout<<"|         DOGGY RUN        |";
		gotoxy(45,7); cout<<"----------------------------";

		SetConsoleTextAttribute(console,3);                         ///font  color
		gotoxy(45,9); cout << "----------------------------";
		gotoxy(53,11); cout << "Instructions: ";
		gotoxy(48,13); cout << "Press SPACE BAR to jump";
		gotoxy(45,15); cout << "----------------------------";

		SetConsoleTextAttribute(console,6);                         ///font color
		gotoxy(45,17); cout<<"==== Press '1' to Start ====";
		gotoxy(45,19); cout<<"==== Press '2' to Quit  ====";
		SetConsoleTextAttribute(console,7);                         ///font color


		char op = getche();

		if( op=='1') play();                                        ///if statement for user input. calls play() function to start game
		else if( op=='2') system("cls"); exit(0);                   ///else clears the screen then exits the program

	}while(1);

	return 0;
}
