#include <iostream>
#include <string>
#include <iomanip>
#include <queue>
#include <fstream>

using namespace std;


// Gumawa ng binary tree for products
// File system for products that has to be representative of the binary tree
// 1 update to product list, all files shall be updated, 
// Check Sum for rop
// Purchase thingy

struct bstnode { 
    //product ID, product description, supplier name, item price and item qty, ROP (reorder point), category and UOM (unit of measurement)
    // Insert here, Product ID should be a int kasi yan ang magiging key nating
    int productID; 
    string productDescrption;
    string supplierName;
    float itemPrice;
    int itemQuantity;
    int reorderPoint;
    string category;
    string unitOfMeasurement;
    struct bstnode *left, *right; 
}; 

struct comparePID { 
    bool operator()(bstnode* const& i1, bstnode* const& i2) {
            return i1->productID > i2->productID;
    }

};
  
struct bstnode *newNode(bstnode *newProduct);
void inorder(struct bstnode *root) ;
struct bstnode * minValueNode(struct bstnode*node);
struct bstnode* insert(struct bstnode* node, bstnode *newProduct);
struct bstnode* deleteNode(struct bstnode* root, int productID); 
void printBT(const string& prefix, const bstnode* node, bool isLeft);
void printBT(const bstnode* node);
bstnode* sortedArrayToBST(bstnode* arr[],  int start, int end);
void treeClear(bstnode*& root);



void cinClearer();
string consoleToTextFile(string consoleText);
string textFileToConsole(string textFileText);
void addProduct();
void dataIntake();
void updateMasterList(struct bstnode *root, bool isfirst);
void showAllProducts();
void outOfStockList();
void updateOutOfStockList(struct bstnode *root, bool isfirst);
void deleteProduct();
bool checkIfProductAlreadyExists(struct bstnode *root, int key);
bool checkIfQuantityExists(struct bstnode *root, int id, int qt);
void updateSalesFile(struct bstnode *root, bool isfirst, int id, int qt);
void addSales();
struct bstnode *tree = NULL;

int main(){
    while(true){
        int choice = 0;
        cout << "ABC Trading Company Inventory Management(Design Pending)" << endl << endl;
        cout << "1. Add Product((product ID validation pending)" << endl;
        cout << "2. Show all Products" << endl;
        cout << "3. Order Products" << endl;
        cout << "4. Recieve Products" << endl;
        cout << "5. Show Items Needed to be reordered" << endl;
        cout << "6. Delete Product" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter Choice : ";
        cin >> choice;
        cinClearer();
        switch (choice)
        {
        case 1:
            addProduct();
            break;
        case 2:
            showAllProducts();
            break;
        case 3:
            addSales();
            break;
        case 5:
            outOfStockList();
            updateOutOfStockList(tree, true);
            break;
        case 6:
            deleteProduct();
            break;
        case 7:
            exit(1);

        default:
            system("cls");
            cout << "This area still under construction, pls return later";
            cinClearer();
            break;
        }

    }

}


void addProduct(){ // Needs for checksum of negative numbers and things
    struct bstnode *temp =  new struct bstnode(); 
    bool checkId = false;
    int productId = 0;
    do {
        cout << "Enter Product ID :";
        cin >> productId;
        // check sum for same ID;
        cinClearer();
        if (productId <= 0)
        {
            cout << "Invalid ID number! Negative values not allowed. Please Try again.\n";
            checkId = true;
            system("pause");
        }
        else
        {
            if(checkIfProductAlreadyExists(tree, productId))
            {
                cout << "Product with entered ID number already exists! Please try again.\n";
                checkId = true;
                system("pause");
            }
            else
            {
                checkId = false;
            }
        }
    } while(checkId);
        temp->productID = productId;
        cout << "Enter Product Description :";
        getline(cin,temp->productDescrption);
        cout << "Enter Supplier Name :";
        getline(cin, temp->supplierName);
        cout << "Enter Product Price :";
        cin >> temp->itemPrice;
        cinClearer();
        cout << "Enter Item quantity :";
        cin >> temp->itemQuantity;
        cinClearer();
        cout << "Enter category :";
        getline(cin,  temp->category );
        cout << "Enter Unit of Measurement:";
        getline(cin, temp->unitOfMeasurement);
        if(temp->itemPrice < 200){
            temp->reorderPoint = 5;
        }else if(temp->itemPrice >= 200 && temp->itemPrice <= 500){
            temp->reorderPoint = 10;
        }else{
            temp->reorderPoint =15;
        }

        tree = insert(tree,temp);
        inorder(tree);
        cinClearer();
        updateMasterList(tree,true);
        treeClear(tree);
        dataIntake();
        
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


    
    const int size = container.size();
    bstnode* arr[size]; //causes error, can't run it in visual studio. The error is that: expression must have a constant value
    while(!container.empty()){   
        arr[counter] = container.top();
        counter++;
        container.pop();

    }

    tree = sortedArrayToBST(arr,0, size-1);
    
}

void updateMasterList(struct bstnode *root, bool isfirst){
    
    if (root != NULL) {
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
            master << left << setw(15) << root->productID << left << setw(30) << consoleToTextFile(root->productDescrption) << left << setw(15) << consoleToTextFile(root->supplierName) << left << setw(10) << root->itemPrice << left << setw(15) << root->itemQuantity << left << setw(15) << root->reorderPoint << left << setw(15) << consoleToTextFile(root->category) << left << setw(15) << consoleToTextFile(root->unitOfMeasurement) << endl;
            }
            master.close();
        }
        updateOutOfStockList(root->left, false);
        updateOutOfStockList(root->right, false);
    }
}

void updateSalesFile(struct bstnode *root, bool isfirst, int id, int qt)
{
    if (root != NULL) {
        if (isfirst) {
            ofstream creator("SalesFile.txt");
            if (!creator.is_open()) {
                system("cls");
                cout << "MasterList Cannot be oppened, press enter to exit the program";
                cinClearer();
                exit(1);
            }
            creator.close();
        }
        fstream master;
        master.open("SalesFile.txt", ios::app);

        if (!master.is_open()) {
            system("cls");
            cout << "MasterList Cannot be oppened, press enter to exit the program";
            cinClearer();
            exit(1);
        }
        else {
            if (isfirst) {
                master << left << setw(15) << "Product ID" << left << setw(30) << "Product Description" << left << setw(15) << "Suplier Name" << left << setw(10) << "Price" << left << setw(15) << "Quantitiy" << left << setw(15) << "ROP" << left << setw(15) << "Category" << left << setw(15) << "Unit Of Measurment" << endl;
            }
            master.close();
            master.open("SalesFile.txt", ios::app);
            if (root->productID == id)
            {
            master << left << setw(15) << root->productID << left << setw(30) << consoleToTextFile(root->productDescrption) << left << setw(15) << consoleToTextFile(root->supplierName) << left << setw(10) << root->itemPrice << left << setw(15) << qt << left << setw(15) << root->reorderPoint << left << setw(15) << consoleToTextFile(root->category) << left << setw(15) << consoleToTextFile(root->unitOfMeasurement) << endl;
            }
            master.close();
        }
        updateSalesFile(root->left, false, id, qt);
        updateSalesFile(root->right, false, id, qt);
    }
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
    while(!container.empty()){
        //D- Do not worry about this, I will change window size in order to acommodate size of this thing.
        cout  << left << setw(15) << container.top()->productID << left << setw(30) <<consoleToTextFile(container.top()->productDescrption) << left << setw(15) << consoleToTextFile(container.top()->supplierName) << left << setw(10) <<container.top()->itemPrice<< left << setw(15) <<container.top()->itemQuantity << left << setw(15) <<container.top()->reorderPoint<< left << setw(15) << consoleToTextFile(container.top()->category)<< left << setw(15) << consoleToTextFile(container.top()->unitOfMeasurement)<<endl;
        container.pop();
    }
}

void outOfStockList()
{
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
    cout << "Out of Stock List: \n";
    while(!container.empty()){
        if (container.top()->itemQuantity <= container.top()->reorderPoint){
        //D- Do not worry about this, I will change window size in order to acommodate size of this thing.
        cout  << left << setw(15) << container.top()->productID << left << setw(30) <<consoleToTextFile(container.top()->productDescrption) << left << setw(15) << consoleToTextFile(container.top()->supplierName) << left << setw(10) <<container.top()->itemPrice<< left << setw(15) <<container.top()->itemQuantity << left << setw(15) <<container.top()->reorderPoint<< left << setw(15) << consoleToTextFile(container.top()->category)<< left << setw(15) << consoleToTextFile(container.top()->unitOfMeasurement)<<endl;
        }
        container.pop();
    }
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
    cout << "Product Deletion: \n";
    do {
        cout << "Enter Product ID: "; cin >> productId;
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
    inorder(tree);
    cinClearer();
    updateMasterList(tree,true);
    treeClear(tree);
    dataIntake();
}

void addSales()
{
    int counter = 0;
    
    char option; 
    do {
    int productId = 0;
    int productQuantity = 0;
    bool verification = false;
    do 
    {
        cout << "Enter Product ID: "; cin >> productId; cout << endl;
        cout << "Enter desired quantity: "; cin >> productQuantity; cout << endl;
        if (productId < 0 || productQuantity < 0)
        {
            cout << "Invalid Inputs! Please try again\n";
            verification = true;
            system("pause");
        }
        else
        {
            if (checkIfProductAlreadyExists(tree, productId))
            {
                if(!checkIfQuantityExists(tree, productId, productQuantity))
                {
                    verification = false;
                }
                else
                {
                    cout << "Quantity entered exceeds of what is available in stock\n";
                    verification = true;
                    system("pause");
                }
                
            }
            else
            {
               cout << "Product does not exist\n";
               verification = true;
               system("pause");
            }
            
        }
        
    } while(verification);
    
    if (counter == 0)
    {
        updateSalesFile(tree, true, productId, productQuantity);
    }
    else
    {
        updateSalesFile(tree, false, productId, productQuantity);
    }
    
    std::cout << "Make another entry?[Y/N]: "; cin >> option;
    counter++;
    option = toupper(option);
    } while(option == 'Y');
}
// BS TREE STUFF


void treeClear(bstnode*& root) {                  
  if(root!=NULL) {
    treeClear(root->left);
    treeClear(root->right);
    delete root;
    root = NULL; 
  }
}

void inorder(struct bstnode *root) { 
    if (root != NULL) { 
        inorder(root->left); 
        cout<<root->productID<<" "; 
        inorder(root->right); 
    } 
} 



struct bstnode* insert(struct bstnode* node, bstnode *newProduct) { 
  
    if (node == NULL){
        return newNode(newProduct); 
    } 
    
    if (newProduct->productID < node->productID) {
        node->left  = insert(node->left, newProduct); 
    }
    else{
        node->right = insert(node->right, newProduct);
    }
    return node; 
} 

bstnode* sortedArrayToBST(bstnode* arr[],  int start, int end){  
    if (start > end){
        return NULL;  
    }

  
    int mid = (start + end)/2;
    bstnode *temp = newNode(arr[mid]);  
  
    /* Recursively construct the left subtree  
    and make it left child of root */
    temp->left = sortedArrayToBST(arr, start,  
                                    mid - 1);  
  
    /* Recursively construct the right subtree  
    and make it right child of root */
    temp->right = sortedArrayToBST(arr, mid + 1, end);  
  
    return temp;  
}  

struct bstnode * minValueNode(struct bstnode*node) { 
    struct bstnode* current = node; 
    

    while (current->left != NULL) {
        current = current->left; 
    }
    
    
    return current; 
} 



void printBT(const string& prefix, const bstnode* node, bool isLeft)
{
    if( node != nullptr )
    {
        
        cout << prefix;
        if(isLeft){
            cout << (char)195 << (char)196<< (char)196;
        }else{
            cout << (char)192 << (char)196<< (char)196;

        }
        cout << node->productID << endl;
        string container = "";
        container += (char)179;
        container += "   ";
        printBT( prefix + (isLeft ? container : "    "), node->left, true);
        printBT( prefix + (isLeft ? container : "    "), node->right, false);
    }
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

void printBT(const bstnode* node){
    printBT("", node, false);    
}

struct bstnode* deleteNode(struct bstnode* root, int productID) { 
    if (root == NULL) {
        return root;
    } 
    
       
    if (productID < root->productID) {
        root->left = deleteNode(root->left, productID); 
    }else if (productID > root->productID) {
        root->right = deleteNode(root->right, productID);
         }else { 
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
