#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    //opening a file using open()
    fstream new_file; 
    new_file.open("new_file.txt",ios::out);
    if(!new_file)
    {
        cout << "File creation failed" << endl; 
    }
    else
    {
        cout << "New file created" << endl;
        new_file.close();
    }
    //writing to a file
    ofstream myfile ("new_file.txt");
    if (myfile.is_open()) 
    { 
    myfile<< "This is a line.\n"; 
    myfile<< "This is another line.\n"; 
    myfile.close(); 
    }
    else
    {
        cout << "Unable to open file" << endl;
    }
    //reading from a file
    string line;
    ifstream myfile_2 ("new_file_2.txt");
    if (myfile_2.is_open()) 
    { 
        while (getline(myfile_2,line)) 
    { 
        cout<< line << '\n'; 
    } 
    myfile_2.close(); 
    } 
    else 
    {
        cout<< "Unable to open file"; 
    }


    return 0;
} 