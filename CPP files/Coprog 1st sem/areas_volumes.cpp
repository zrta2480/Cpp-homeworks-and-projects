//
//  main.cpp
//  seatwork2
//
//  Created by Zeth Raphael T. Arguelles on 27/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    char shape;
    float rad, bas, hgt, sid, ansc, ansp, ansh, anst;
    float sq = sqrt(3);
    cout << "The shapes: \n";
    cout << "c = circle\n p = parallelogram\n h = hexagon\n r = right traingle\n";
    cout << "Which shape do you want?\n";
    cin >> shape;
    
    switch (shape)
    {
        case 'c':
            cout << "You chose circle\n";
            cout << "What is the length of the radius? \n";
            cin >> rad;
            ansc = (rad*rad)*M_PI;
            cout << "Area of a circle: " << ansc << "\n";
            break;
        case 'p':
            cout << "You chose parallelogram\n";
            cout << "What is the length of the base? \n";
            cin >> bas;
            cout << "What is the length of the height? \n";
            cin >> hgt;
            ansp = bas*hgt;
            cout << "Area of a parallelogram: " << ansp << "\n";
            break;
        case 'h':
            cout << "You chose hexagon\n";
            cout << "What is the length of the sides? \n";
            cin >> sid;
            ansh = (((3*sq)*(sid*sid))/2);
            cout << "Area of a hexagon: " << ansh << "\n";
            break;
        case 'r':
            cout << "You chose right traingle\n";
            cout << "What is the length of the base? \n";
            cin >> bas;
            cout << "What is the length of the height? \n";
            cin >> hgt;
            anst = (bas*hgt)/2;
            cout << "Area of a right triangle: " << anst << "\n";
            break;
        default:
            cout << "Error\n";
            
            
    }
    return 0;
}
