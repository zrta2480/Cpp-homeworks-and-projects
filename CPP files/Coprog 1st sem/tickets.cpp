//
//  main.cpp
//  Seatwork1
//
//  Created by Zeth Raphael T. Arguelles on 27/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int blchers, frnt, grnd, spec, total;
    float tax, profit;
    cout << "Enter the number of tickets sold for the bleachers: \n";
    cin >> blchers;
    cout << "Enter the number of tickets sold for the front: \n";
    cin >> frnt;
    cout << "Enter the number of tickets sold for the ground: \n";
    cin >> grnd;
    cout << "Enter the number of tickets sold for the special seats: \n";
    cin >> spec;
    total = (blchers*500) + (frnt*1000) + (grnd*300) + (spec*1500);
    tax = total*0.05;
    profit = total - tax;
    cout << "The profit is " << profit << "\n";
    return 0;
}
