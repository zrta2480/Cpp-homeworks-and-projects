#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
void gotoxy (int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main() {
    char menuOne;
    do {
        int powerSelect;
        do {
        gotoxy(5,10);
        cout << "Power[1/0]:\n";
        cout << "[1 - On/ 0 - Off]\n";
        cout << "Input: "; cin >> powerSelect;
        system("cls");
        } while(powerSelect > 1);
        switch (powerSelect)
        {
        case 1:
        {
            cout << "dick\n";
            break;
        }
        default:
            break;
        }
    } while (menuOne == 'P');
    return 0;
}