//
//  main.cpp
//  Array1
//
//  Created by Zeth Raphael T. Arguelles on 22/11/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int no[10], total = 0, average = 0;
    
    for (int counter = 0; counter < 10; counter++) {
        cout << "Input a no. \n";
        cin >> no[counter];
        total += no[counter];
    }
    average = total/10;
    cout << "Total: " << total << "\n";
    cout << "Average: " << average << "\n";
    for (int count = 0; count < 10; count++)
    {
        cout << "No. [" << count + 1 << "] = " << no[count] << "\n";
        
    }
    return 0;
}

