//
//  main.cpp
//  ICT_Number_5
//
//  Created by Zeth Raphael T. Arguelles on 28/11/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ans_39, ans_40, ans_41a, ans_41c, ans_43a, ans_43c, ans_42;
    cout << "V. WAYS OF COPING WITH NOT HAVING ENOUGH FOOD\n";
    cout << "\n";
    cout << "39. During the past 30 days, did (you/anyone in the household) receive anymeals delivered to the home from community programs, “Meals on Wheels,” or any other programs? (Yes or No)\n";
    getline (cin, ans_39); //Enter yes or no for #39
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_39;
        cout << "\n";
    }
    while ( !cin.fail () && ans_39 != "yes" && ans_39 != "no" && ans_39 != "YES" && ans_39 != "NO" && ans_39 != "Yes" && ans_39 != "No");
    cout << "40. During the past 30 days, did (you/anyone in the household) go to a community program or senior center to eat prepared meals? (Yes or No)\n";
    getline (cin, ans_40);  //Enter yes or no for #40
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_40;
        cout << "\n";
    }
    while ( !cin.fail () && ans_40 != "yes" && ans_40 != "no" && ans_40 != "YES" && ans_40 != "NO" && ans_40 != "Yes" && ans_40 != "No");
    cout << "41. In the last 12 months, did (you/you or other adults in your household) ever get emergency food from a church, a food pantry, or food bank? (Yes or No)\n";
    getline (cin, ans_41a);  //Enter yes or no for #41
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_41a;
        cout << "\n";
    }
    while ( !cin.fail () && ans_41a != "yes" && ans_41a != "no" && ans_41a != "YES" && ans_41a != "NO" && ans_41a != "Yes" && ans_41a != "No");
    if (ans_41a == "Yes" || ans_41a == "yes" || ans_41a == "Yes")  //If stetement for #41
    {
        char ans_41b;
        cout << "How often did this happen?\n";
        cout << "\vA. almost every month\n";
        cout << "\vB. some months but not every month\n";
        cout << "\vC. in only one or two months\n";
        cout << "Response: ";
        cin >> ans_41b;  //Enter a/b/c/d for #41b
        cout << "\n";
        ans_41b = tolower(ans_41b);
        do
        {
            cout << "Please confirm your answer by entering it again (make sure to answer a,b,c,d)\n";
            cin >> ans_41b;
            cout << "\n";
        }
        while ( !cin.fail () && ans_41b != 'a' && ans_41b != 'b' && ans_41b != 'c' && ans_41b != 'd');
        cout << "Did this happen in the last 30 days?\n";
        cin >> ans_41c;  //Enter yes or no for #41c
        cout << "\n";
        do
        {
            cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
            cin >> ans_41c;
            cout << "\n";
        }
        while ( !cin.fail () && ans_41c != "yes" && ans_41c != "no" && ans_41c != "YES" && ans_41c != "NO" && ans_41c != "Yes" && ans_41c != "No");
     
        
    }
    cout << "42. Is there a church, food pantry or food bank in your community where you could get emergency food if you needed it? (Yes or No)\n";
    cin >> ans_42;
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_42;
        cout << "\n";
    }
    while ( !cin.fail () && ans_42 != "yes" && ans_42 != "no" && ans_42 != "YES" && ans_42 != "NO" && ans_42 != "Yes" && ans_42 != "No");
    cout << "43. In the last 12 months, did (you/you or other adults in your household) ever eat any meals at a soup kitchen? (Yes or No)\n";
    cin >> ans_43a;
    cout << "\n";
    do
    {
        cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
        cin >> ans_43a;
        cout << "\n";
    }
    while ( !cin.fail () && ans_43a != "yes" && ans_43a != "no" && ans_43a != "YES" && ans_43a != "NO" && ans_43a != "Yes" && ans_43a != "No");
    if (ans_43a == "Yes" || ans_43a == "YES" || ans_43a == "yes")
    {
        char ans_43b;
        cout << "How often did this happen?\n";
        cout << "\vA. almost every month\n";
        cout << "\vB. some months but not every month\n";
        cout << "\vC. in only one or two months\n";
        cout << "Respnse: ";
        cin >> ans_43b;
        cout << "\n";
        ans_43b = tolower(ans_43b);
        do
        {
            cout << "Please confirm your answer by entering it again (make sure to answer a,b,c,d)\n";
            cin >> ans_43b;
            cout << "\n";
        }
        while ( !cin.fail () && ans_43b != 'a' && ans_43b != 'b' && ans_43b != 'c' && ans_43b != 'd');
        cout << "Did this happen in the last 30 days? (Yes or No)";
        cin >> ans_43c;
        cout << "\n";
        do
        {
            cout << "Please confirm your answer by entering it again (make sure to answer yes or no)\n";
            cin >> ans_43c;
            cout << "\n";
        }
        while ( !cin.fail () && ans_43c != "yes" && ans_43c != "no" && ans_43c != "YES" && ans_43c != "NO" && ans_43c != "Yes" && ans_43c != "No");
    }
    else if (ans_43a == "No" || ans_43a == "NO" || ans_43a == "no")
    {
        
    }
    
    
    cin.clear();
    cin.ignore();
    cin.get();
    return 0;
}
