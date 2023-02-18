#include <iostream>
using namespace std;

int main (){
    int select;
    cout << "Please select:\n [1]: Payroll Computation\n [2]: Budget Monitoring\n [3]: Exit\n";
    cout << "Option: "; cin >> select;
    cout<<"\n\n";
    switch (select)
    {
    case 1: //Option 1  
    {
        char select2;
        do {
        string fName, mName, lName, dePart; //for employee name
        float nDepend, nHours, rHour;
        float oPay, gPay, sSs, tDed, nPay;
        cout << "PAYROLL COMPUTATION\n";
        cout << "First Name: "; cin >> fName; 
        cout << "\n";
        cout << "Middle Name: "; cin >> mName;
        cout << "\n";
        cout << "Last Name: "; cin >> lName;
        cout << "\n";
        cout << "Department: "; cin >> dePart;
        cout << "\n";
        cout << "No. of Dependents: "; cin >> nDepend;
        cout << "\n";
        cout << "No. of Hours: "; cin >> nHours; 
        cout << "\n";
        cout << "Rate per Hour: "; cin >> rHour;
        cout << "\n\n";
        if (nHours > 40) //determines overtime pay
        {
            oPay = rHour * 0.25;
        }
        else
        {
            oPay = 0;
        }
        gPay = (rHour * nHours) + oPay; //computation of gross pay
        if (gPay <= 5000) //determines SSS
        {
            sSs = 105;
        }
        else if (gPay >= 5001 && gPay <= 10000)
        {
            sSs = gPay * 0.05;
        }
        else if (gPay >= 10000 && gPay <= 15000)
        {
            sSs = (gPay * 0.08) + 75;
        }
        else if (gPay > 15000)
        {
            sSs = (gPay * 0.12) + 110;
        }
        if (nDepend == 0) //determines tax deduction
        {
            tDed = gPay * 0.12;
        }
        else if (nDepend == 1 || nDepend == 2)
        {
            tDed = gPay * 0.08;
        }
        else if (nDepend > 2)
        {
            tDed = gPay * 0.032;
        }
        nPay = gPay - tDed; //computes net pay
        cout << "YOUR PAYSLIP\n";
        cout << "Employee Name: " << fName << " " << mName << " " << lName << "\n";
        cout << "Department: " << dePart << "\n\n";
        cout << "DEDUCTIONS\n";
        cout << "\tSSS:" << sSs << "\n";
        cout << "\tPAGIBIG: 100\n";
        cout << "\tPHILHEALTH: 120\n\n";
        cout << "TOTAL DEDUCTIONS\n";
        cout << "OT Pay: " << oPay << "\n";
        cout << "Gross Pay: " << gPay << "\n";
        cout << "Net Pay: " << nPay << "\n\n";
        cout << "Try again?"; cin >> select2;
        } while (select2 == 'Y' || select2 == 'y');
        break;
    }
    case 2: //option 2
    {
        char select4; //for looping the entire sequence after displaying total
        int selectCat; //for selecting category
        float food = 0, hous = 0, cloth = 0, uti = 0, ent = 0;//initializing the amount for each category
        cout << "BUDGET MONITORING MENU\n";
        cout << "1: Food\n 2: Housing\n 3: Clothing\n 4: Utilities\n 5: Entertainment\n 6: Display Total\n";
        do { //looping after displaying total
        do { //loopng to get the budget category and amount until choosing option 6
        float inAmount; //inputted amount
        cout << "Enter budget category: "; cin >> selectCat;//selecting budget category
        switch (selectCat)
        {
        case 1:
            cout << "Enter amount: "; cin >> inAmount;
            food += inAmount;
            break;
        case 2: 
            cout << "Enter amount: "; cin >> inAmount;
            hous += inAmount;
            break;
        case 3: 
            cout << "Enter amount: "; cin >> inAmount;
            cloth += inAmount;
            break;
        case 4:
            cout << "Enter amount: "; cin >> inAmount;
            uti += inAmount;
            break;
        case 5:
            cout << "Enter amount: "; cin >> inAmount;
            ent += inAmount;
            break;
        default:
            break;
        }
        } while (selectCat != 6);
       cout << "\t\t Total\n";
       cout << "1-Food:          " << food << "\n";
       cout << "2-Housing:       " << hous << "\n";
       cout << "3-Clothing:      " << cloth << "\n";
       cout << "4-Utilities:     " << uti << "\n";
       cout << "5-Entertainment: " << ent << "\n\n";
       float total = food + hous + cloth + uti + ent; //initializing and calculating the grand total
       cout << "Grand Total: " << total << "\n";
       cout << "Do you want to add more? Y/N: "; cin >> select4;
        } while (select4 == 'Y' || select4 == 'y');
    }
    
    default:
        cout << "End task..."; //option 3
        break;
    }
    return 0;
}