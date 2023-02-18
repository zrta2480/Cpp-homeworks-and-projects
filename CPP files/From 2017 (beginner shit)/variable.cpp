//
//  main.cpp
//  Variable
//
//  Created by Zeth Raphael T. Arguelles on 25/09/2017.
//  Copyright © 2017 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;

int main (){
    float ans2;
    float ans3;
    float Result1;
    
    cout << "James: Give me the first number.\n";
    cout << "\n";
    cout << "John: ";    //input any number
    cin >> ans2;
    cout << "\n";
    
    
    
    cout << "James: Give me the second number.\n";
    cout << "\n";
    cout << "John: ";    //input another number
    cin >> ans3;
    cout << "\n";
    Result1 = ans2 + ans3;
    cout << "James: Okay. Here's the sum: " << ans2 << " + " << ans3 << " = " << Result1 << "\n";
    cout << "\n";
    cout << "John: " <<"SUCK MY ASS SMART ASS\n";
    cout << "\n";
    
    
    Result1 = ans2 - ans3;
    cout << "James: Okay. Here's the difference: " << ans2 << " - " << ans3 << " = " << Result1 << "\n";
    cout << "\n";
    cout << "John: " <<"FUCK OFF!\n";
    cout << "\n";
    
    
    Result1 = ans2 * ans3;
    cout << "James: Okay. Here's the product: " << ans2 << " * " << ans3 << " = " << Result1 << "\n";
    cout << "\n";
    cout << "John: " <<"GO TO HELL!\n";
    cout << "\n";
    
    
    Result1 = ans2 / ans3;
    cout << "James: Okay. Here's the quotient: " << ans2 << " / " << ans3 << " = " << Result1 << "\n";
    cout << "\n";
    cout << "John: " <<"I SAID FUCK OFF!\n";
    cout << "\n";
    
    cin.get();
    
    
    return 0;
}

