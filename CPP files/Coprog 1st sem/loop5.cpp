//
//  main.cpp
//  Loop5
//
//  Created by Zeth Raphael T. Arguelles on 30/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num;
    int i = 1;
    int ia = 0;
    int ie = 0;
    int io = 0;
    int iu = 0;
    int ii = 0;
    cout << "How many times do you want to input a character?\n";
    cin >> num;
    
    while (num >= i)
    {
        char let;
        
        cout << "What is your letter?\n";
        cin >> let;
        if (let == 'a')
        {
            cout << "Letter: " << let << "\n";
            cout << "count: " << i << "\n";
            
            ia++;
            cout << "Letter count: " << ia << "\n\n";
            i++;
        }
        else if (let == 'e')
        {
            cout << "Letter: " << let << "\n";
            cout << "count: " << i << "\n";
            
            ie++;
            cout << "Letter count: " << ie << "\n\n";
            i++;
        }
        else if (let == 'i')
        {
            cout << "Letter: " << let << "\n";
            cout << "count: " << i << "\n";
            
            ii++;
            cout << "Letter count: " << ii << "\n\n";
            i++;
        }
        else if (let == 'o')
        {
            cout << "Letter: " << let << "\n";
            cout << "count: " << i << "\n";
           
            io++;
            cout << "Letter count: " << io << "\n\n";
            i++;
        }
        else if (let == 'u')
        {
            cout << "Letter: " << let << "\n";
            cout << "count: " << i << "\n";
            
            iu++;
            cout << "Letter count: " << iu << "\n\n";
            i++;
        }
        else
        {
            cout << "Error\n";
            cout << "count: " << i << "\n\n";
            i++;
        }
    }
    return 0;
}
