//
//  main.cpp
//  LoopTest6
//
//  Created by Zeth Raphael T. Arguelles on 23/10/2019.
//  Copyright © 2019 Zeth Raphael T. Arguelles. All rights reserved.
//

#include <iostream>
using namespace std;
int volume(int l=1, int w=1, int h=1) {
    return l*w*h;
}

int main() {
    int x = 2, y = 4, z = 7;
    cout << "The expanding cube: \n\n";
    for (int i = 0; i < 5; i++)
    {
    cout << "Volumes: \n";
    cout << volume() << "\n";
    cout << volume(x) << "\n";
    cout << volume(x, y) << "\n";
    cout << volume(x, y, z) << "\n\n";
        x += 3;
        y += 8;
        z += 7;
    }
    return 0;
}
