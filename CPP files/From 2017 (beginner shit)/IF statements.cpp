//
//  main.cpp
//  IF statements
//
//  Created by Zeth Raphael T. Arguelles on 20/10/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int sum = 0, num = 0;
    int a = 34, b = 45;
    system ("cls");
    sum = a + b;
    num = sum % 2;
    if (num==0)
        cout << "The sum is an even number";
    else
        cout << "The sum is an odd number";
    cin.get();
    return 0;
}
