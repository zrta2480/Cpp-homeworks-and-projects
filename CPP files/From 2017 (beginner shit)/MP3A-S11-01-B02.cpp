/*
//  main.cpp
//  MP3A-S11-01-B02
//  Created by Zeth Raphael T. Arguelles
//  Date: 06/11/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
*/

#include <iostream>
using namespace std;
int main()
{
    int ch, fint, sint, sum1, tint, sum2, ffint, sum3, fffint, sum4, ssint, sum5, sssint, sum6, eint, sum7, nint, sum8, ttint, sum9;
    cout << "How many integers would you like to add (2 to 10):";
    cin >> ch;
    switch (ch)
    {
        case 2:
            
            cout << "Enter 1st integer:\n";
            cin >> fint;
            cout << "\n";
            cout << "Enter 2nd integer:\n";
            cin >> sint;
            sum1 = fint + sint;
            cout << "The sum of the integers: " << sum1 ;
            break;
        case 3:
            cout << "Enter 1st integer:\n";
            cin >> fint;
            cout << "\n";
            cout << "Enter 2nd integer:\n";
            cin >> sint;
            cout << "\n";
            cout << "Enter 3rd integer:\n";
            cin >> tint;
            sum2 = fint + sint + tint;
            cout << "The sum of the integers: " << sum2 ;
            break;
        case 4:
            cout << "Enter 1st integer:\n";
            cin >> fint;
            cout << "\n";
            cout << "Enter 2nd integer:\n";
            cin >> sint;
            cout << "\n";
            cout << "Enter 3rd integer:\n";
            cin >> tint;
            cout << "\n";
            cout << "Enter 4th integer:\n";
            cin >> ffint;
            sum3 = fint + sint + tint + ffint;
            cout << "The sum of the integers: " << sum3 ;
            break;
        case 5:
            cout << "Enter 1st integer:\n";
            cin >> fint;
            cout << "\n";
            cout << "Enter 2nd integer:\n";
            cin >> sint;
            cout << "\n";
            cout << "Enter 3rd integer:\n";
            cin >> tint;
            cout << "\n";
            cout << "Enter 4th integer:\n";
            cin >> ffint;
            cout << "\n";
            cout << "Enter 5th integer:\n";
            cin >> fffint;
            sum4 = fint + sint + tint + ffint + fffint;
            cout << "The sum of the integers: " << sum4 ;
            break;
        case 6:
            cout << "Enter 1st integer:\n";
            cin >> fint;
            cout << "\n";
            cout << "Enter 2nd integer:\n";
            cin >> sint;
            cout << "\n";
            cout << "Enter 3rd integer:\n";
            cin >> tint;
            cout << "\n";
            cout << "Enter 4th integer:\n";
            cin >> ffint;
            cout << "\n";
            cout << "Enter 5th integer:\n";
            cin >> fffint;
            cout << "\n";
            cout << "Enter 6th integer:\n";
            cin >> ssint;
            sum5 = fint + sint + tint + ffint + fffint + ssint;
            cout << "The sum of the integers: " << sum5 ;
            break;
        case 7:
            cout << "Enter 1st integer:\n";
            cin >> fint;
            cout << "\n";
            cout << "Enter 2nd integer:\n";
            cin >> sint;
            cout << "\n";
            cout << "Enter 3rd integer:\n";
            cin >> tint;
            cout << "\n";
            cout << "Enter 4th integer:\n";
            cin >> ffint;
            cout << "\n";
            cout << "Enter 5th integer:\n";
            cin >> fffint;
            cout << "\n";
            cout << "Enter 6th integer:\n";
            cin >> ssint;
            cout << "\n";
            cout << "Enter 7th integer:\n";
            cin >> sssint;
            sum6 = fint + sint + tint + ffint + fffint + ssint + sssint;
            cout << "The sum of the integers: " << sum6 ;
            break;
        case 8:
            cout << "Enter 1st integer:\n";
            cin >> fint;
            cout << "\n";
            cout << "Enter 2nd integer:\n";
            cin >> sint;
            cout << "\n";
            cout << "Enter 3rd integer:\n";
            cin >> tint;
            cout << "\n";
            cout << "Enter 4th integer:\n";
            cin >> ffint;
            cout << "\n";
            cout << "Enter 5th integer:\n";
            cin >> fffint;
            cout << "\n";
            cout << "Enter 6th integer:\n";
            cin >> ssint;
            cout << "\n";
            cout << "Enter 7th integer:\n";
            cin >> sssint;
            cout << "\n";
            cout << "Enter 8th integer:\n";
            cin >> eint;
            sum7 = fint + sint + tint + ffint + fffint + ssint + sssint + eint;
            cout << "The sum of the integers: " << sum7 ;
            break;
        case 9:
            cout << "Enter 1st integer:\n";
            cin >> fint;
            cout << "\n";
            cout << "Enter 2nd integer:\n";
            cin >> sint;
            cout << "\n";
            cout << "Enter 3rd integer:\n";
            cin >> tint;
            cout << "\n";
            cout << "Enter 4th integer:\n";
            cin >> ffint;
            cout << "\n";
            cout << "Enter 5th integer:\n";
            cin >> fffint;
            cout << "\n";
            cout << "Enter 6th integer:\n";
            cin >> ssint;
            cout << "\n";
            cout << "Enter 7th integer:\n";
            cin >> sssint;
            cout << "\n";
            cout << "Enter 8th integer:\n";
            cin >> eint;
            cout << "\n";
            cout << "Enter 9th integer:\n";
            cin >> nint;
            sum8 = fint + sint + tint + ffint + fffint + ssint + sssint + eint + nint;
            cout << "The sum of the integers: " << sum8 ;
            break;
        case 10:
            cout << "Enter 1st integer:\n";
            cin >> fint;
            cout << "\n";
            cout << "Enter 2nd integer:\n";
            cin >> sint;
            cout << "\n";
            cout << "Enter 3rd integer:\n";
            cin >> tint;
            cout << "\n";
            cout << "Enter 4th integer:\n";
            cin >> ffint;
            cout << "\n";
            cout << "Enter 5th integer:\n";
            cin >> fffint;
            cout << "\n";
            cout << "Enter 6th integer:\n";
            cin >> ssint;
            cout << "\n";
            cout << "Enter 7th integer:\n";
            cin >> sssint;
            cout << "\n";
            cout << "Enter 8th integer:\n";
            cin >> eint;
            cout << "\n";
            cout << "Enter 9th integer:\n";
            cin >> nint;
            cout << "\n";
            cout << "Enter 10th integer:\n";
            cin >> ttint;
            sum9 = fint + sint + tint + ffint + fffint + ssint + sssint + eint + nint + ttint;
            cout << "The sum of the integers: " << sum9 ;
            break;
        default:
            cout << "Only enter value 2 to 10\n";
    }
    cin.clear();
    cin.ignore();
    cin.clear();
    return 0;
}

