//
//  main.cpp
//  LoopTest5
//
//  Created by Zeth Raphael T. Arguelles on 23/10/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    for (int x = 0; x < 50; x++)
    {
        
        if (((x % 11 == 0) || (x % 13 == 0) || (x % 17 == 0)) && (x % 30 != 0))
        {
            num += x;
            cout <<  num << " ";
        }
        else
        {
            cout << " ";
        }
       
    }
    return 0;
}
