#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    for (int i = 0; i < 5; i++)
    {
        a = a++;
    }
    cout << "THis is the answer: " << a << endl;

    int x = 1;
    int y = x;
    cout << y << endl;
    int z = x + y;
    cout << z <<  endl;
    x = z + x + y;
    cout << x << endl;
    int q = q + x;
    cout << q << endl;

    long i = 0;
    for (long j = 0; j < 5; j++)
    {
        i = i + 1;
        cout << i << " ";
        cout << endl;
    }
    float f = 0.0;
    for (long j = 0; j < 5 ; j++)
    {
        f = f + 1.0;
        cout << f << " ";
        cout << endl;
    }

    cout << i << endl;
    cout << f << endl;
    return 0;
}