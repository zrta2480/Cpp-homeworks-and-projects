#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

bool checkIfAnagram(string str1, string str2)
{
    int s1 = str1.length();
    int s2 = str2.length();
    if (s1 != s2)
    {
    return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    for (int count = 0; count < s1; count++)
    {
        if (str1[count] != str2[count])
        {
            return false;
        }

    }
    return true;
}
int highestInt (int possibleHigh[])
{
    int highN = possibleHigh[0];
    for (int y = 1; y < 10; y++)
    {
        if (possibleHigh[y]>highN)
        {
            highN = possibleHigh[y];
        }

    }
    return highN;
}
int lowestInt (int possibleLow[])
{
    int lowN = possibleLow[0];
    for (int z = 1; z < 10; z++)
    {
        if (possibleLow[z]<lowN)
        {
            lowN = possibleLow[z];
        }

    }
    return lowN;
}
int main(){
    int mainSelect;
    cout << "Please select from the menu:\n [1]: Anagram\n [2]: Divisibility\n [3]: Exit \n";
    cout << "User chose option: "; cin >> mainSelect;
    
        switch (mainSelect)
        {
        case 1:
            {
            char subSelect1;
            do {
            string str1, str2;
            cout << "Enter a word: "; cin >> str1;
            cout << "\n";
            cout << "Enter another word: "; cin >> str2;
            cout << "\n";
            if (checkIfAnagram(str1, str2))
            {
                cout << "They are anagram of each other\n";
            }
            else 
            {
                cout << "They are NOT an anagram of each other\n";
            }
            cout << "Try again(Y/N)?: "; cin >> subSelect1; cout << "\n";
            } while (subSelect1 == 'Y' || subSelect1 == 'y');
            break;
            }
        case 2:
        {
            char subSelect2;
            do {
            int userInput[10];
            for (int x = 0; x < 10; x++)
            {
                cout << "Enter a number: ";
                cin >> userInput[x];
                cout << "\n";   
            }
            int highInt = highestInt(userInput);
            int lowInt = lowestInt(userInput);
            cout << "Highest Number: " << highInt << "\n";
            cout << "Lowest Number: " << lowInt << "\n";
            cout << "Try again(Y/N)?: "; cin >> subSelect2; cout << "\n";
            } while (subSelect2 == 'Y' || subSelect2 == 'y');
            break;
        }
        case 3:
        {
            cout << "Exiting Program...\n";
            break;
        }
        default:
            cout << "Error. Please restart program\n";
            break;
        }
    cout << "Thank you for your participation\n";
    return 0;
}