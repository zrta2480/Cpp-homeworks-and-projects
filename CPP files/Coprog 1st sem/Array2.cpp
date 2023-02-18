//
//  main.cpp
//  Array2
//
//  Created by Zeth Raphael T. Arguelles on 22/11/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int no[10], total = 0, average = 0, totno = 0;
    
    for (int counter = 0; counter < 10; counter++) {
        cout << "Input a no.: \n";
        cin >> no[counter];
        if (no[counter]%2 == 0) {
            total += no[counter];
            totno += 1;
        }
        
    }
    average = total/totno;
    cout << "Total: " << total << "\n";
    cout << "Average: " << average << "\n";
    for (int count = 0; count < 10; count++)
    {
        if (no[count]%2 == 0) {
        cout << "No. [" << count + 1 << "] = " << no[count] << "\n";
        }
        
    }
    return 0;
}
