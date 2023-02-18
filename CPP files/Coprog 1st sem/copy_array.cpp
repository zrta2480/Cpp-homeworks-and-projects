//
//  main.cpp
//  Array4
//
//  Created by Zeth Raphael T. Arguelles on 06/12/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num1[5], num2[5];
    for (int i=0; i < 5; i++)
    {
        cout << "Enter number: \n";
        cin >> num1[i];
    }
    cout << "Array 1: \n";
    for (int x =0; x < 5; x++)
    {
        cout << "No. [" << x + 1 << "] = " << num1[x] << "\n";
    }
    cout << "Array 2: \n";
    for (int y = 0; y < 5; y++)
    {
        
        num2[y] = num1[y];
        cout << "No. [" << y + 1 << "] = " << num2[y] << "\n";
    }
    return 0;
}
