#include<iostream>

using namespace std;

int main () 
{
    char finalSelect;
    do {
    char mainSelect;
    do
    {
    cout << "Please choose an option: \n";
    cout << "[A]: Sort Elements Using Pointers\n";
    cout << "[B]: Pointer Operations\n";
    cout << "Enter here: "; cin >> mainSelect;
    cout << "\n";
    mainSelect = toupper(mainSelect);
    } while (mainSelect != 'A' && mainSelect != 'B');
    switch (mainSelect)
    {
    case 'A':
    {
    char select_A;
    do {
    int elementLimit, cntr = 0;
    cout << "SORTING ELEMENTS USING POINTERS\n\n";
    do
    {
        cout << "Enter Desired Number of Elements(5-10 elements only): "; cin >> elementLimit;
    } while (elementLimit < 5 || elementLimit > 10);
    int *point_array_one;
    point_array_one = (int*)malloc(sizeof(int) * elementLimit);
    for (int x = 0; x < elementLimit; x++)
    {
        cout << "Element" << x + 1 << ": "; cin >> *(point_array_one + x);
    }
    cout << "\n";
    cout << "Original elements: ";
    for (int x = 0; x < elementLimit; x++)
    {
        cout << *(point_array_one + x) << " ";
    }
    cout << "\n";
    for (int a1 = 0; a1 < elementLimit; a1++)
    {
        for (int a2 = 0; a2 < (elementLimit - 1) - a1; a2++)
        {
            if (*(point_array_one + a2) > *(point_array_one + (a2 + 1)))
            {
                int temp;
                temp = *(point_array_one + a2);
                *(point_array_one + a2) = *(point_array_one + (a2 + 1));
                *(point_array_one + (a2 + 1)) = temp;
                cntr++;
                cout << "Swap" << cntr << ": ";
                for (int x = 0; x < elementLimit; x++)
                {
                    cout << *(point_array_one + x) << " ";
                }
                cout << "\n";
            }
        }
    }
    cout << "There are " << cntr << " swaps\n";
    cout << "Sorted Elements: ";
    for (int x = 0; x < elementLimit; x++)
    {
        cout << *(point_array_one + x) << " ";
    }
    cout << "\n";
    free(point_array_one);
    cout << "Try Again? Y/N: "; cin >> select_A;
    select_A = toupper(select_A);
    } while (select_A == 'Y');
    break;
    }
    case 'B':
    {
        char select_B;
        do
        {
            int desEle;
            cout << "POINTER OPERATIONS\n";
            do {
                cout << "Enter Desired Number of Elements(5-25 elements only): "; cin >> desEle;
            } while (desEle < 5 || desEle > 25);
            int* point_array_two;
            point_array_two = (int*)malloc(sizeof(int) * desEle);
            cout << "\n";
            for (int x = 0; x < desEle; x++)
            {
                *(point_array_two + x) = x * 2;
            }
            cout << "Initial Values: ";
            for (int x = 0; x < desEle; x++)
            {
                cout << *(point_array_two + x) << " ";
            }
            cout << "\n";
            char select_B_2;
            do {
                int selectChoice;
            do {
                cout << "Option Select: \n";
                cout << "[1]: Input New Elements\n[2]: Print New Elements\n[3]: Print New Elements in Reverse Order\n[4]: Search an Element\n[5]: Exit\n";
                cout << "What do you want to do? "; cin >> selectChoice;
            } while(selectChoice < 0 || selectChoice > 5);
            cout << "\n";
            switch (selectChoice)
            {
            case 1:
                    {
                        for (int x = 0; x < desEle; x++)
                        {
                            cout << "Element " << x + 1 << ": "; cin >> *(point_array_two + x);
                            cout << "\n";
                        }
                        break;
                    }
                    case 2:
                    {
                        cout << "Print: ";
                        for (int x = 0; x < desEle; x++)
                        {
                            cout << *(point_array_two + x) << " ";
                        }
                        cout << "\n";
                        break;
                    }
                    case 3:
                    {
                        int reverseArray[25];
                        cout << "Print Reverse Order: ";
                        for (int x = 0, y = desEle - 1; y >= 0;y--, x++)
                        {
                            reverseArray[y] = *(point_array_two + x);
                        }
                        for (int x = 0; x < desEle; x++)
                        {
                            cout << reverseArray[x] << " ";
                        }
                        cout << "\n";
                        break;
                    }
                    case 4:
                    {
                        int searchElement;
                        cout << "Enter element to search: "; cin >> searchElement;
                        for (int x = 0; x < desEle; x++)
                        {
                            if (*(point_array_two + x) == searchElement)
                            {
                                cout << "Element located at index [" << x << "]\n";
                            }
                            if (x == desEle - 1)
                            {
                                cout << "Element not located on any index\n";
                            }
                        }
                        cout << "\n";
                        break;
                    }
                    case 5:
                    {
                        cout << "You have exited the program\n";
                        break;
                    }
                    default:
                        break;
            }
            cout << "Choose again? Y/N: "; cin >> select_B_2;
            select_B_2 = toupper(select_B_2);
            } while (select_B_2 == 'Y');
            free (point_array_two);
        cout << "Do you wanna reset and choose again? Y/N: "; cin >> select_B;
        select_B = toupper(select_B);
        } while (select_B == 'Y');
    
    }
    default:
    {
        break;
    }
    }
    cout << "Do you wanna go back to main option select? Y/N: "; cin >> finalSelect;
    finalSelect = toupper(finalSelect);
    } while (finalSelect == 'Y');
    return 0;
    }
