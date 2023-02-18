//
//  main.cpp
//  Switch 2
//
//  Created by Zeth Raphael T. Arguelles on 04/10/2019.
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
        char let, let2;
        
        cout << "What is your letter?\n";
        cin >> let;
        let2 = toupper(let);
        switch (let2)
        {
            case 'A':
        {
            cout << "Letter: " << let << "\n";
            cout << "count: " << i << "\n";
            
            ia++;
            cout << "Letter count: " << ia << "\n\n";
            i++;
            break;
        }
            case 'E':
        {
            cout << "Letter: " << let << "\n";
            cout << "count: " << i << "\n";
            
            ie++;
            cout << "Letter count: " << ie << "\n\n";
            i++;
            break;
        }
            case 'I':
        {
            cout << "Letter: " << let << "\n";
            cout << "count: " << i << "\n";
            
            ii++;
            cout << "Letter count: " << ii << "\n\n";
            i++;
            break;
        }
            case 'O':
        {
            cout << "Letter: " << let << "\n";
            cout << "count: " << i << "\n";
            
            io++;
            cout << "Letter count: " << io << "\n\n";
            i++;
            break;
        }
            case 'U':
        {
            cout << "Letter: " << let << "\n";
            cout << "count: " << i << "\n";
            
            iu++;
            cout << "Letter count: " << iu << "\n\n";
            i++;
            break;
        }
            default:
        {
            cout << "Error\n";
            cout << "count: " << i << "\n\n";
            i++;
        }
        }
    }
    return 0;
}
