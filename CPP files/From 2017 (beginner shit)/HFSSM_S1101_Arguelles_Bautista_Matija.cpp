//
//  main.cpp
//  HFSSM_S1101_Arguelles_Bautista_Matija
//
//  Created by Zeth Raphael T. Arguelles on 21/11/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Household Food Security Survey Module (HFSSM)\n";
    cout << "(A Survey Measurement of Food Insecurity and Hunger)\n";
    cout << "This survey module reviews the government’s strategic plan in delivering the food assistance programs that will help reduce the prevalence of “food insecurity with hunger” among households.";
    cout << "I. FOOD EXPENDITURES\n";
    cout << "These first questions are about all the places at which you bought food LAST WEEK. By LAST WEEK, I mean from Sunday through Saturday.";
    char ans_1, ans_2, ans_3, ans_4;
    int ans_5a, ans_5b, ans_6a, ans_6b, ans_7, ans_8;
    cout << "\n";
    cout << "1. First, did (you/anyone in your household) shop for food at a supermarket or grocery store LAST WEEK?(Yes or No)\n";
    cin >> ans_1;
    cout << "\n";
    cout << "2. Think about other places where people buy food, such as meat markets, produce stands, bakeries, warehouse clubs, and convenience stores. Did (you/anyone in your household) buy food from any stores such as these LAST WEEK?(Yes or No)\n";
    cin >> ans_2;
    cout << "\n";
    cout << "3. LAST WEEK, did (you/anyone in your household) buy food at a restaurant, fast food place, cafeteria, or vending machine(Yes or No)? (Include any children who may have bought food at the school cafeteria).\n";
    cin >> ans_3;
    cout << "\n";
    cout << "4. Did (you/anyone in your household) buy food from any other kind of place LAST WEEK?(Yes or No)\n";
    cin >> ans_4;
    cout << "\n";
    cout << "5. How much did (you/your household) ACTUALLY spend at supermarkets and grocery stores LAST WEEK (including any purchases)?\n";
    cin >> ans_5a;
    cout << "\n";
    cout << "How much of the (amount from last question) was for nonfood items, such as pet food, paper products, detergents, or cleaning supplies?";
    cin >> ans_5b;
    cout << "\n";
    cout << "6. \vHow much did (you/your household) spend at stores such as meat markets, produce stands, bakeries, and convenience stores LAST WEEK (including any purchases)?";
    cin >> ans_6a;
    cout << "\n";
    cout << "How much of the (amount from last question) was for nonfood items, such as pet food, paper products, detergents, or cleaning supplies?";
    cin >> ans_6b;
    cout << "7. How much did (you/your household) spend for food at restaurants, fast food places, cafeterias, and vending machines LAST WEEK?";
    cin >> ans_7;
    cout << "\n";
    cout << "8. How much did (you/your household) spend for food at any other kind of place LAST WEEK?";
    cin >> ans_8;
    cout << "\n";
   if (ans_1 = "N" && ans_2 = "N" && ans_3 = "N" && ans_4 = "N")
       cout << "Let’s see, it seems that (you/your household) did not buy any food LAST WEEK.";
       else
           
           
    return 0;
}
