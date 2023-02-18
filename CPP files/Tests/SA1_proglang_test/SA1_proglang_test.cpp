// SA1_proglang_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        x = x++;
        cout << x << endl;
    }













    int a = 12;
    int b = 6;
    int c = a + b;
    //cout << c + a + b;

    a = 12;
    b = 6;
    if (a < b)
    {
        //cout << a;
    }
    else
    {
        //cout << b;
    }

    a = 12;
    b = 6;
    while (b < a)
    {
        a = a - 1;
        ///cout << a + b;
    }
    
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
