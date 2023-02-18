#include <iostream>
using namespace std;

int main(){
    char finalSelect;
    do {
    int array_one[100], array_two[100], array_three[200];
    int array_sizeOne, array_sizeTwo;
    do
    {
        cout << "Enter size for the first array: "; cin >> array_sizeOne;
    } while (array_sizeOne > 100);
    cout << "\n";
    cout << "Enter elements for the first array: \n";
    for (int x = 0; x < array_sizeOne; x++)
    {
        cin >> array_one[x]; cout << "\n";
    }
    cout << "\n";
    do
    {
        cout << "Enter size for the second array: "; cin >> array_sizeTwo;
    } while (array_sizeTwo > 100);
    cout << "\n";
    cout << "Enter elements for the second array: \n";
    for (int y = 0; y < array_sizeTwo; y++)
    {
        cin >> array_two[y]; cout << "\n";
    }
    for (int i = 0; i < array_sizeOne; i++)//transfers elements of array 1 to array 3
    {
        array_three[i] = array_one[i];
    }
    for (int z = 0; z < array_sizeTwo; z++)//transfers elemnts of array 2 to array 3
    {
        array_three[array_sizeOne + z] = array_two[z];
    }
    int array_sizeThree = array_sizeOne + array_sizeTwo;
    cout << "Array merged: \n";
    for (int d = 0; d < array_sizeThree; d++)//displays array 3 before sorting
    {
        cout << array_three[d] << " ";
    }
    for (int a = 0; a < array_sizeThree; a++)//sorts array 3 into ascending order
    {
        for (int a2 = 0; a2 < (array_sizeThree - 1) - a; a2++)
        {
            if (array_three[a2] > array_three[a2 + 1])
            {
                int temp;
                temp = array_three[a2];
                array_three[a2] = array_three[a2 + 1];
                array_three[a2 + 1] = temp;
            }
        }
    }
    cout << "\n\n";
    cout << "Array merged and sorted into acsending order\n";
    for (int f = 0; f < array_sizeThree; f++)
    {
        cout << array_three[f] << " ";
    }
    cout << "\nTry again? Y/N: "; cin >> finalSelect; 
    finalSelect = toupper(finalSelect);
    } while (finalSelect == 'Y');
    cout << "Thank you for your participation\n";

    return 0;
}