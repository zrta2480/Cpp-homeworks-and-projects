#include <iostream>

using namespace std;

int main()
{
    int a = 12;
    int b = 6;
    int c = a+b;
    cout << c+a+b << endl;

    a = 12;
    b = 6;
    if (a<b)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }
    cout << endl;

    a = 12;
    b = 6;
    while (b<a)
    {
        a = a-1;
        cout << a+b << endl;
    }
    return 0;


}