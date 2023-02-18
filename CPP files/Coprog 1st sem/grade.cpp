//
//  main.cpp
//  coprog4
//
//  Created by Zeth Raphael T. Arguelles on 23/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    float mid, fin, mid2, fin2, grad;
    cout << "What is your midterm grade?\n";
    cin >> mid;
    cout << "What is your final grade?\n";
    cin >> fin;
    mid2 = mid * 0.5;
    fin2 = fin * 0.5;
    grad = mid2 + fin2;
    
    cout << "Your Average Grade is " << grad << "\n";
    
    return 0;
}
