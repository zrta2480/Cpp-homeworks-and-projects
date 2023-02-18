//
//  main.cpp
//  Loop4
//
//  Created by Zeth Raphael T. Arguelles on 30/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++)
    {
        int num1, num2, num3;
        cout << "What is your first number?\n";
        cin >> num1;
        cout << "What is your second number?\n";
        cin >> num2;
        cout << "What is your third number?\n";
        cin >> num3;
        if (num1 > num2 && num1 > num3)
        {
            cout << "The largest is " << num1 << "\n";
        }
        else if (num2 > num1 && num2 > num3)
        {
            cout << "The largest is " << num2 << "\n";
        }
        else if (num3 > num1 && num3 > num2)
        {
            cout << "The largest is " << num3 << "\n";
        }
        else
        {
            cout << "Error, Please enter different values\n\n";
        }
    }

    
    return 0;
}
