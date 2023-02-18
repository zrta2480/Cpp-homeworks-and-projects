//
//  main.cpp
//  test6
//
//  Created by Zeth Raphael T. Arguelles on 27/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string lgth, wdth;
    float length = 0;
    float width = 0;
    cout << "length?\n";
    getline (cin, lgth);
    stringstream(lgth) >> length;
    cout << "width?\n";
    getline (cin, wdth);
    stringstream(wdth) >> width;
    
    cout << "Length: " << length << "\n";
    cout << "Width: " << width << "\n";
    
    float area = length*width;
    cout << "Area: " << area << "\n";
    return 0;
    
}
