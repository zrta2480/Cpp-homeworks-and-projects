//
//  main.cpp
//  Loop6
//
//  Created by Zeth Raphael T. Arguelles on 11/10/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    while (num <= 100)
    {
        
        if ((num %3 == 0)&&( num %5 == 0)) {
            cout << "Num: " << num << "\n";
            
        }
        num++;
    }
    return 0;
}
