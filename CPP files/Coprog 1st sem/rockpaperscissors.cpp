//
//  main.cpp
//  rockpaperscissors
//
//  Created by Zeth Raphael T. Arguelles on 27/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char p1, p2;
    char s = 's';
    char p = 'p';
    char r = 'r';
    cout << "s = scissors\n p = paper\n r = rock\n";
    cout << "What did player 1 choose?\n";
    cin >> p1;
    cout << "What did player 2 choose?\n";
    cin >> p2;
    if ((p1 == s && p2 == s) || (p1 == p && p2 == p) || (p1 == r && p2 == r))
    {
        cout << "Draw\n";
    }
    else if ((p1 == s && p2 == r) || (p1 == p && p2 == s) || (p1 == r && p2 == p))
    {
        cout << "Player 2 wins\n";
    }
    else if ((p1 == r && p2 == s) || (p1 == s && p2 == p) || (p1 == p && p2 == r))
    {
        cout << "Player 1 wins\n";
    }
    else
    {
        cout << "Error\n";
    }
    return 0;
}
