#include<iostream>
using namespace std;

int main()
{
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        x = x++;
        cout << x << endl;
    }
    

    return 0;
}