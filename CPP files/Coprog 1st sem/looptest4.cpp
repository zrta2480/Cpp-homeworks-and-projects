//
//  main.cpp
//  LoopTest4
//
//  Created by Zeth Raphael T. Arguelles on 22/10/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    srand( static_cast<unsigned int>(time(NULL)));
    int tim, x = 0, num;
    cout << "How many times do you want to roll the dice?\n";
    cin >> tim;
    while (tim > x)
    {
        x++;
        num = 1 + (rand() % 6);
        cout << "Dice roll " << x << ": " << num << "\n";
        
        if (tim == x) //makes sure the final results appear after the last number
        {
            cout << "\nFinal Result: \n";
        switch (num)
        {
            case 1:
            {
                cout << "You won 100 pesos\n";
                break;
            }
            case 2:
            {
                cout << "You won a new phone\n";
                break;
            }
            case 3:
            {
                cout << "You won a new car\n";
                break;
            }
            case 4:
            {
                cout << "You lose. \n";
                break;
            }
            case 5:
            {
                cout << "You won 100,000 pesos\n";
                break;
            }
            case 6:
            {
                cout << "You won a 5 night vacation to singapore\n";
                break;
            }
                default:
            {
                cout << "Error\n";
            }
        }
        }
    }
    
    
    
    return 0;
}
