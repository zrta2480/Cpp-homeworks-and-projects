//
//  main.cpp
//  Coprog2
//
//  Created by Zeth Raphael T. Arguelles on 23/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    float kil;
    float mile;
    cout << "What is the distance in kilometers?\n";
    cin >> kil;
    
    mile = kil/1.61;
    
    cout << kil << " kilometers in miles is " << mile << " miles\n";
    return 0;
}
