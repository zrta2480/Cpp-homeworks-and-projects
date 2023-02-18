//
//  main.cpp
//  Switch3
//
//  Created by Zeth Raphael T. Arguelles on 04/10/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    char p1, p2;
    cout << "\n s = scissors\n p = paper\n r = rock\n";
    cout << "What did player 1 choose?\n";
    cin >> p1;
    cout << "What did player 2 choose?\n";
    cin >> p2;
    p1 = toupper(p1);
    p2 = toupper(p2);
    
    switch (p1)
    {
        case 'S':
        {
            if (p2 == 'P')
            {
                cout << "Player 1 wins\n";
            }
            else if (p2 == 'S')
            {
                cout << "Draw\n";
            }
            else if (p2 == 'R')
            {
                cout << "Player 2 wins\n";
            }
            else
            {
                cout << "Error\n";
            }
            break;
        }
        case 'P':
        {
            if (p2 == 'R')
            {
                cout << "Player 1 wins\n";
            }
            else if (p2 == 'P')
            {
                cout << "Draw\n";
            }
            else if (p2 == 'S')
            {
                cout << "Player 2 wins\n";
            }
            else
            {
                cout << "Error\n";
            }
            break;
        }
        case 'R':
        {
            if (p2 == 'S')
            {
                cout << "Player 1 wins\n";
            }
            else if (p2 == 'R')
            {
                cout << "Draw\n";
            }
            else if (p2 == 'P')
            {
                cout << "Player 2 wins\n";
            }
            else
            {
                cout << "Error\n";
            }
            break;
        }
            default:
        {
            cout << "Error\n";
        }
    }
    return 0;
}
