/*
//  main.cpp
//  MP2A-S11-01-B02
//
//  Created by Zeth Raphael T. Arguelles on 20/10/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
*/

#include <iostream>
#include <curses.h>
using namespace std;
int main() {
    cout << "Student Information\n";
    
    string sect;
    cout << "Section: ";
    getline (cin, sect);
    cout << "\n";
    string cln;
    cout << "Classlist no.: ";
    getline (cin, cln);
    cout << "\n";
    string fname;
    cout << "Fullname: ";
    getline (cin, fname);
    cout << "\n";
    
    float grd1;
    float grd2;
    float grd3;
    float grd4;
    float sum;
    float average;
    
    cout << "First Quarter: ";
    cin >> grd1;
    cout << "\n";
    cout << "Second Quarter: ";
    cin >> grd2;
    cout << "\n";
    cout << "Third Quarter: ";
    cin >> grd3;
    cout << "\n";
    cout << "Fourth Quarter: ";
    cin >> grd4;
    cout << "\n";
    
    system ("clear");
    sum = grd1 + grd2 + grd3 + grd4;
    average = sum / 4;
    cout << "Average Grade: " << average << "\n" ;
    cout << "Remarks: ";
    if (average >= 75)
        cout << "PASS";
    else
        cout << "FAIL";
    
    cin.get();
    return 0;
}
