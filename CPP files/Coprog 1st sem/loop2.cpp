//
//  main.cpp
//  Loop2
//
//  Created by Zeth Raphael T. Arguelles on 30/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Type in a low number\n";
    cin >> num1;
    cout << "Type in a high number\n";
    cin >> num2;
    
    while (num1 >= num2)
    {
        cout << "This needs to be higher: " << num1 << "\n";
        num1--;
    }
    
    
    cout << "Your input is correct: " << num1 << " is less than " << num2 << "\n";
    
    return 0;
}
