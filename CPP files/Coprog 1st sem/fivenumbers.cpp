//
//  main.cpp
//  Arguelles_Coprog1
//
//  Created by Zeth Raphael T. Arguelles on 23/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, num4, num5;
    float ave;
    int total;
    cout << "What is your first number?\n";
    cin >> num1;
    cout << "What is your second number?\n";
    cin >> num2;
    cout << "What is your third number?\n";
    cin >> num3;
    cout << "What is your fourth number?\n";
    cin >> num4;
    cout << "What is your fifth number?\n";
    cin >> num5;
    total = num1 + num2 + num3 + num4 + num5;
    ave = total/5;
    cout << "The total is " << total << "\n";
    cout << "The average is " << ave << "\n";
    
    return 0;
}
