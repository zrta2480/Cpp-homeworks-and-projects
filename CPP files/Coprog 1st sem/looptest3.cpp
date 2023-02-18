//
//  main.cpp
//  LoopTest3
//
//  Created by Zeth Raphael T. Arguelles on 21/10/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>

using namespace std;
int main() {
    
    char let[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int count, i = 0, num;
    cout << "How many time do you want to loop?\n";
    cin >> count;
   do
   {
       cout << "Enter a number between 0 and 9\n";
       cin >> num;
       i++;
       cout << "Letter " << i << ": " << let[num] << "\n";
       
   }
    while (count > i && num < 10);
    
    return 0;
}
