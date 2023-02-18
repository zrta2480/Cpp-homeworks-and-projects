/*
//  main.cpp
//  MP1B_B02
//
//  Zeth Raphael T. Arguelles
//  22/09/2017.
    MP1B_B02
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "DE LA SALL LIPA\n";
    cout << "Integrated High School\n";
    cout << "Senior High School\n";
    cout << "\n";
    cout << "MATH TALK\n";
    cout << "\n";
    
    
    
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
    string ans1;
    cout << "James: Hey " << fname << " I just learned how to add two numbers together.\n";
    cout << "\n";
    cout << fname << ": ";    //answer is "Cool"
    getline (cin, ans1);
    cout << "\n";
    
    
    int ans2;
    int ans3;
    int Result;
    
    cout << "James: Give me the first number.\n";
    cout << "\n";
    cout << fname << ": ";    //input any number
    cin >> ans2;
    cout << "\n";
    
    
    
    cout << "James: Give me the second number.\n";
    cout << "\n";
    cout << fname << ": ";    //input another number
    cin >> ans3;
    cout << "\n";
    Result = ans2 + ans3;
    cout << "James: Okay. Here's the result: " << ans2 << " + " << ans3 << " = " << Result << "\n";
    cout << "\n";
    cout << fname << ": " <<"Wow! You are amazing\n";
    
    
    cin.get();
    
    
    return 0;
}
