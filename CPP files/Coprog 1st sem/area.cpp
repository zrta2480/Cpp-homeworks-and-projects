//
//  main.cpp
//  coprog3
//
//  Created by Zeth Raphael T. Arguelles on 23/09/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int sidesq, basep, heightp;
    float bast, heightt;
    float sqa, para, tria;
    cout << "What is the length of one of the side of the square?\n";
    cin >> sidesq;
    cout << "What is the length of the parallelogram's base\n";
    cin >> basep;
    cout << "What is its height?\n";
    cin >> heightp;
    cout << "Now what is the triangle's base?\n";
    cin >> bast;
    cout << "And its height?\n";
    cin >> heightt;
    
    sqa = sidesq * sidesq;
    para = basep * heightp;
    tria = (bast * heightt)/2;
    
    cout << "Area of the square: " << sqa << "\n";
    cout << "Area of the parallelogram: " << para << "\n";
    cout << "Area of the triangle: " << tria << "\n";
    
    return 0;
}
