//
//  main.cpp
//  Functions2
//
//  Created by Zeth Raphael T. Arguelles on 15/11/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float area(float r){
    return M_PI*(r*r);
}
float area (float l, float w){
    return l*w;
}
float area (float a, float b, float h){
    return ((a+b)*h)/2;
}
double area (double sid){
    return (((3*(sqrt(3)))*(sid*sid))/2);
}
int area (int e){
    return (sqrt(3)*(e*e))/4;
}
int main() {
    float ra, areaC = 0, areaR = 0, l2, w2, areaT = 0, areah = 0, areae = 0;
    areaC = area(6.0);
    cout << "The area of the 1st circle: " << areaC << "\n";
    cout << "Input radius: ";
    cin >> ra;
    areaC = area(ra);
    cout << "The area of the 2nd circle: " << areaC << "\n\n";
    areaR = area(6, 2);
    cout << "The area of the 1st rectangle: " << areaR << "\n\n";
    cout << "Input length: ";
    cin >> l2;
    areaR = area(l2, 2);
    cout << "The area of the 2nd rectangle: " << areaR << "\n";
    cout << "Input width: ";
    cin >> w2;
    areaR = area(l2, w2);
    cout << "The area of the final rectangle: " << areaR << "\n\n";
    areaT = area(5, 7, 9);
    cout << "The area of the trapezoid: " << areaT << "\n\n";
    areah = area(7);
    cout << "Area of hexagon: " << areah << "\n\n";
    areae = area(6);
    cout << "Area of the equialteral triangle: " << areae << "\n";
    return 0;
}
