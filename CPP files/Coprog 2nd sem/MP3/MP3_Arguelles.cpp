#include<iostream>
#include<sstream>
#include<string>
using namespace std;

string convertNum (string amountIss)
{
    string amounntNum = amountIss;
    string eachElementstr;
    string realAmount;
    int sizeofNum = amountIss.size();
    int elementsofAmount[12];
    int h0 = 0;
    int h = 0;
    int h2 = 0;
    int h3 = 0;
    string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine ", "ten ", "eleven ", "twelve ", 
                 "thirteen ", "fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ", 
                 "nineteen "
               }; 
    string ten[] = { "", "", "twenty ", "thirty ", "forty ", 
                 "fifty ", "sixty ", "seventy ", "eighty ", 
                 "ninety "
               }; 
    string hundred[] = {"", "hundred"};
    string thousand[] = {"", "thousand"};
    string cent[] = {"","centavos"};
    for (int x = 0; x < sizeofNum; x++)
    {
        eachElementstr = amountIss[x];
        stringstream(eachElementstr) >> elementsofAmount[x];
    }
    switch (sizeofNum)
    {
    case 4:
    {
        if (elementsofAmount[3] > 0)
        {
            h0 = 1;
        }
        realAmount = one[elementsofAmount[0]] + " Peso/s and " + ten[elementsofAmount[2]] + one[elementsofAmount[3]] + cent[h0];
        break;
    }
    case 5:
    {
        if (elementsofAmount[4] > 0)
        {
            h0 = 1;
        }
        realAmount = ten[elementsofAmount[0]] + one[elementsofAmount[1]] + " Peso/s and " + ten[elementsofAmount[3]] + one[elementsofAmount[4]] + cent[h0];
        break;
    }
    case 6: 
    {
        if (elementsofAmount[5] > 0)
        {
            h0 = 1;
        }
        realAmount = one[elementsofAmount[0]] + " hundred " + ten[elementsofAmount[1]] + one[elementsofAmount[2]] + " Peso/s and " + ten[elementsofAmount[4]] + one[elementsofAmount[5]] + cent[h0];
        break;
    }
    case 7:
    {
        if (elementsofAmount[1] > 0)
        {
            h = 1; 
        }
        if (elementsofAmount[6] > 0)
        {
            h0 = 1;
        }
        realAmount = one[elementsofAmount[0]] + " thousand "+ one[elementsofAmount[1]] + hundred[h] + ten[elementsofAmount[2]] + one[elementsofAmount[3]] + " Peso/s and " + ten[elementsofAmount[5]] + one[elementsofAmount[6]] + cent[h0];
        break;
    }
    case 8:
    {
        if (elementsofAmount[2] > 0)
        {
            h = 1; 
        }
        if (elementsofAmount[7] > 0)
        {
            h0 = 1;
        }
        realAmount = ten[elementsofAmount[0]] + one[elementsofAmount[1]] + " thousand "+ one[elementsofAmount[2]] + hundred[h] + ten[elementsofAmount[3]] + one[elementsofAmount[4]] + " Peso/s and " + ten[elementsofAmount[6]] + one[elementsofAmount[7]] + cent[h0];
        break;
    }
    case 9:
    {
        if (elementsofAmount[2] > 0)
        {
            h = 1;
        }
        if (elementsofAmount[3] > 0)
        {
            h2 = 1;
        }
        if (elementsofAmount[8] > 0)
        {
            h0 = 1;
        }
        realAmount = one[elementsofAmount[0]] + " hundred " + ten[elementsofAmount[1]] + one[elementsofAmount[2]] + thousand[h] + one[elementsofAmount[3]] + hundred[h2] + ten[elementsofAmount[4]] + one[elementsofAmount[5]] + " Peso/s and " + ten[elementsofAmount[7]] + one[elementsofAmount[8]] + cent[h0];
        break;
    }
    case 10:
    {
        if (elementsofAmount[1] > 0)
        {
            h = 1;
        }
        if (elementsofAmount[4] > 0)
        {
            h2 = 1;
        }
        if (elementsofAmount[3] > 0)
        {
            h3 = 1;
        }
        if (elementsofAmount[9] > 0)
        {
            h0 = 1;
        }
        realAmount = one[elementsofAmount[0]] + " million " + one[elementsofAmount[1]] + hundred[h] + ten[elementsofAmount[2]] + one[elementsofAmount[3]] + thousand[h3] + one[elementsofAmount[4]] + hundred[h2] + ten[elementsofAmount[5]] + one[elementsofAmount[6]] + " Peso/s and " + ten[elementsofAmount[8]] + one[elementsofAmount[9]] + cent[h0];
        break;
    }
    case 11:
    {
        if (elementsofAmount[2] > 0)
        {
            h = 1;
        }
        if (elementsofAmount[4] > 0)
        {
            h2 = 1;
        } 
        if (elementsofAmount[5] > 0)
        {
            h3 = 1;
        }
        if (elementsofAmount[10] > 0)
        {
            h0 = 1;
        }
        realAmount = ten[elementsofAmount[0]] + one[elementsofAmount[1]] + " million " + one[elementsofAmount[2]] + hundred[h] + ten[elementsofAmount[3]] + one[elementsofAmount[4]] + thousand[h2]+ one[elementsofAmount[5]] + hundred[h3] + ten[elementsofAmount[6]] + one[elementsofAmount[7]] + " Peso/s and " + ten[elementsofAmount[9]] + one[elementsofAmount[10]] + cent[h0];
        break;
    }
    case 12:
    {
        if (elementsofAmount[3] > 0)
        {
            h = 1;
        }
        if (elementsofAmount[5] > 0)
        {
            h2 = 1;
        }
        if (elementsofAmount[6] > 0)
        {
            h3 = 1;
        }
        if (elementsofAmount[11] > 0)
        {
            h0 = 1;
        }
        realAmount = one[elementsofAmount[0]] + " hundred " + ten[elementsofAmount[1]] + one[elementsofAmount[2]] + " million " + one[elementsofAmount[3]] + hundred[h] + ten[elementsofAmount[4]] + one[elementsofAmount[5]] + thousand[h2] + one[elementsofAmount[6]] + hundred[h3] + ten[elementsofAmount[7]] + one[elementsofAmount[8]] + " Peso/s and " + ten[elementsofAmount[10]] + one[elementsofAmount[11]] + cent[h0];
        break;
    }
    default:
        break;
    }
    
return realAmount;
}

string replaceElements(string theMessage)
{
    string str2 = theMessage;
    for(int i = 0; theMessage[i]!='\0'; i++){
        if (theMessage[i] == 'A' || theMessage[i] == 'a')
        {
        str2.replace(i, 1, "Z");
        }
        else if (theMessage[i] == 'B' || theMessage[i] == 'b')
        {
        str2.replace(i, 1, "Y");
        }
        else if (theMessage[i] == 'C' || theMessage[i] == 'c')
        {
        str2.replace(i, 1, "X");
        }
        else if (theMessage[i] == 'D' || theMessage[i] == 'd')
        {
        str2.replace(i, 1, "W");
        }
        else if (theMessage[i] == 'E' || theMessage[i] == 'e')
        {
        str2.replace(i, 1, "V");
        }
        else if (theMessage[i] == 'F' || theMessage[i] == 'f')
        {
        str2.replace(i, 1, "U");
        }
        else if (theMessage[i] == 'G' || theMessage[i] == 'g')
        {
        str2.replace(i, 1, "T");
        }
        else if (theMessage[i] == 'H' || theMessage[i] == 'h')
        {
        str2.replace(i, 1, "S");
        }
        else if (theMessage[i] == 'I' || theMessage[i] == 'i')
        {
        str2.replace(i, 1, "R");
        }
        else if (theMessage[i] == 'J' || theMessage[i] == 'j')
        {
        str2.replace(i, 1, "Q");
        }
        else if (theMessage[i] == 'K' || theMessage[i] == 'k')
        {
        str2.replace(i, 1, "P");
        }
        else if (theMessage[i] == 'L' || theMessage[i] == 'l')
        {
        str2.replace(i, 1, "O");
        }
        else if (theMessage[i] == 'M' || theMessage[i] == 'm')
        {
        str2.replace(i, 1, "N");
        }
        else if (theMessage[i] == 'N' || theMessage[i] == 'n')
        {
        str2.replace(i, 1, "M");
        }
        else if (theMessage[i] == 'O' || theMessage[i] == 'o')
        {
        str2.replace(i, 1, "L");
        }
        else if (theMessage[i] == 'P' || theMessage[i] == 'p')
        {
        str2.replace(i, 1, "K");
        }
        else if (theMessage[i] == 'Q' || theMessage[i] == 'q')
        {
        str2.replace(i, 1, "J");
        }
        else if (theMessage[i] == 'R' || theMessage[i] == 'r')
        {
        str2.replace(i, 1, "I");
        }
        else if (theMessage[i] == 'S' || theMessage[i] == 's')
        {
        str2.replace(i, 1, "H");
        }
        else if (theMessage[i] == 'T' || theMessage[i] == 't')
        {
        str2.replace(i, 1, "G");
        }
        else if (theMessage[i] == 'U' || theMessage[i] == 'u')
        {
        str2.replace(i, 1, "F");
        }
        else if (theMessage[i] == 'V' || theMessage[i] == 'v')
        {
        str2.replace(i, 1, "E");
        }
        else if (theMessage[i] == 'W' || theMessage[i] == 'w')
        {
        str2.replace(i, 1, "D");
        }
        else if (theMessage[i] == 'X' || theMessage[i] == 'x')
        {
        str2.replace(i, 1, "C");
        }
        else if (theMessage[i] == 'Y' || theMessage[i] == 'y')
        {
        str2.replace(i, 1, "B");
        }
        else if (theMessage[i] == 'Z' || theMessage[i] == 'z')
        {
        str2.replace(i, 1, "A");
        }
        else if (theMessage[i] == ' ' )
        {
        str2.replace(i, 1, "~");
        }
    }   
    return str2;
}

int main (){
    char mainSelect;
    do {
    int select1;
    do {
    cout << "Please select a task to perform: \n";
    cout << "[1]: Check Generator\n[2]: Word Scrambler\n[3]: Exit";
    cout << "\n";
    cout << "Enter here: ";
    cin >> select1;
    cout << "\n";
    } while(select1 > 3 || select1 <= 0);
    cout << "\n";
    switch (select1)
    {
    case 1:
    {
        char select2;
        do {
        string issPartner, recPartner, dateIssue;
        string amountIss;
        int checkNum;
        int checkSize; 
        cout << "CHECK GENERATOR: \n";
        cout << "Issuing Partner: "; cin >> issPartner;
        cout << "\n";
        cout << "Receiving Partner: "; cin >> recPartner;
        cout << "\n";
        cout << "Date Issued(mm/dd/yyyy): "; cin >> dateIssue;
        cout << "\n";
        do {
        cout << "Amount issued (must input .00, minimum of 2 decimal places): "; cin >> amountIss;
        checkSize = amountIss.size();
        checkNum = checkSize - 3; 
        } while (amountIss[checkNum] != '.');
        string finalAmount = convertNum(amountIss);
        cout << "----------------------Your Check----------------------";
        cout << "\n";
        cout << "Date Issued: " << dateIssue << "\n\n";
        cout << "This check is issued to " << recPartner << " from " << issPartner << " with the amount of " << finalAmount << " only (" << amountIss << "). \n";
        cout << "Try again? Y/N: "; cin >> select2;
        select2 = toupper(select2);
        } while (select2 == 'Y');
        break;
    }
    case 2:
    {
        char select3;
        do
        {
        string theMessage, spareMess;
        string newMess;
        string vowelMes, conMes;
        int messageSize, vowelSize = 0, conSize = 0;
        cout << "WORD SCRAMBLER: \n";
        cout << "Enter your message(no space pls): "; cin >> theMessage;
        cout << "\n";
        messageSize = theMessage.size();
        for(int i = 0; theMessage[i]!='\0'; i++) 
        {
        if(theMessage[i]=='a' || theMessage[i]=='e' || theMessage[i]=='i' ||
         theMessage[i]=='o' || theMessage[i]=='u' || theMessage[i]=='A' ||
         theMessage[i]=='E' || theMessage[i]=='I' || theMessage[i]=='O' ||
         theMessage[i]=='U')
        {
         vowelSize++;
         
        }
        else if((theMessage[i]>='a'&& theMessage[i]<='z') || (theMessage[i]>='A'&& theMessage[i]<='Z'))
        {
         conSize++;
         
        }
        }    
   cout << "Vowels in String(" << vowelSize << "): " << endl;
    for(int i = 0; theMessage[i]!='\0'; i++) 
        {
        if(theMessage[i]=='a' || theMessage[i]=='e' || theMessage[i]=='i' ||
         theMessage[i]=='o' || theMessage[i]=='u' || theMessage[i]=='A' ||
         theMessage[i]=='E' || theMessage[i]=='I' || theMessage[i]=='O' ||
         theMessage[i]=='U')
        {
        cout << theMessage[i] << " ";
        }
        }  
    cout << "\n";
   cout << "Consonants in String(" << conSize << "): " << endl;
   for(int i = 0; theMessage[i]!='\0'; i++) 
        {
        spareMess[i] = toupper(theMessage[i]);
        if(spareMess[i] == 'B' || spareMess[i] == 'C' || spareMess[i] == 'D' || spareMess[i] == 'F' || spareMess[i] == 'G' ||
        spareMess[i] == 'H' || spareMess[i] == 'J' || spareMess[i] == 'K' || spareMess[i] == 'L' || spareMess[i] == 'M' || spareMess[i] == 'N' || 
        spareMess[i] == 'P' || spareMess[i] == 'Q' || spareMess[i] == 'R' || spareMess[i] == 'S' || spareMess[i] == 'T' || spareMess[i] == 'V' ||
        spareMess[i] == 'W' || spareMess[i] == 'X' || spareMess[i] == 'Y' || spareMess[i] == 'Z')
        {
        cout << theMessage[i] << " ";
        }
        }   
        cout << "\n";
        newMess = replaceElements(theMessage);
        cout << "Encrypted Message: " << newMess << "\n";
        cout << "Try again? Y/N: "; cin >> select3;
        select3 = toupper(select3);
        } while (select3 == 'Y');
        
        break;
    }
    default:
        break;
    }
    cout << "Are you sure you want to exit? Try again? Y/N: ";
    cin >> mainSelect;
    mainSelect = toupper(mainSelect);
    } while(mainSelect == 'Y');
    return 0;
}