//Arguelles, Zeth
//Set: Black
#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;
bool armstrongNum(string given)
{
    string givenElement;
    string given2 = given;
    double intGiven[1000];
    double givenPow[1000];
    double sumNum, givenNum;
    double sizeGven = given.size();
    for (int x = 0; x < sizeGven; x++)
    {
        givenElement = given[x];
        stringstream(givenElement) >> intGiven[x];
    }
    for (int y = 0; y < sizeGven; y++)
    {
        givenPow[y] = pow(intGiven[y], sizeGven);
    }
    for (int z = 0; z < sizeGven; z++)
    {
        sumNum += givenPow[z];
    }
    stringstream(given2) >> givenNum;
    if (sumNum == givenNum)
    {
        return true;
    }
    return false;
}
int main (){
    char restart;
    do{
    string userInput;
    cout<<"Input a number: "; cin >> userInput;
    cout << "\n";
    if (armstrongNum(userInput))
    {
        cout << "It is an Armstrong Number\n";
    }
    else
    {
        cout << "It is NOT an Armstrong Number\n";
    }
    cout << "Would you like to try again? Y/N: "; cin >> restart;
    restart = toupper(restart);
    } while(restart == 'Y');
    cout << "Thank you for participating";
    return 0;
}