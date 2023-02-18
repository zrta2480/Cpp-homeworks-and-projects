// teachers_day_greeting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

//HANDLE AND COORD
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
COORD   CursorPosition;

//POSITION
void gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

void Screen()
{
	RECT Window;
	MoveWindow(GetConsoleWindow(), GetSystemMetrics(SM_CXSCREEN) / 2 - 660 / 2, GetSystemMetrics(SM_CYSCREEN) / 2 - 640 / 2, 660, 640, TRUE);
	system("mode con: cols=100 lines=50");
}

int main()
{
	Screen();

	SetConsoleTitle(TEXT("HAPPY TEACHERS' DAY FROM C4A!"));

	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                  //Width of each character in the font
	cfi.dwFontSize.Y = 30;                 //Height of each character in the font
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	while (true)
	{
		system("color 2F");
		Sleep(1000);

		gotoXY(20, 10); cout << " __ __ __ __ ___________ __ __ " << endl;
		gotoXY(20, 11); cout << "|  |  |  _  |  _  |  _  |  |  |" << endl;
		gotoXY(20, 12); cout << "|     |     |   __|   __|_   _|" << endl;
		gotoXY(20, 13); cout << "|__|__|__|__|__|  |__|    |_|  " << endl << endl;

		gotoXY(20, 14); cout << " _____ _____ _____ _____ _____ _____ _____ _____    ____  _____ __ __ " << endl;
		gotoXY(20, 15); cout << "|_   _|   __|  _  |     |  |  |   __| __  |   __|  |    \\|  _  |  |  |" << endl;
		gotoXY(20, 16); cout << "  | | |   __|     |   --|     |   __|    -|__   |  |  |  |     |_   _|" << endl;
		gotoXY(20, 17); cout << "  |_| |_____|__|__|_____|__|__|_____|__|__|_____|  |____/|__|__| |_|  " << endl << endl;

		gotoXY(20, 18); cout << " _____ _____ _____ _____    _____ __  __  ______ " << endl;
		gotoXY(20, 19); cout << "|   __| __  |     |     |  |     | |_|  ||  _  |" << endl;
		gotoXY(20, 20); cout << "|   __|    -|  |  | | | |  |   --|___   ||     |" << endl;
		gotoXY(20, 21); cout << "|__|  |__|__|_____|_|_|_|  |_____|   |__||__|__|" << endl;

		system("color 3F");
		Sleep(1000);

		gotoXY(20, 10); cout << " __ __ __ __ ___________ __ __ " << endl;
		gotoXY(20, 11); cout << "|  |  |  _  |  _  |  _  |  |  |" << endl;
		gotoXY(20, 12); cout << "|     |     |   __|   __|_   _|" << endl;
		gotoXY(20, 13); cout << "|__|__|__|__|__|  |__|    |_|  " << endl << endl;

		gotoXY(20, 14); cout << " _____ _____ _____ _____ _____ _____ _____ _____    ____  _____ __ __ " << endl;
		gotoXY(20, 15); cout << "|_   _|   __|  _  |     |  |  |   __| __  |   __|  |    \\|  _  |  |  |" << endl;
		gotoXY(20, 16); cout << "  | | |   __|     |   --|     |   __|    -|__   |  |  |  |     |_   _|" << endl;
		gotoXY(20, 17); cout << "  |_| |_____|__|__|_____|__|__|_____|__|__|_____|  |____/|__|__| |_|  " << endl << endl;

		gotoXY(20, 18); cout << " _____ _____ _____ _____    _____ __  __  ______ " << endl;
		gotoXY(20, 19); cout << "|   __| __  |     |     |  |     | |_|  ||  _  |" << endl;
		gotoXY(20, 20); cout << "|   __|    -|  |  | | | |  |   --|___   ||     |" << endl;
		gotoXY(20, 21); cout << "|__|  |__|__|_____|_|_|_|  |_____|   |__||__|__|" << endl;

	}
	cin.get();
}


