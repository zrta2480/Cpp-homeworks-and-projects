//
//  main.cpp
//  LoopTest1
//
//  Created by Zeth Raphael T. Arguelles on 21/10/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand( static_cast<unsigned int>(time(NULL)));
    int num1, num2;
    int i2 = 0, i3 = 0;
    cout << "You will be playing against a CPU\n";
    cout << "Please only enter values from 1 to 100\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << "Player 1, Please enter a number.\n";
        cin >> num1;
        cout << "Player 2 has entered his/her number\n";
        num2 = 1 + (rand() % 100);
        cout << num2 << endl;
        if (num1 <= 100)
        {
            if (num1 > num2)
            {
                cout << "Player 1 wins\n";
                i2++;
            }
            else if (num2 > num1)
            {
                cout << "Player 2 wins\n";
                i3++;
            }
            else
            {
                cout << "error\n";
            }
        }
        else
        {
            cout << "Try again\n";
        }
        
    }
   if (i2 > i3)
   {
       cout << "Player 1 is the champion\n";
       cout << "Results: " << i2 << " : " << i3 << "\n";
   }
    else if (i3 > i2)
    {
        cout << "Player 2 is the champion\n";
        cout << "Results: " << i3 << " : " << i2 << "\n";
    }
    else
    {
        cout << "Error\n";
    }
    return 0;
}
