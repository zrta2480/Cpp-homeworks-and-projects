//
//  main.cpp
//  Inputting String
//
//  Created by Zeth Raphael T. Arguelles on 22/09/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystr;
    cout << "WHO ARE YOU?";
    getline (cin, mystr);
    cout << "I will find you and I will kill you, " << mystr << ".\n";
    cin.get();
        return 0;
}
