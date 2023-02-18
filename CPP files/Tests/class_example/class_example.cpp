#include<iostream>

using namespace std;

class ID{                                              //class definition

public:                                                  //public access - this means that methods under this section are    accessible outside this class     
          void idnum();                     
          void name();
          void dept();
          int age(int, int);
          void print();
          int printtwo = 2;
          void printthree() {
            printtwo = 3;
            
          }

private:                                                 //private access - this means that methods and variables under this section are only accessible in this class

  int temp;
  char id[10], empname[100], empdept[100];
  

};                                                                  //end of class definition

int main(void) {

ID dlsl_mark;                                   // this is how you create an object based on the ID class
int ytoday, ybirth;                        //object name here is dlsl_mark; you can also create more objects
dlsl_mark.idnum();
dlsl_mark.name();
dlsl_mark.dept();
cout<<"Input year of birth: ";
cin>>ybirth;
cout<<"Input year today: ";
cin>>ytoday;
dlsl_mark.age (ytoday, ybirth);
dlsl_mark.print();
cout << dlsl_mark.printtwo << endl;
dlsl_mark.printthree();
cout << dlsl_mark.printtwo;
return 0;
}

//Function or Method definitions -- if you notice these are our functions or methods in the class // ID we created above

void ID::idnum(){              // the use of the :: (double colon) ties up the function definition to class ID
cout<<"ID Number:";   // :: is called the scope resolution operator
cin>>id;
}

void ID::name(){
 cout<<"Employee Name: ";
 cin>>empname;
}

void ID::dept(){
  cout<<"Department: ";
  cin>>empdept;
}

int ID::age(int ytoday, int ybirth){
temp=ytoday-ybirth;
return temp;
}

void ID::print(){
  cout<<endl;
  cout<<"ID Number: "<<id<<"\n\n";
  cout<<"Hello I am "<<empname<<"\n";
  cout<<"from "<<empdept<<" department\n";
  cout<<"I am "<<temp<<" years old\n";
  cout<<"What can I do for you?\n\n";
}

