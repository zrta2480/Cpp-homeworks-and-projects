#include<iostream>
using namespace std;
struct 
{
    int productId;
    string productname;
    float productPrice;
    int productQty;
    int transtrack = 0;
} saleInfo[100], track;
int main () 
{
    cout << "-----------------------------------------------------\n";
    cout << "\tSales Monitoring System\n";
    cout << "-----------------------------------------------------\n";
    char lastSelect; //For the last loop
    do {
        int mainSelect;
        do {
        cout << "[1]: Add Sales\n[2]: Inquire Sales\n[3]: Sales Report\n[4]: Exit\n";
        cout << "Please enter a choice: "; cin >> mainSelect;
        } while (mainSelect > 4 || mainSelect < 0);
        switch (mainSelect)
        {
        case 1:
        {
            char addSelect;
            do {
                
                cout << "-----------------------------------------------------\n";
                cout << "\tADD SALES\n";
                cout << "-----------------------------------------------------\n";
                cout << "Transaction#: " << track.transtrack + 1 << "\n";
                cout << "Product ID:   "; cin >> saleInfo[track.transtrack].productId; cout << "\n";
                cout << "Product Name: "; cin >> saleInfo[track.transtrack].productname; cout << "\n";
                cout << "Price:        "; cin >> saleInfo[track.transtrack].productPrice; cout << "\n";
                cout << "Qty:          "; cin >> saleInfo[track.transtrack].productQty; cout << "\n";
                track.transtrack++;
                cout << "Add Sales? Y/N: "; cin >> addSelect;
                addSelect = toupper(addSelect);
            } while (addSelect == 'Y' && track.transtrack < 100);
            break;
        }
        case 2:
        {
            char inqSelect;
            do {
                cout << "-----------------------------------------------------\n";
                cout << "\tINQUIRE SALES\n";
                cout << "-----------------------------------------------------\n";
                int totalPrice = 0;
                int total_quantity = 0;
                float selected_item_price = 0;
                float total_item_sale = 0;
                int identify_product_id;
                for (int x = 0; x < 100; x++)
                {
                    totalPrice += saleInfo[x].productPrice;
                }
                cout << "Total Sales: " << totalPrice << "\n";
                cout << "Enter product ID: "; cin >> identify_product_id;
                for (int x = 0; x < 100; x++) 
                {
                    if (identify_product_id == saleInfo[x].productId)
                    {
                        total_quantity += saleInfo[x].productQty;
                        selected_item_price = saleInfo[x].productPrice;
                    }
                }
                total_item_sale = total_quantity * selected_item_price;
                cout << "\n";
                cout << "Item Sales: " << total_item_sale << "\n";
                cout << "Try again(do another inquire)? Y/N: "; cin >> inqSelect;
                inqSelect = toupper(inqSelect);
            } while (inqSelect == 'Y');
            break;
        }
        case 3:
        {
            char reportSelect;
            do {
                cout << "-----------------------------------------------------\n";
                cout << "\tSALES REPORT\n";
                cout << "-----------------------------------------------------\n";
                string prod_name;
                int exact_tran_num = 0;
                for (int x = 0; x < 100; x++)
                {
                    prod_name = saleInfo[x].productname;
                    if (prod_name.size() != 0)
                    {
                        exact_tran_num++;
                    }
                }
                cout << "Tran#\t\tProdID\t\tProdName\tPrice\t\tQty\n";
                for (int x = 0; x < exact_tran_num; x++)
                {
                    cout << x + 1 << "\t\t" << saleInfo[x].productId << "\t\t" << saleInfo[x].productname << "\t\t" << saleInfo[x].productPrice << "\t\t" << saleInfo[x].productQty << "\n";
                }
                cout << "Try again(do another report)? Y/N: "; cin >> reportSelect;
                reportSelect = toupper(reportSelect);
            } while (reportSelect == 'Y');
            break;
        }
        default:
            break;
        }
        cout << "Try again(Go back to menu)? Y/N: "; cin >> lastSelect;
        lastSelect = toupper(lastSelect);
    } while (lastSelect == 'Y'); //for the last loop
    return 0;
}