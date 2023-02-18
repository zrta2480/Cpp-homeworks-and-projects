//
//  main.cpp
//  coprog5
//
//  Created by Zeth Raphael T. Arguelles on 23/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int head, leg, chic, goat;
    cout << "What is the total number of heads?\n";
    cin >> head;
    cout << "What is the total number of legs?\n";
    cin >> leg;
    chic = (head*2) - leg/2;
    goat = head - chic;
    
    cout << "Number of chickens: " << chic << "\n";
    cout << "Number of goats: " << goat << "\n";
    return 0;
}
