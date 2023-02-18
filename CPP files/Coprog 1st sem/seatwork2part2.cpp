//
//  main.cpp
//  seatwork2part2
//
//  Created by Zeth Raphael T. Arguelles on 27/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "What is your first number?\n";
    cin >> num1;
    cout << "What is your second number?\n";
    cin >> num2;
    cout << "What is your third number?\n";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << "The largest number is: " << num1 << "\n";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "The largest number is: " << num2 << "\n";
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "The largest number is: " << num3 << "\n";
    }
    else
    {
        cout << "Error\n";
    }
    return 0;
}
