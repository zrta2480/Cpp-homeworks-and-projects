#include <iostream>
#include <string>
#include <iomanip>
#include <queue>
#include <fstream>
#include <queue>
#include <sstream>
#include <windows.h>
#include <stdio.h>
#include <vector>


HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;


struct bstnode { 
    int productID; 
    string productDescrption;
    string supplierName;
    float itemPrice;
    int itemQuantity;
    int reorderPoint;
    string category;
    string unitOfMeasurement;
    int totalSales = 0; 
    struct bstnode *left, *right; 
}; 

struct comparePID { 
    bool operator()(bstnode* const& i1, bstnode* const& i2) {
            return i1->productID > i2->productID; 
    }
};
struct bstnode *newNode(bstnode *newProduct); // this gay
struct bstnode * minValueNode(struct bstnode*node);
struct bstnode* insert(struct bstnode* node, bstnode *newProduct);
struct bstnode* deleteNode(struct bstnode* root, int productID); 
bstnode* sortedArrayToBST(vector<bstnode*> arr,  int start, int end);
struct bstnode* ProductIDFinder(struct bstnode* root, int productID);

void cinClearer();
string consoleToTextFile(string consoleText);
string textFileToConsole(string textFileText);
void treeClear(bstnode*& root);
//Functions that executes the features of the program
void addProduct();//mine
void dataIntake();// mine
void updateMasterList(struct bstnode *root, bool isfirst); //mine
void showAllProducts();//zeth
int showAllProductstoReorder();
void updateOutOfStockList(struct bstnode *root, bool isfirst);//zeth
void deleteProduct(); // zeth
bool checkIfProductAlreadyExists(struct bstnode *root, int key);
bool checkIfQuantityExists(struct bstnode *root, int id, int qt);
void updateSalesFile(struct bstnode *root, int quantity);
void addSales(); //zeth
void orderProduct();
void updateOrderFile(struct bstnode *root, int quantity);
void recieveProduct();
void viewSales();
void clearSales(struct bstnode *root);
void showSales(struct bstnode *root);
bool ROPchecker();
void productChanger();
    
    
struct bstnode *tree = NULL;





int main(){
    while(true){
        RECT Window;

        MoveWindow(GetConsoleWindow(), 0,0 , GetSystemMetrics(SM_CXSCREEN) -600 ,  GetSystemMetrics(SM_CYSCREEN), TRUE);// Gets the size of the monitor display in order to perfectly center the console
        GetWindowRect(GetConsoleWindow(), &Window);
            
        system("cls");
        dataIntake();
        int choice = 0; 

        // rearange this, I will do it, -cue
        cout << "ABC Trading Company Inventory Management" << endl << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Show all Products" << endl;
        cout << "3. Record Sale of Products" << endl;
        cout << "4. Recieve Products" << endl;    
        cout << "5. Show Items Needed to be reordered" << endl;
        cout << "6. Delete Product" << endl;
        cout << "7. Order Product" << endl;
        cout << "8. View Sales" << endl;
        cout << "9. Change Product Detail"<< endl;
        cout << "10. Exit"<< endl;

        if(ROPchecker()){
            cout << endl <<endl <<"!!!SOME ITEMS ARE LOW IN STOCK!!!";
        }

        cout << endl <<endl<<"Enter Choice : ";
        cin >> choice;
        cinClearer();
        system("cls");
        switch (choice)
        {
        case 1:
            addProduct();
            break;
        case 2:
            showAllProducts();
            cout << "\n\nPress any Enter to return to main menu\n\n";
            cinClearer();
            break;
        case 3:
            addSales();
            break;
        case 4:
            recieveProduct();
            break;
        case 5:
            showAllProductstoReorder();
            cinClearer();
            break;
        case 6:
            showAllProducts();
            deleteProduct();
            break;
        case 7:
            orderProduct();
            break;
        case 8:
            viewSales();
            break;
        case 9:
            productChanger();
            break;
        case 10:
            exit(1);
        default:
            system("cls");
            cout << "Choice not in choices, press enter to try again";
            cinClearer();
            break;
        }
    }
}

void viewSales(){// new function, used view sales
    // rename variables so thats its not dead
    ifstream salesFile;
    string dummy; // by definition, this is used to contain the unencesasary 
    int productID, totalSales;
    salesFile.open("SalesFile.txt");
    getline(salesFile, dummy);
    clearSales(tree);
    while(salesFile >> productID >> dummy >> totalSales>> dummy){
        if(checkIfProductAlreadyExists(tree, productID)){
            ProductIDFinder(tree, productID)->totalSales +=totalSales;
        }
        
    }
    salesFile.close();
    cout  << left << setw(15) <<"productID" << left << setw(30) <<"Item Name" << left << setw(15) << "Total Sales" << endl;
    showSales(tree);
    cout << endl << endl << "Press Enter to return to main Menu";
    cinClearer();

    
}

void addProduct(){  
    char tryAgain; 
    
    do{
        struct bstnode *temp =  new struct bstnode(); // we need to find out why we're doing this
        bool checkId = false;
        int productId = 0;
        do {
            cout << "Enter Product ID :";
            cin >> productId;
            cinClearer();
            if (productId <= 0 || productId > 1000000) //verifies the product ID inputted by the user
            {
                if(productId <= 0)
                {
                    cout << "Invalid ID number! Negative values not allowed. Please Try again.\n";
                }
                else
                {
                    cout << "Invalid ID number! ID number must not exceed 1000000. Please Try again.\n";
                }
                
                
                checkId = true;
                system("pause"); 
                continue;
            }
            else
            {
                if(checkIfProductAlreadyExists(tree, productId))
                {
                    cout << "Product with entered ID number already exists! Please try again.\n";
                    checkId = true;
                    system("pause");
                    continue;
                }
                else
                { checkId = false; }
            }
        } while(checkId);        

        temp->productID = productId;
        cout << "Enter Product Description :";
        getline(cin,temp->productDescrption);
        cinClearer();
        while (temp ->productDescrption.length() == 0 || temp ->productDescrption.length() > 29)
        {
            if (temp ->productDescrption.length() == 0)
            {
                cout << "Product Description cannot be empty" << endl << endl;
            }
            else
            {
                cout << "Product Description cannot exceed 29 characters(spaces are included as characters)" << endl << endl;
            }
            
            cout << "Enter Product Description :";
            getline(cin,temp->productDescrption);
            cinClearer();
        }
        
        cout << "Enter Supplier Name :";
        getline(cin, temp->supplierName);
        cinClearer();
        while (temp ->supplierName.length() == 0 || temp->supplierName.length() > 14)
        {
            if(temp->supplierName.length() == 0)
            {
                cout << "Supplier Name cannot be empty" << endl << endl;
            }
            else
            {
                cout << "Supplier Name cannot exceed 14 characters(spaces are included as characters)" << endl << endl;
            }
            
            cout << "Enter Supplier Name :";
            getline(cin, temp->supplierName);
            cinClearer();
        }
        cout << "Enter Product Price :";
        cin >> temp->itemPrice;
        cinClearer();
        while(temp->itemPrice <= 0 || temp->itemPrice > 999999){
            if(temp->itemPrice <= 0)
            {
                cout <<  "\n Product Price cannot be negative\n";
            }
            else
            {
                cout <<  "\n Product Price cannot exceed 999,999\n";
            }
            
            
            cout << "Enter Product Price :";
            cin >> temp->itemPrice;
            cinClearer();
        }
    
        cout << "Enter Item quantity :";
        cin >> temp->itemQuantity;
        cinClearer();
        while(temp->itemQuantity <= 0 || temp->itemQuantity > 1000000){
            if(temp->itemQuantity <=0)
            {
                cout <<  "\n Item Quantitiy cannot be negative\n";
            }
            else
            {
                cout <<  "\n Item Quantitiy cannot exceed 1000000\n";
            }
            
            
            cout << "Enter Item quantity :";
            cin >> temp->itemQuantity;
            cinClearer();
        }
        cout << "Enter category :";
        getline(cin,  temp->category );
        cinClearer();
        while (temp ->category.length() == 0 || temp->category.length() > 14)
        {
            if(temp->category.length() == 0)
            {
                cout << "Category cannot be empty" << endl << endl;
            }
            else
            {
                cout << "Category cannot exceed 14 characters(spaces are included as characters)" << endl << endl;
            }
            
            
            cout << "Enter category :";
            getline(cin,  temp->category );
            cinClearer();
        }
        cout << "Enter Unit of Measurement:";
        getline(cin, temp->unitOfMeasurement);
        cinClearer();
        while (temp ->unitOfMeasurement.length() == 0 || temp->unitOfMeasurement.length() > 14)
        {
            if(temp->unitOfMeasurement.length() == 0)
            {
                cout << "UOM cannot be empty" << endl << endl;
            }
            else
            {
                cout << "UOM cannot exceed 14 characters(spaces are included as characters)" << endl << endl;
            }
            
            cout << "Enter Unit of Measurement:";
            getline(cin, temp->unitOfMeasurement);
            cinClearer();
        }
        if(temp->itemPrice < 200){
            temp->reorderPoint = 5;
        }else if(temp->itemPrice >= 200 && temp->itemPrice <= 500){
            temp->reorderPoint = 10;
        }else{
            temp->reorderPoint =15;
        }
        tree = insert(tree, temp);
        updateMasterList(tree,true);
        dataIntake();
        cout << "Product has been added" << endl;
        do{
            cout << "Try again???[Y/N]";
            cin >> tryAgain;
            cinClearer();
            tryAgain = toupper(tryAgain);
        }while(tryAgain != 'Y' && tryAgain != 'N');
    }while(toupper(tryAgain) == 'Y');
}
 
void cinClearer(){
    cin.clear();
    cin.ignore(1000, '\n');
}

string consoleToTextFile(string consoleText){
    for(int i = 0 ; i < consoleText.length();i++){
        if(consoleText.at(i) == ' '){
            consoleText.at(i) = '`';
        }
    }
    return consoleText;
}
string textFileToConsole(string textFileText){
    for(int i = 0 ; i < textFileText.length();i++){
        if(textFileText.at(i) == '`'){
            textFileText.at(i) = ' ';
        }
    }
    return textFileText;
}

void dataIntake(){
    ifstream data;
    int counter = 0;
    data.open("MasterList.txt");
    string dummy;
    priority_queue<bstnode*,vector<bstnode*>, comparePID> container;

    treeClear(tree);
    getline(data, dummy);
    
    int tempproductID;
    string tempproductDescrption;
    string tempsupplierName;
    float tempitemPrice;
    int tempitemQuantity;
    int tempreorderPoint;
    string tempcategory;
    string tempunitOfMeasurement;
    while(data >> tempproductID >> tempproductDescrption >> tempsupplierName >> tempitemPrice >> tempitemQuantity >> tempreorderPoint >> tempcategory >> tempunitOfMeasurement){
        struct bstnode *temp = new struct bstnode(); 
        temp->itemPrice = tempitemPrice;
        temp->itemQuantity = tempitemQuantity;
        temp->productID = tempproductID;
        temp->reorderPoint = tempreorderPoint;
        temp->productDescrption = textFileToConsole(tempproductDescrption);
        temp->supplierName = textFileToConsole(tempsupplierName);
        temp->category = textFileToConsole(tempcategory);
        temp->unitOfMeasurement = textFileToConsole(tempunitOfMeasurement);
        container.push(temp);
    }
    data.close();
    vector<bstnode*> arr;
    while(!container.empty()){   
        arr.push_back(container.top());
        counter++;
        container.pop();

    }
    
    tree = sortedArrayToBST(arr,0, arr.size()-1);
}

void updateMasterList(struct bstnode *root, bool isfirst){
    // This is a core function, this must not be changed
    if(isfirst){
            ofstream creator("MasterList.txt");
            if(!creator.is_open()){
                system("cls");
                cout << "MasterList Cannot be oppened, press enter to exit the program";
                cinClearer();
                exit(1);
            }
            creator.close();
        }
        fstream master;
        master.open("MasterList.txt", ios::app);
        
        if(!master.is_open()){
            system("cls");
            cout << "MasterList Cannot be oppened, press enter to exit the program";
            cinClearer();
            exit(1);
        }else{
            if(isfirst){
                master << left << setw(15) << "Product ID" << left << setw(30) << "Product Description"  << left << setw(15) << "Suplier Name" << left << setw(10) <<"Price"<< left << setw(15) <<"Quantitiy" << left << setw(15) <<"ROP"<< left << setw(15) << "Category"<< left << setw(15) << "Unit Of Measurment"<<endl;
            }
        }
        master.close();
        
    
    
    if (root != NULL) {
        
        
        master.open("MasterList.txt", ios::app);
        
        if(!master.is_open()){
            system("cls");
            cout << "MasterList Cannot be oppened, press enter to exit the program";
            cinClearer();
            exit(1);
        }else{
            master.close();
            master.open("MasterList.txt", ios::app);
            master << left << setw(15) << root->productID << left << setw(30) <<consoleToTextFile(root->productDescrption)   << left << setw(15) << consoleToTextFile(root->supplierName) << left << setw(10) <<root->itemPrice<< left << setw(15) <<root->itemQuantity << left << setw(15) <<root->reorderPoint<< left << setw(15) << consoleToTextFile(root->category)<< left << setw(15) << consoleToTextFile(root->unitOfMeasurement)<<endl;
            master.close();
        }
        updateMasterList(root->left,false); 
        updateMasterList(root->right,false); 
    } 
}

void updateOutOfStockList(struct bstnode *root, bool isfirst)
{
    if (root != NULL) {
        if (isfirst) {
            ofstream creator("OutOfStockList.txt");
            if (!creator.is_open()) {
                system("cls");
                cout << "OutOfStockList Cannot be oppened, press enter to exit the program";
                cinClearer();
                exit(1);
            }
            creator.close();
        }
        fstream master;
        master.open("OutOfStockList.txt", ios::app);

        if (!master.is_open()) {
            system("cls");
            cout << "OutOfStockList Cannot be oppened, press enter to exit the program";
            cinClearer();
            exit(1);
        }
        else {
            if (isfirst) {
                master << left << setw(15) << "Product ID" << left << setw(30) << "Product Description" << left << setw(15) << "Suplier Name" << left << setw(10) << "Price" << left << setw(15) << "Quantitiy" << left << setw(15) << "ROP" << left << setw(15) << "Category" << left << setw(15) << "Unit Of Measurment" << endl;
            }
            master.close();
            master.open("OutOfStockList.txt", ios::app);
            if (root->itemQuantity <= root->reorderPoint)
            {
            // Must change this into a more stream line view, so the product ID, product decription, quantitiy, and rop are only seen.
            master << left << setw(15) << root->productID << left << setw(30) << consoleToTextFile(root->productDescrption) << left << setw(15) << consoleToTextFile(root->supplierName) << left << setw(10) << root->itemPrice << left << setw(15) << root->itemQuantity << left << setw(15) << root->reorderPoint << left << setw(15) << consoleToTextFile(root->category) << left << setw(15) << consoleToTextFile(root->unitOfMeasurement) << endl;
            }
            master.close();
        }
        updateOutOfStockList(root->left, false);
        updateOutOfStockList(root->right, false);
    }
}

void updateSalesFile(struct bstnode *root, int quantity){
    ifstream input;
    string dummy;
    
    input.open("SalesFile.txt");
    getline(input, dummy);
    input.close();
    
    ofstream output;
    output.open("SalesFile.txt",ios::app);
    if(dummy == ""){
        output  << left << setw(15) << "Product ID" << left << setw(30) << "Product Description"  << left << setw(30) << "Order Quantity" << endl;
    }
    output  << left << setw(15) << root->productID << left << setw(30) << consoleToTextFile(root->productDescrption) << left << setw(30) << quantity << consoleToTextFile(root->unitOfMeasurement) << endl;
    output.close();
}

void updateOrderFile(struct bstnode *root, int quantity)
{
    ifstream input;
    string dummy;
    
    input.open("orderFile.txt");
    getline(input, dummy);
    input.close();
    
    ofstream output;
    output.open("orderFile.txt",ios::app);
    if(dummy == ""){
        output  << left << setw(15) << "Product ID" << left << setw(30) << "Product Description"  << left << setw(30) << "Order Quantity" << endl;
    }
    output  << left << setw(15) << root->productID << left << setw(30) << consoleToTextFile(root->productDescrption) << left << setw(30) << quantity << endl;
    output.close();
}

void showAllProducts(){
    ifstream data;
    int counter = 0;
    data.open("MasterList.txt");
    string dummy;
    priority_queue<bstnode*,vector<bstnode*>, comparePID> container;

    getline(data, dummy);
    
    int tempproductID;
    string tempproductDescrption;
    string tempsupplierName;
    float tempitemPrice;
    int tempitemQuantity;
    int tempreorderPoint;
    string tempcategory;
    string tempunitOfMeasurement;
    while(data >> tempproductID >> tempproductDescrption >> tempsupplierName >> tempitemPrice >> tempitemQuantity >> tempreorderPoint >> tempcategory >> tempunitOfMeasurement){
        struct bstnode *temp = new struct bstnode(); 
        temp->itemPrice = tempitemPrice;
        temp->itemQuantity = tempitemQuantity;
        temp->productID = tempproductID;
        temp->reorderPoint = tempreorderPoint;
        temp->productDescrption = textFileToConsole(tempproductDescrption);
        temp->supplierName = textFileToConsole(tempsupplierName);
        temp->category = textFileToConsole(tempcategory);
        temp->unitOfMeasurement = textFileToConsole(tempunitOfMeasurement);
        container.push(temp);   
    }
    data.close();
    system("cls");
    
    cout  << left << setw(15) << "Product ID" << left << setw(30) <<"DESCRIPTION" << left << setw(15) << "Suplier Name" << left << setw(10) <<"Price"<< left << setw(15) <<"Item Quantity" << left << setw(15) <<"Reorder Point"<< left << setw(15) << "Category"<< left << setw(15) << "Unit Of Measurement"<<endl;
    while(!container.empty()){
        //D- Do not worry about this, I will change window size in order to acommodate size of this thing.
        cout  << left << setw(15) << container.top()->productID << left << setw(30) <<textFileToConsole(container.top()->productDescrption) << left << setw(15) << textFileToConsole(container.top()->supplierName) << left << setw(10) <<container.top()->itemPrice<< left << setw(15) <<container.top()->itemQuantity << left << setw(15) <<container.top()->reorderPoint<< left << setw(15) << textFileToConsole(container.top()->category)<< left << setw(15) << textFileToConsole(container.top()->unitOfMeasurement)<<endl;
        container.pop();
    }
    
}

int showAllProductstoReorder(){
    ifstream data;
    bool checker = true;
    data.open("MasterList.txt");
    int counter = 0;
    string dummy;
    priority_queue<bstnode*,vector<bstnode*>, comparePID> container;

    getline(data, dummy);
    
    int tempproductID;
    string tempproductDescrption;
    string tempsupplierName;
    float tempitemPrice;
    int tempitemQuantity;
    int tempreorderPoint;
    string tempcategory;
    string tempunitOfMeasurement;
    while(data >> tempproductID >> tempproductDescrption >> tempsupplierName >> tempitemPrice >> tempitemQuantity >> tempreorderPoint >> tempcategory >> tempunitOfMeasurement){
        struct bstnode *temp = new struct bstnode(); 
        temp->itemPrice = tempitemPrice;
        temp->itemQuantity = tempitemQuantity;
        temp->productID = tempproductID;
        temp->reorderPoint = tempreorderPoint;
        temp->productDescrption = textFileToConsole(tempproductDescrption);
        temp->supplierName = textFileToConsole(tempsupplierName);
        temp->category = textFileToConsole(tempcategory);
        temp->unitOfMeasurement = textFileToConsole(tempunitOfMeasurement);
        container.push(temp);   
    }
    data.close();
    system("cls");
    
    cout  << left << setw(15) << "Product ID" << left << setw(30) <<"DESCRIPTION" << left << setw(15) << "Suplier Name" << left << setw(10) <<"Price"<< left << setw(15) <<"Item Quantity" << left << setw(15) <<"Reorder Point"<< left << setw(15) << "Category"<< left << setw(15) << "Unit Of Measurement"<<endl;
    while(!container.empty()){
        if(container.top()->itemQuantity <= container.top()->reorderPoint){
             cout  << left << setw(15) << container.top()->productID << left << setw(30) <<textFileToConsole(container.top()->productDescrption) << left << setw(15) << textFileToConsole(container.top()->supplierName) << left << setw(10) <<container.top()->itemPrice<< left << setw(15) <<container.top()->itemQuantity << left << setw(15) <<container.top()->reorderPoint<< left << setw(15) << textFileToConsole(container.top()->category)<< left << setw(15) << textFileToConsole(container.top()->unitOfMeasurement)<<endl;
             checker = false;
             counter++;
        }
       
        container.pop();
    }
    if(checker)
    {   
        system("cls");
        cout << "There is not product entry that needs immediate restocking\n\n";
        cout << "Press enter to return to main menu\n";
        cinClearer();
        return 0; 
    }
    updateOutOfStockList(tree, true);
    
    return counter;
}

bool checkIfProductAlreadyExists(struct bstnode *root, int key)
{
    if(root == NULL)
    {
        return false;
    }
    if(root->productID == key)
    {
        return true;
    }
    if(root->productID > key)
    {
        return checkIfProductAlreadyExists(root->left, key);
    }
    return checkIfProductAlreadyExists(root->right, key);
}
bool checkIfQuantityExists(struct bstnode *root, int id, int qt)
{
    if(root == NULL)
    {
        return false;
    }
    if(root->productID == id && root->itemQuantity < qt)
    {
        return true;
    }
    if(root->productID > id)
    {
        return checkIfQuantityExists(root->left, id, qt);
    }
    return checkIfQuantityExists(root->right, id, qt);
}

void deleteProduct()
{
    int productId = 0;
    bool idChecker = false;
    cout << "\n\nProduct Deletion: \n";
    do {
        cout << "Enter Product ID: "; 
        cin >> productId;
        cinClearer();
        if (productId <= 0)
        {
            cout << "Invalid ID number! Negative values not allowed. Please Try again.\n";
            idChecker = true;
            system("pause");
        }
        else
        {
            if(checkIfProductAlreadyExists(tree, productId))
            {
                idChecker = false;
            }
            else
            {
                cout << "This product does not exist! Please enter valid ID.\n";
                idChecker = true;
                system("pause");
            }
        }
    } while(idChecker);
    tree = deleteNode(tree, productId);
    updateMasterList(tree,true);    
    dataIntake();
    
    cout << "\n\n Product has been deleted, press enter to continue";
    cinClearer();
}

void addSales()
{
    int counter = 0;
    char option; 
    do {
    showAllProducts();
    int productId = 0;
    int productQuantity = 0;
    bool verification = false;
    
        while(true){
            cout << "\n\nEnter Product ID: "; cin >> productId; cout << endl;
            cinClearer();
            if (!checkIfProductAlreadyExists(tree, productId)){
                cout << "Product does not exist\n";
                verification = true;
                system("pause");
                continue;
            }
            break;
        }
        
    do 
    {   
        cout << "Enter sold quantity: "; cin >> productQuantity; cout << endl;
        cinClearer();
        if (productId < 0 || productQuantity <= 0)
        {
            cout << "Invalid Inputs! Please try again\n";
            verification = true;
            system("pause");
        }
        else
        {
                if(!checkIfQuantityExists(tree, productId, productQuantity))
                {
                    ProductIDFinder(tree,productId)->itemQuantity -= productQuantity;
                    verification = false;
                    updateMasterList(tree, true);
                    dataIntake();
                }
                else
                {
                    cout << "Quantity entered exceeds of what is available in stock\n";
                    verification = true;
                    system("pause");
                }
                
            
            
        }
    } while(verification);
    
    updateSalesFile(ProductIDFinder(tree,productId), productQuantity);
    system("cls");
    showAllProducts();
    cout << "\n\nEnter Product ID: " << productId;
    cout << "\n\nEnter Sold Quantity : " << productQuantity << endl;
    cout << "\nProduct sale succesfully recorded" << endl;
    cout << "Make another entry?[Y/N]: "; cin >> option;
    counter++;
    option = toupper(option);
    } while(option == 'Y');
}

void orderProduct()
{
    
    char tryAgain;
    do
    {
        system("cls");
        if(showAllProductstoReorder() == 0){
        return;
        }
        
        int productId = 0;
        int productQuantity = 0;
        bool verify = false;
        do
        {
            system("cls");
            if(showAllProductstoReorder() == 0){
                return;
            }
            cout << "\n\nEnter Product ID: "; cin >> productId; cout << endl;
            cinClearer();
            if (!checkIfProductAlreadyExists(tree, productId)){
                cout << "Product does not exist\n";
                verify = true;
                system("pause");
                continue;
            }
            if(ProductIDFinder(tree,productId)->itemQuantity > ProductIDFinder(tree,productId)->reorderPoint){
                cout << "\n\n Product exist but stock is well above ROP, press enter to order again";
                verify = true;
                cinClearer();
                continue;

            }   
            cout << "Enter Desired Quantity: "; cin >> productQuantity; cout << endl;
            if (productId < 0 || productQuantity < 0)
            {
                cout << "Invalid Inputs! Please try again\n";
                verify = true;
                system("pause");
            }
            else
            {
                if (checkIfProductAlreadyExists(tree, productId))
                {
                    while (ProductIDFinder(tree,productId)->itemQuantity + productQuantity > 1000000)
                    {
                        cout << "Inventory cannont exceed 1000000 for each item! Only order a quantity that does not cause it to exceed the limit" << endl;
                        cout << "Enter desired quantity: \n";
                        cin >> productQuantity;
                        cinClearer();
                    }
                    verify = false;
                }
                else
                {
                    cout << "Product does not exist\n";
                    verify = true;
                    system("pause");
                }            
            }
            
        } while (verify);
        updateOrderFile(ProductIDFinder(tree, productId), productQuantity);
        cout << "Make another entry?[Y/N]: "; cin >> tryAgain;
        cinClearer();
        tryAgain = toupper(tryAgain);
    } while (tryAgain == 'Y');
}

void recieveProduct()
{
    int orderNumber =1;
    fstream orderFile;
    string infoLine;
    orderFile.open("orderFile.txt", ios::in);
    if (orderFile.is_open())
    {
        getline(orderFile,infoLine);
        cout << "Order Number          " <<infoLine << endl;
        while(getline(orderFile, infoLine))
        {
            cout << "     "<<orderNumber<<"                "<<textFileToConsole(infoLine) << endl;
            orderNumber++;
        }
    }
    else
    {
        cout << "No order has Been created;" << endl;
    }

    orderFile.close();
    if(orderNumber == 1){
        system("cls");
        cout << "No Order has been created";
        cout << endl << "Press enter to return to main menu";
        cinClearer();
        return;
    }
    int productId;
    int orderAmmount;
    int counter = 0;
    cout << "\n\nEnter the Order number of order to be recieved: "; cin >> productId;
    cout << endl;
    cinClearer();
    ifstream orderReceive;
    ofstream copy;
    ofstream receivedList;
    string transferer;
    string receivedLine;
    orderReceive.open("orderFile.txt");
    copy.open("copy.txt");
    receivedList.open("Recieved.txt", ios::app);

    while(!orderReceive.eof()){
        if(counter != productId){
            getline(orderReceive,transferer);
            copy << transferer;
            if(!orderReceive.eof()){
                copy << endl;
            }
        }else{
            getline(orderReceive,transferer);
            receivedList << transferer << endl;
            receivedLine = transferer;
        }
        counter++;
    }
    orderReceive.close();
    copy.close();
    receivedList.close();

    copy.open("orderFile.txt");
    orderReceive.open("copy.txt");
    while(!orderReceive.eof()){
        getline(orderReceive,transferer);
        copy << transferer;
        if(!orderReceive.eof()){
           copy << endl;
        }
    }
    copy.close();
    copy.open("copy.txt");
    copy << receivedLine;
    copy.close();
    orderReceive.close();
    orderReceive.open("copy.txt");
    orderReceive >> productId >> transferer >> orderAmmount;
    orderReceive.close();
    if(checkIfProductAlreadyExists(tree, productId)){
         ProductIDFinder(tree,productId)->itemQuantity += orderAmmount;
    }else{
        cout << "Product has been deleted, order file will be updated, however, it will not show up in the system";
    }
   
    orderReceive.close();
    remove("copy.txt");
    updateMasterList(tree, true);
}
// BS TREE Structs and Functions

void treeClear(bstnode*& root) {                  
  if(root!=NULL) {
    treeClear(root->left);
    treeClear(root->right);
    delete root;
    root = NULL; 
  }
}

void clearSales(struct bstnode *root) { 
    if (root != NULL) { 
        clearSales(root->left); 
        root->totalSales = 0; 
        clearSales(root->right); 
    } 
} 
void showSales(struct bstnode *root){
    if (root != NULL) { 
        showSales(root->left);
        if(root->totalSales != 0){
            cout  << left << setw(15) << root->productID << left << setw(30) <<textFileToConsole(root->productDescrption) << left << setw(15) << root->totalSales << endl;
        }
        showSales(root->right); 
    } 
}

struct bstnode* insert(struct bstnode* node, bstnode *newProduct) { 
  
    if (node == NULL)
    {
        return newNode(newProduct); 
    } 
    
    if (newProduct->productID < node->productID) 
    {
        node->left  = insert(node->left, newProduct); 
    }
    else
    {
        node->right = insert(node->right, newProduct);
    }
    return node; 
} 

bstnode* sortedArrayToBST(vector<bstnode*> arr,  int start, int end){  
    if (start > end){ return NULL; }
    int mid = (start + end)/2;
    bstnode *temp = newNode(arr[mid]);  
    temp->left = sortedArrayToBST(arr, start, mid - 1);  
    temp->right = sortedArrayToBST(arr, mid + 1, end);  
    return temp;  
}  

struct bstnode * minValueNode(struct bstnode*node) { 
    struct bstnode* current = node; 
    while (current->left != NULL) { current = current->left; }
    return current; 
} 


struct bstnode *newNode(bstnode *newProduct) {  
    struct bstnode *temp =  new struct bstnode(); 
    temp->category = newProduct->category;
    temp->itemPrice = newProduct->itemPrice;
    temp->itemQuantity = newProduct->itemQuantity;
    temp->productDescrption = newProduct->productDescrption;
    temp->productID = newProduct->productID;
    temp->reorderPoint = newProduct->reorderPoint;
    temp->supplierName = newProduct->supplierName;
    temp->unitOfMeasurement = newProduct->unitOfMeasurement;
    newProduct->left = NULL;
    newProduct->right = NULL; 
    return temp; 
} 



struct bstnode* deleteNode(struct bstnode* root, int productID) { 
    if (root == NULL) { return root; } 
    
    if (productID < root->productID) 
    { root->left = deleteNode(root->left, productID); }
    else if (productID > root->productID) 
    { root->right = deleteNode(root->right, productID); }
    else 
    { 
        if (root->left == NULL) { 
            struct bstnode *temp = root->right; 
            free(root); 
            return temp; 
        } else if (root->right == NULL) { 
            struct bstnode *temp = root->left; 
            free(root); 
            return temp; 
        } 
        struct bstnode* temp = minValueNode(root->right); 
        root->productID = temp->productID; 
        root->right = deleteNode(root->right, temp->productID); 
    } 
    return root; 
}   

struct bstnode* ProductIDFinder(struct bstnode* root, int productID) { 
    // Base Cases: root is null or key is present at root 
    if (root == NULL || root->productID == productID){ return root; } 
       
    if (root->productID < productID) { return ProductIDFinder(root->right, productID); }
    return ProductIDFinder(root->left, productID); 
} 
        
   void productChanger(){
    system("cls");
    showAllProducts();
    int productID;
    int choice;
    string temp;
    cout << "\n\n Enter the product ID of the product : ";
    cin >>productID;
    cout << endl << "Choose Product detail to change";
    cout << endl << endl << "[1] Price" ;
    cout << endl << "[2] Description" ;
    cout << endl << "[3] Suplier Name" ;
    cout << endl << "[4] Unit Of Meausure" ;

    cout << endl << endl << "Choice :";
    
    cin >> choice;
    cinClearer();
    while(choice < 0 || choice > 4){
        cout << "\nInvalid Input\n Choice : ";
        cin >> choice;
        cinClearer();
    }
    system("cls");
    
    switch (choice){
        case 1:
            cout << "Item Price : " << ProductIDFinder(tree,productID)->itemPrice << endl;
            cout << "New Item Price :";
            cin >>ProductIDFinder(tree,productID)->itemPrice;
            cinClearer();
            while(ProductIDFinder(tree,productID)->itemPrice > 999999)
            {
                cout << "Price cannot exceed 999,999" << endl;
                cout << "New Item Price :";
                cin >>ProductIDFinder(tree,productID)->itemPrice;
                cinClearer();
            }
            
            if(ProductIDFinder(tree,productID)->itemPrice < 200)
            {
                ProductIDFinder(tree,productID)->reorderPoint = 5;
            }
            else if(ProductIDFinder(tree,productID)->itemPrice >= 200 && ProductIDFinder(tree,productID)->itemPrice <= 500)
            {
                ProductIDFinder(tree,productID)->reorderPoint = 10;
            }
            else
            {
                ProductIDFinder(tree,productID)->reorderPoint = 15;
            }
            
            //Check For ROP
            break;
        case 2:
            cout << "Item Description : " << ProductIDFinder(tree,productID)->productDescrption << endl;
            cout << "New Item Description :";
            getline(cin,ProductIDFinder(tree,productID)->productDescrption);
            cinClearer();
            while(ProductIDFinder(tree,productID)->productDescrption.length() == 0 || ProductIDFinder(tree,productID)->productDescrption.length() > 29)
            {
                if(ProductIDFinder(tree,productID)->productDescrption.length() == 0)
                {
                    cout << "Product Description cannot be empty" << endl << endl;
                }
                else
                {
                     cout << "Product Description cannot exceed 29 characters(spaces are included as characters)" << endl << endl;
                }
                cout << "New Item Description :";
                getline(cin,ProductIDFinder(tree,productID)->productDescrption);
                cinClearer();
            }
            
            break;
        case 3:
            cout << "Item Suplier Name : " << ProductIDFinder(tree,productID)->supplierName << endl;
            cout << "New Item Suplier Name :";
            getline(cin,ProductIDFinder(tree,productID)->supplierName);
            cinClearer();
            while (ProductIDFinder(tree,productID)->supplierName.length() == 0 || ProductIDFinder(tree,productID)->supplierName.length() > 14)
            {
                if(ProductIDFinder(tree,productID)->supplierName.length() == 0)
                {
                    cout << "Supplier name cannot be empty" << endl << endl;
                }
                else
                {
                    cout << "Supplier name cannot exceed 14 characters(spaces are included as characters)" << endl << endl;
                }
                cout << "New Supplier Name :";
                getline(cin,ProductIDFinder(tree,productID)->supplierName);
                cinClearer();
            }
            
            break;
           case 4:
            cout << "Item UOM : " << ProductIDFinder(tree,productID)->unitOfMeasurement << endl;
            cout << "New Item UOM:";
            getline(cin,ProductIDFinder(tree,productID)->unitOfMeasurement);
            cinClearer();
            while(ProductIDFinder(tree,productID)->unitOfMeasurement.length() == 0 || ProductIDFinder(tree,productID)->unitOfMeasurement.length() > 14)
            {
                if(ProductIDFinder(tree,productID)->unitOfMeasurement.length() == 0)
                {
                    cout << "UOM cannot be empty" << endl << endl;
                }
                else
                {
                    cout << "UOM cannot exceed 14 characters(spaces are included as characters)" << endl << endl;
                }
                cout << "New Item UOM: ";
                getline(cin,ProductIDFinder(tree,productID)->unitOfMeasurement);
                cinClearer();
            }
            
            break;
                        

    }
    updateMasterList(tree,true);
    dataIntake();

    cout << "\n\n Item successfully modified, press enter to return to main menu.";
    cinClearer();

}


bool ROPchecker(){
    ifstream data;
    int counter = 0;
    data.open("MasterList.txt");
    string dummy;

    getline(data, dummy);
    
    int tempproductID;
    string tempproductDescrption;
    string tempsupplierName;
    float tempitemPrice;
    int tempitemQuantity;
    int tempreorderPoint;
    string tempcategory;
    string tempunitOfMeasurement;
    while(data >> tempproductID >> tempproductDescrption >> tempsupplierName >> tempitemPrice >> tempitemQuantity >> tempreorderPoint >> tempcategory >> tempunitOfMeasurement){
        if (tempitemQuantity  <= tempreorderPoint){
            counter++;
        }
    }
    return counter > 0;

}