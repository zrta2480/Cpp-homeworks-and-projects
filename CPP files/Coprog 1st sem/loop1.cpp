//
//  main.cpp
//  Loop1
//
//  Created by Zeth Raphael T. Arguelles on 30/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    for(int i = 1; i < 10; i++)
    {
        cout << "count: " << i << "\n";
        num1 = i*i;
        cout << "num1: " << num1 << "\n";
        num2 = i*i*i;
        cout << "num2: " << num2 << "\n\n";
    }
    return 0;
}
