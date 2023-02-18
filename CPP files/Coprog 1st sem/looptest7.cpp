//
//  main.cpp
//  LoopTest7
//
//  Created by Zeth Raphael T. Arguelles on 23/10/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand( static_cast<unsigned int>(time(NULL)));
    int num1, x1 = 0, x2 = 0;
    do // makes sure the input number is from 1 to 6
    {
        cout << "Choose a number between 1 and 6\n";
        cin >> num1;
    }
    while (num1 > 6 || num1 < 1);
    cout << "How many rolls do you think until your number is rolled?\n";
    cin >> x1;
    cout << "Rolls: \n";
    while (x1 != x2)
    {
        int num2 = 1 + (rand() % 6);
        cout << num2 << "\n";
        x2++;
        if ((num1 == num2) && (x1 == x2))
        {
            cout << "\n Results: You win\n\n";
        }
        else if ((x1 == x2) && (num1 != num2))
        {
            cout << "\n Results: You lose\n\n";
        }
        else
        {
            cout << "";
        }
    }
    
    return 0;
}
