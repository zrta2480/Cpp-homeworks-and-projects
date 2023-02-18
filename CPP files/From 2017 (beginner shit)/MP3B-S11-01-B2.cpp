//
//  main.cpp
//  MP3B-S11-01-B2
//
//  Created by Zeth Raphael T. Arguelles on 13/11/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char ch1;
    int ch2;
    float one, two, sum1, sum2, three, sum3, four, sum4, five, sub1, sub2, sub3, sub4, prd1, prd2, prd3, prd4, dv1, dv2,  dv3, dv4;
    cout << "Which mathematical operation would you like to use\n";
    cout << "A - Addition\n";
    cout << "B - Subtraction\n";
    cout << "C - Multiplication\n";
    cout << "D - Division\n";
    cout << "Answer: \n";
    cin >> ch1;
    cout << "\n";
    
    switch(ch1)
    {
        case 'A':
            cout << "How many integers would you like to use? (2 to 5)\n";
            cin >> ch2;
            cout << "\n";
            cout << "Enter the numbers to be added: \n";
            switch(ch2)
        {
            case 2:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                sum1 = one + two;
                cout << "Sum of the two integers: " << sum1 ;
                break;
            case 3:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                sum2 = one + two + three;
                cout << "Sum of the three integers: " << sum2 ;
                break;
            case 4:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                cout << "Enter 4th integer";
                cin >> four;
                cout << "\n";
                sum3 = one + two + three + four;
                cout << "Sum of the four integers: " << sum3 ;
                break;
            case 5:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                cout << "Enter 4th integer";
                cin >> four;
                cout << "\n";
                cout << "Enter 5th integer";
                cin >> five;
                cout << "\n";
                sum4 = one + two + three + four + five;
                cout << "Sum of the five integers: " << sum4 ;
                break;
            default:
                cout << "Only enter value 2 to 5\n";
        }
            break;
        case 'B':
            cout << "How many integers would you like to use? (2 to 5)\n";
            cin >> ch2;
            cout << "\n";
            cout << "Enter the numbers to be subtracted: \n";
            switch(ch2)
        {
            case 2:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                sub1 = one - two;
                cout << "Difference of the two integers: " << sub1 ;
                break;
            case 3:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                sub2 = one - two - three;
                cout << "Difference of the three integers: " << sub2 ;
                break;
            case 4:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                cout << "Enter 4th integer";
                cin >> four;
                cout << "\n";
                sub3 = one - two - three - four;
                cout << "Difference of the four integers: " << sub3 ;
                break;
            case 5:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                cout << "Enter 4th integer";
                cin >> four;
                cout << "\n";
                cout << "Enter 5th integer";
                cin >> five;
                cout << "\n";
                sub4 = one - two - three - four - five;
                cout << "Difference of the five integers: " << sub4 ;
                break;
            default:
                cout << "Only enter value 2 to 5\n";
        }
            break;
        case 'C':
            cout << "How many integers would you like to use? (2 to 5)\n";
            cin >> ch2;
            cout << "\n";
            cout << "Enter the numbers to be Multiplied: \n";
            switch(ch2)
        {
            case 2:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                prd1 = one * two;
                cout << "Product of the two integers: " << prd1 ;
                break;
            case 3:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                prd2 = one * two * three;
                cout << "Product of the three integers: " << prd2 ;
                break;
            case 4:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                cout << "Enter 4th integer";
                cin >> four;
                cout << "\n";
                prd3 = one * two * three * four;
                cout << "Product of the four integers: " << prd3 ;
                break;
            case 5:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                cout << "Enter 4th integer";
                cin >> four;
                cout << "\n";
                cout << "Enter 5th integer";
                cin >> five;
                cout << "\n";
                prd4 = one * two * three * four * five;
                cout << "Product of the five integers: " << prd4 ;
                break;
            default:
                cout << "Only enter value 2 to 5\n";
        }
            break;
        case 'D':
            cout << "How many integers would you like to use? (2 to 5)\n";
            cin >> ch2;
            cout << "\n";
            cout << "Enter the numbers to be Divided: \n";
            switch(ch2)
        {
            case 2:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                dv1 = one / two;
                cout << "Product of the two integers: " << dv1 ;
                break;
            case 3:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                dv2 = one / two / three;
                cout << "Product of the three integers: " << dv2 ;
                break;
            case 4:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                cout << "Enter 4th integer";
                cin >> four;
                cout << "\n";
                dv3 = one / two / three / four;
                
                
                cout << "Product of the four integers: " << dv3 ;
                break;
            case 5:
                cout << "Enter 1st integer";
                cin >> one;
                cout << "\n";
                cout << "Enter 2nd integer";
                cin >> two;
                cout << "\n";
                cout << "Enter 3rd integer";
                cin >> three;
                cout << "\n";
                cout << "Enter 4th integer";
                cin >> four;
                cout << "\n";
                cout << "Enter 5th integer";
                cin >> five;
                cout << "\n";
                dv4 = one / two / three / four;
                
                
                cout << "Product of the five integers: " << dv4 ;
                break;
            default:
                cout << "Only enter value 2 to 5\n";
        }
            break;
        default:
            cout << "Only enter letters A to D\n";
    }
    cin.clear();
    cin.ignore();
    cin.clear();
    return 0;
}
