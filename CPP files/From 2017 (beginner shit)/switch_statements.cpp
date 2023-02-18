//
//  main.cpp
//  Switch Statements
//
//  Created by Zeth Raphael T. Arguelles on 06/11/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Enter any number (1 to 7)";
    cin >> ch;
    switch (ch)
    {
        case 1:
            cout << "Today is Monday\n";
            break;
        case 2:
            cout << "Today is Tuesday\n";
            break;
        case 3:
            cout << "Today is Wednesday\n";
            break;
        case 4:
            cout << "Today is Thursday\n";
            break;
        case 5:
            cout << "Today is Friday\n";
            break;
        case 6:
            cout << "Today is Saturday\n";
            break;
        case 7:
            cout << "Today is Sunday\n";
            break;
        default:
            cout << "Only enter value 1 to 7\n";
    }
    cin.clear();
    cin.ignore();
    cin.clear();
    return 0;
}
