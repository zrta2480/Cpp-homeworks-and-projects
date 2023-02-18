//
//  main.cpp
//  Loop8
//
//  Created by Zeth Raphael T. Arguelles on 11/10/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    char p1, p2;
    int i = 0, i1 = 0, i2 = 0, i3 = 0;
    do {
    cout << " s = scissors\n p = paper\n r = rock\n";
    cout << "What did player 1 choose?\n";
    cin >> p1;
    cout << "What did player 2 choose?\n";
    cin >> p2;
    p1 = toupper(p1);
    p2 = toupper(p2);
    if ((p1 == 'S' && p2 == 'S') || (p1 == 'P' && p2 == 'P') || (p1 == 'R' && p2 == 'R'))
    {
        cout << "Draw\n";
        i3++;
        cout << "Number of wins for player 1: " << i1 << "\n";
        cout << "Number of wins for player 2: " << i2 << "\n";
        cout << "Number of draws: " << i3 << "\n";
    }
    else if ((p1 == 'S' && p2 == 'R') || (p1 == 'P' && p2 == 'S') || (p1 == 'R' && p2 == 'P'))
    {
        cout << "Player 2 wins\n";
        i2++;
        cout << "Number of wins for player 1: " << i1 << "\n";
        cout << "Number of wins for player 2: " << i2 << "\n";
        cout << "Number of draws: " << i3 << "\n";
    }
    else if ((p1 == 'R' && p2 == 'S') || (p1 == 'S' && p2 == 'P') || (p1 == 'P' && p2 == 'R'))
    {
        cout << "Player 1 wins\n";
        i1++;
        cout << "Number of wins for player 1: " << i1 << "\n";
        cout << "Number of wins for player 2: " << i2 << "\n";
        cout << "Number of draws: " << i3 << "\n";
    }
    else
    {
        cout << "Error\n";
    }
        i++;
    } while (i < 3);
    return 0;
}
