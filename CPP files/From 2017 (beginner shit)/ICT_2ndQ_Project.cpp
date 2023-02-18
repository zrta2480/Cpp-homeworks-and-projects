//
//  main.cpp
//  ICT_2ndQ_Project
//
//  Created by Zeth Raphael T. Arguelles on 27/11/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "III. FOOD PROGRAM PARTICIPATION\n"; //Start for Zeth Arguelles
    int day_recieved, amount_foodstamp, number_wc; //Initialize integers
    string ans_10, ans_11, ans_12, ans_13, ans_14, ans_15, mo_recieved; //string for text
    cout << "10. In the last 12 months, since December of last year, did you ever run short of money and try to make your food or your food money go further? (Yes or No)";//Number 10
    getline (cin, ans_10);//Gets answer for number 10
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_10;
        cout << "\n";
    }
    while ( !cin.fail () && ans_10 != "yes" && ans_10 != "no" && ans_10 != "YES" && ans_10 != "NO" && ans_10 != "Yes" && ans_10 != "No");//loops until appopriate answer is inputed
    cout << "11. In the past 12 months, since December of last year, did (you/anyone in this household) get food stamp benefits, that is, either food stamps or a food-stamp benefit card given by any government organization?" ;
    getline (cin, ans_11);//Gets answer for number 11
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_11;
        cout << "\n";
    }
    while ( !cin.fail () && ans_11 != "yes" && ans_11 != "no" && ans_11 != "YES" && ans_11 != "NO" && ans_11 != "Yes" && ans_11 != "No");//loops until appopriate answer is inputed
    
    
    if (ans_11 == "Yes" || ans_11 == "yes" || ans_11 == "YES")//If statement for number 11
    {
            cout << "In which months from last year were food stamps received?\n";
            cin >> mo_recieved;//Gets the month inputted
            cout << "\n";
        do
        {
            cout << "Please confirm your answer by entering it again (make sure to answer with the name of the complete name of the month)\n";
            cin >> mo_recieved;
            cout << "\n";
        }
        while ( !cin.fail () && mo_recieved != "January" && mo_recieved != "january" && mo_recieved != "February" && mo_recieved != "february" && mo_recieved != "March" && mo_recieved != "march" && mo_recieved != "April" && mo_recieved != "april" && mo_recieved != "May" && mo_recieved != "may" && mo_recieved != "June" && mo_recieved != "june" && mo_recieved != "July" && mo_recieved != "july" && mo_recieved != "August" && mo_recieved != "august" && mo_recieved != "September" && mo_recieved != "september" && mo_recieved != "October" && mo_recieved != "october" && mo_recieved != "November" && mo_recieved != "november" && mo_recieved != "December" && mo_recieved != "december");//loops until appopriate answer is inputed
            cout << "On what date in " << mo_recieved << " did (you/your household) receive food stamp benefits?\n";
            cin >> day_recieved;//Gets the day inputted
            cout << "\n";
        do
        {
            cout << "Please confirm your answer by entering it again (make sure to answer with dates 1 to 31)\n";
            cin >> day_recieved;
            cout << "\n";
        }
        while ( !cin.fail () && day_recieved > 31);//loops until appopriate answer is inputed
            cout << "How much did (you/your household) receive the last time you got food stamp benefits?";
            cin >> amount_foodstamp;//Gets the amount inputted
            cout << "\n";
        
    }
    
    
    cout << "12. During the past 30 days, did (your child/any children in the household between 5 and 18 years old) receive free or reduced-cost lunches at school?";
    cin >> ans_12;//Gets the answer for number 12
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_12;
        cout << "\n";
    }
    while ( !cin.fail () && ans_12 != "yes" && ans_12 != "no" && ans_12 != "YES" && ans_12 != "NO" && ans_12 != "Yes" && ans_12 != "No");//loops until appopriate answer is inputed
    cout << "13. During the past 30 days, did (your child/any children in the household) receive free or reduced-cost breakfasts at school?";
    cin >> ans_13;//Gets the answer for number 13
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_13;
        cout << "\n";
    }
    while ( !cin.fail () && ans_13 != "yes" && ans_13 != "no" && ans_13 != "YES" && ans_13 != "NO" && ans_13 != "Yes" && ans_13 != "No");//loops until appopriate answer is inputed
    cout << "14. During the past 30 days, did (your child/any children in the household) receive free or reduced-cost food at a day-care or Head Start program?";
    cin >> ans_14;//Gets the answer for number 14
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_14;
        cout << "\n";
    }
    while ( !cin.fail () && ans_14 != "yes" && ans_14 != "no" && ans_14 != "YES" && ans_14 != "NO" && ans_14 != "Yes" && ans_14 != "No");//loops until appopriate answer is inputed
    cout << "15. During the past 30 days, did any (women/women or children/children/women and children) in this household get food through the WIC program?";
    cin >> ans_15;//Gets the answer for number 15
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_15;
        cout << "\n";
    }
    while ( !cin.fail () && ans_15 != "yes" && ans_15 != "no" && ans_15 != "YES" && ans_15 != "NO" && ans_15 != "Yes" && ans_15 != "No");//loops until appopriate answer is inputed
    if (ans_15 == "yes" || ans_15 == "Yes" || ans_15 == "YES")
    {
        cout << "How many (women/women or children/children/women and children) in the household got WIC foods?";
        cin >> number_wc;
        cout << "\n";
    }//If statement for number 15
    cin.clear();
    cin.ignore();
    cin.get();
    return 0;
}

