//
//  main.cpp
//  Function3
//
//  Created by Zeth Raphael T. Arguelles on 18/11/2019.
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
    return (l*w)/2;
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
float vol (float srad){
    return ((4*(srad*srad*srad))*M_PI)/3;
}
float vol (float b, float h){
    return M_PI*(b*b)*h;
}
double vol (double b1, double b2){
    return (b1*b2)/3;
}
int vol (int h1, int h2){
    return (M_PI*(h1*h1)*h2)/3;
}

void compute_areaT()
{
    float bas, hgt, anst = 0;
    cout << "You chose right traingle\n";
    cout << "What is the length of the base? \n";
    cin >> bas;
    cout << "What is the length of the height? \n";
    cin >> hgt;
    anst = area(hgt, bas);
    cout << "Area of a right triangle: " << anst << "\n";
}

void compute_areaH()
{
    float sid, ansh = 0;
    
    cout << "You chose hexagon\n";
    cout << "What is the length of the sides? \n";
    cin >> sid;
    ansh = area(sid);
    cout << "Area of a hexagon: " << ansh << "\n";
}

void compute_areaP()
{
    float bas1, bas2, hgt, ansp = 0;
    cout << "You chose trapezoid\n";
    cout << "What is the length of the base1? \n";
    cin >> bas1;
    cout << "What is the length of the base2? \n";
    cin >> bas2;
    cout << "What is the length of the height? \n";
    cin >> hgt;
    ansp = area(bas1, bas2, hgt);
    cout << "Area of a trapezoid: " << ansp << "\n";
}

void compute_areaC()
{
    float rad, ansc = 0;
    cout << "You chose circle\n";
    cout << "What is the length of the radius? \n";
    cin >> rad;
    ansc = area(rad);
    cout << "Area of a circle: " << ansc << "\n";
}

void compute_volS()
{
    float rad, ansc = 0;
    cout << "You chose sphere\n";
    cout << "What is the length of the radius? \n";
    cin >> rad;
    ansc = vol(rad);
    cout << "Volume of a sphere: " << ansc << "\n";
}

void compute_volC()
{
    float bas, hgt, anst = 0;
    cout << "You chose cylinder\n";
    cout << "What is the length of the radius? \n";
    cin >> bas;
    cout << "What is the length of the height? \n";
    cin >> hgt;
    anst = vol(bas, hgt);
    cout << "Volume of a cylinder: " << anst << "\n";
}

void compute_volT()
{
    float bas, hgt, anst = 0, ansv = 0;
    cout << "You chose Trianglualr pyramid\n";
    cout << "What is the length of the base? \n";
    cin >> bas;
    cout << "What is the length of the height? \n";
    cin >> hgt;
    anst = (bas*hgt)/2;
    ansv = vol(anst, hgt);
    cout << "Volume of a trianglular pyramid: " << ansv << "\n";
}

void compute_volCC()
{
    float bas, hgt, anst = 0;
    cout << "You chose cone\n";
    cout << "What is the length of the radius? \n";
    cin >> bas;
    cout << "What is the length of the height? \n";
    cin >> hgt;
    anst = vol(bas, hgt);
    cout << "Volume of a cone: " << anst << "\n";
}

int main() {
    char select1, select2, select3;
    do
    {
        cout << "What do you want to compute? Area or Volume?\n";
        cout << "Enter 'A' for area and 'V' for volume\n";
        cin >> select1;
        select1 = toupper(select1);
        if (select1 == 'A')
        {
            cout << "Which shape do you want?\n";
            cout << "T = traingle\n H = hexagon\n P = trapezoid\n  C = circle\n";
            cin >> select2;
            select2 = toupper(select2);
            switch (select2) {
                case 'T':
                {
                    compute_areaT();
                    break;
                }
                case 'H':
                {
                    compute_areaH();
                    break;
                }
                case 'P':
                {
                    compute_areaP();
                    break;
                }
                case 'C':
                {
                    compute_areaC();
                    break;
                }
                default:
                    cout << "Error\n";
            }
        }
        else if (select1 == 'V')
        {
            cout << "Which shape do you want?\n";
            cout << "S = sphere\n C = cylinder\n T = triangular pyramid\n O = cone\n";
            cin >> select2;
            select2 = toupper(select2);
            switch (select2){
                case 'S':
                {
                    compute_volS();
                    break;
                }
                case 'C':
                {
                    compute_volC();
                    break;
                }
                case 'T':
                {
                    compute_volT();
                    break;
                }
                case 'O':
                {
                    compute_volCC();
                    break;
                }
                default:
                    cout << "Error\n";
            }
        }
        else
        {
            cout << "Error\n";
        }
        cout << "Do you want to try again? Y or N\n";
        cin >> select3;
        select3 = toupper(select3);
    } while (select3 == 'Y');
    return 0;
}
