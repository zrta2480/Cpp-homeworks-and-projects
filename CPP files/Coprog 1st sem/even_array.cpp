//
//  main.cpp
//  Array3
//
//  Created by Zeth Raphael T. Arguelles on 06/12/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num1[30];
    for (int i = 0; i < 30; i++)
    {
        cout << "Enter a number\n";
        cin >> num1[i];
    }
    cout << "The even numbers: \n";
    for (int y = 0; y < 30; y++)
    {
        if (num1[y] % 2 == 0)
        {
            cout << "No. [" << y + 1 << "] = " << num1[y] << "\n";
        }
    }
    return 0;
}
