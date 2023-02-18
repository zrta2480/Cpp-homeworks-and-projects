//
//  main.cpp
//  LoopTest2
//
//  Created by Zeth Raphael T. Arguelles on 21/10/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    string user_name, pass_code;
    do {
        cout << "Please enter valid username and password\n";
        cout << "Username: ";
        cin >> user_name;
        cout << "Password: ";
        cin >> pass_code;
        cout << "\n\n";
    }
    while (!cin.fail() && user_name != "admin" && pass_code != "password");
    
    cout << "Access Granted\n";
    return 0;
}
