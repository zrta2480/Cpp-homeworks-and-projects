//
//  main.cpp
//  MP2B-S11-01-B02
//
//  Created by Zeth Raphael T. Arguelles on 23/10/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>

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
    
    cout << "QUARTERLY GRADES: \n";
    cout << "\n";
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
    
    
    sum = grd1 + grd2 + grd3 + grd4;
    average = sum / 4;
    cout << "Average Grade: " << average << "\n" ;
    cout << "Remarks: \n";
    if (average >= 75)
        cout << "PASS\n";
    else
        cout << "FAIL\n";

    {
        if (average >= 90 && grd1 >= 88 && grd2 >= 88 && grd3 >= 88 && grd4 >= 88)
       
       cout << "WITH HONOURS\n";
    
    }
    {
    
       if (average < 90 && average >= 85 && grd1 >= 80 && grd2 >= 80 && grd3 >= 80 && grd4 >= 80)
        
       cout << "ACHIEVER\n";
    }

    
    
    cin.get();
    return 0;
}

