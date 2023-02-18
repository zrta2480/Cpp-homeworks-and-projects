/* FINALS.cpp : Defines the entry point for the console application.
Arguelles, Zeth
Bautista, Carlo
Martija, Rollen
S11-01
<#D'PROgwarriors>
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


int main()
{ 
	//Made by Rollen Martija

	string ch, ans_1, ans_2, ans_3, ans_4, yes, no;//Initializes for numbers 1 to 4
	float ans_5a, ans_5b, ans_6a, ans_6b, ans_7, ans_8, total_amount, net_amount;//Initializes numbers 5 to 8
	void MaximizeOutputWindow(void);
	{
		HWND consoleWindow = GetConsoleWindow(); // This gets the value Windows uses to identify your output window 
		ShowWindow(consoleWindow, SW_MAXIMIZE); // this mimics clicking on its' maximize button
	}
	//Made by Rollen Martija
	system("color 3F"); //sets the color of the application
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTitleA("Household Food Security Survey Module (HFSSM)"); //this shows the name of the project in the title bar
	//Made by Rollen Martija
	cout << "\n\t\t\t\t\t\t\tHousehold Food Security Survey Module (HFSSM)";
	cout << "\n\t\t\t\t\t\t\t(A Survey Measurement of Food Insecurity and Hunger)";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n\t\t\t\t\t\t\tI. FOOD EXPENDITURES";
	cout << "\n";
	cout << "\nInstructions: Only type yes or no on numbers 1, 2, 3, and 4, while type the corresponding amount on numbers 5 to 8.";
	cout << "\n";
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija
	cout << "\n1. First, did (you/anyone in your household) shop for food at a supermarket or grocery store LAST WEEK?";
	cout << "\n";
	do {
		cout << "\nPlease type Yes or No";
		cout << "\n";
		cin >> ans_1; // to type the yes or no
		cout << "\n";
	} while (!cin.fail() && ans_1 != "yes" && ans_1 != "no" && ans_1 != "Yes" && ans_1 != "No" && ans_1 != "YES" && ans_1 != "NO"); //Loops to confirm if input is valid
	cout << "\n";
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija
	cout << "\n2. Think about other places where people buy food, such as meat markets, produce stands, bakeries, warehouse clubs, and convenience stores. Did (you/anyone in your household) buy food from any stores such as these LAST WEEK?";
	cout << "\n";
	do {
		cout << "\nPlease type Yes or No";
		cout << "\n";
		cin >> ans_2; // to type the yes or no
		cout << "\n";
	} while (!cin.fail() && ans_2 != "yes" && ans_2 != "no" && ans_2 != "Yes" && ans_2 != "No" && ans_2 != "YES" && ans_2 != "NO");//Loops to confirm if input is valid
	cout << "\n";
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija
	cout << "\n3. LAST WEEK, did (you/anyone in your household) buy food at a restaurant, fast food place, cafeteria, or vending machine? (Include any children who may have bought food at the school cafeteria).";
	cout << "\n";
	do {
		cout << "\nPlease type Yes or No";
		cout << "\n";
		cin >> ans_3; // to type the yes or no
		cout << "\n";
	} while (!cin.fail() && ans_3 != "yes" && ans_3 != "no" && ans_3 != "Yes" && ans_3 != "No" && ans_3 != "YES" && ans_3 != "NO");//Loops to confirm if input is valid
	cout << "\n";
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija
	cout << "\n4. Did (you/anyone in your household) buy food from any other kind of place LAST WEEK?";
	cout << "\n";//
	do {
		cout << "\nPlease type Yes or No";
		cout << "\n";
		cin >> ans_4; // to type the yes or no
		cout << "\n";
	} while (!cin.fail() && ans_4 != "yes" && ans_4 != "no" && ans_4 != "Yes" && ans_4 != "No" && ans_4 != "YES" && ans_4 != "NO");//Loops to confirm if input is valid
	cout << "\n";
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	{//Made by Rollen Martija
		cout << "\n5. How much did (you/your household) ACTUALLY spend at supermarkets and grocery stores LAST WEEK (including any purchases)?";
		cout << "\nP";
		bool valid20 = false;
		while (!valid20)
		{
			valid20 = true;

			cin >> ans_5a;//Allows users to input the an amount
			cout << "\n";
			if (cin.fail())//If statement to ensure users input integers

			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter integers only." << endl;
				cout << "\nP";
				valid20 = false;
			}

		}
	}
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	{
		cout << "\n5a.How much of the P" << ans_5a << " was for nonfood items, such as pet food, paper products, detergents, or cleaning supplies?";
		cout << "\nP";
		bool valid21 = false;
		while (!valid21)
		{
			valid21 = true;

			cin >> ans_5b;//Allows users to input the an amount
			cout << "\n";
			if (cin.fail())//If statement to ensure users input integers

			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter integers only." << endl;
				cout << "\nP";
				valid21 = false;
			}

		}
	}
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	{//Made by Rollen Martija
		cout << "\n6. How much did (you/your household) spend at stores such as meat markets, produce stands, bakeries, and convenience stores LAST WEEK (including any purchases)?";
		cout << "\nP";
		bool valid22 = false;
		while (!valid22)
		{
			valid22 = true;

			cin >> ans_6a;//Allows users to input the an amount
			cout << "\n";
			if (cin.fail())//If statement to ensure users input integers

			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter integers only." << endl;
				cout << "\nP";
				valid22 = false;
			}

		}
	}
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	{
		cout << "\n6b. How much of the P" << ans_6a << " was for nonfood items, such as pet food, paper products, detergents, or cleaning supplies?";
		cout << "\nP";
		bool valid23 = false;
		while (!valid23)
		{
			valid23 = true;

			cin >> ans_6b;//Allows users to input the an amount
			cout << "\n";
			if (cin.fail())//If statement to ensure users input integers

			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter integers only." << endl;
				cout << "\nP";
				valid23 = false;
			}

		}
	}
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	{//Made by Rollen Martija
		cout << "\n7. How much did (you/your household) spend for food at any other kind of place, cafeterias, and vending machines LAST WEEK?";
		cout << "\nP";
		bool valid24 = false;
		while (!valid24)
		{
			valid24 = true;

			cin >> ans_7;//Allows users to input the an amount
			cout << "\n";
			if (cin.fail())//If statement to ensure users input integers

			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter integers only." << endl;
				cout << "\nP";
				valid24 = false;
			}

		}
	}
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	{//Made by Rollen Martija
		cout << "\n8. How much did (you/your household) spend for food at any other kind of place LAST WEEK?";
		cout << "\nP";
		bool valid25 = false;
		while (!valid25)
		{
			valid25 = true;

			cin >> ans_8;//Allows users to input the an amount
			cout << "\n";
			if (cin.fail())//If statement to ensure users input integers

			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter integers only." << endl;
				cout << "\nP";
				valid25 = false;
			}

		}
	}
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	cout << "\Analysis:";
	//Made by Rollen Martija
	total_amount = ans_5a + ans_6a + ans_7 + ans_8;//Gets the sum of the inputs of number 5 to 8
	net_amount = total_amount - (ans_5b + ans_6b);//Gets net amount

	if ((ans_1 == "no") && (ans_2 == "no") && (ans_3 == "no") && (ans_4 == "no"))//If the inputs were all no
																				 // if condition is true then print the following
	{
		cout << "\nLet's see, it seems that (you/your household) did not buy any food LAST WEEK.";
	}
	// if not then print the following
	else if ((ans_1 == "No") && (ans_2 == "No") && (ans_3 == "No") && (ans_4 == "No"))//If the inputs were all no
	{
		cout << "\n Let's see, it seems that (you/your household) did not buy any food LAST WEEK.";
	}
	else if ((ans_1 == "NO") && (ans_2 == "NO") && (ans_3 == "NO") && (ans_4 == "NO"))//If the inputs were all no
	{
		cout << "\n Let's see, it seems that (you/your household) did not buy any food LAST WEEK.";
	}
	else//If the inputs were all yes
		cout << "\n Let's see, (you/your household) spent about P" << total_amount << " on food LAST WEEK.";
	cout << "\n";
	cout << "\n";
	cout << "\nNow think about how much (you/you're household) USUALLY (spend/spends). How much (do you/does your household) USUALLY spend on food at all the different we've been talking about IN A WEEK? (Please include only purhcases made for food. Do not include nonfood items such as pet food, paper products, detergent or cleaning supplies.)";
	cout << "\n";
	cout << "\n";
	cout << "\Based on your answers above, you spent P" << net_amount << " in a week for foods.";
	cout << "\n";
	cout << "\n";
	system("PAUSE");
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n\t\t\t\t\t\t\tII. MINIMUM SPENDING NEED TO HAVE ENOUGH FOOD";
	string ans_9;//Initializes number 9 as string
	float amount_more, amount_less;//Initializes items to have decimal points
								   //Made by Rollen Martija
	cout << "\n9. In order to buy just enough food to meet (your needs/the needs of your household), would you need to spend more than you do now, or could you spend less?";
	cout << "\n";
	do {
		cout << "\nPlease type More or Less";
		cout << "\n";
		cin >> ans_9; // to type the yes or no
		cout << "\n";
	} while (!cin.fail() && ans_9 != "More" && ans_9 != "Less" && ans_9 != "more" && ans_9 != "less" && ans_9 != "MORE" && ans_9 != "LESS");//Loops if conditions are not satisfied
	cout << "\n";

	if (ans_9 == "More" || ans_9 == "more" || ans_9 == "MORE")
		// if condition is true then print the following
	{
		{
			cout << "\n************************************************************************************************************************************************************************";
			cout << "\n";
			cout << "\nAbout how much MORE would you need to spend each week to buy just enough food to meet the needs of you're household?";
			cout << "\nP";
			bool valid26 = false;
			while (!valid26)
			{
				valid26 = true;

				cin >> amount_more;//Allows user to input amount
				cout << "\n";
				if (cin.fail())//Ensures user inputs only integers

				{
					cin.clear();
					cin.ignore();
					cout << "\n";
					cout << "Please enter integers only." << endl;
					cout << "\nP";
					valid26 = false;
				}

			}
		}
	}
	else//If the input was "Less"
	{

		{
			cout << "\n************************************************************************************************************************************************************************";
			cout << "\n";
			cout << "\nAbout how much LESS would you spend each week and still buy enough food to meet the needs of you're household?";
			cout << "\nP";
			bool valid27 = false;
			while (!valid27)
			{
				valid27 = true;

				cin >> amount_less;//Allows user to input amount
				cout << "\n";
				if (cin.fail())//Ensures user inputs only integers

				{
					cin.clear();
					cin.ignore();
					cout << "\n";
					cout << "Please enter integers only." << endl;
					cout << "\nP";
					valid27 = false;
				}

			}
		}

	}
	cout << "\n";
	cout << "\n";
	system("PAUSE");
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	cout << "\n************************************************************************************************************************************************************************";
	//Made by Rollen Martija and Zeth Arguelles
	cout << "\t\t\t\t\t\t\tIII. FOOD PROGRAM PARTICIPATION\n";
	cout << "\n";
	int day_recieved, amount_foodstamp, number_wc;
	string ans_10, ans_11, ans_12, ans_13, ans_14, ans_15, mo_recieved;
	//Made by Rollen Martija and Zeth Arguelles
	cout << "10. In the last 12 months, since December of last year, did you ever run short of money and try to make your food or your food money go further?";
	cout << "\n";
	do
	{
		cout << "\n";
		cout << "Please input Yes or No\n";
		cin >> ans_10;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_10 != "yes" && ans_10 != "no" && ans_10 != "YES" && ans_10 != "NO" && ans_10 != "Yes" && ans_10 != "No");//Loops to ensure users ONLY input yes or no
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Zeth Arguelles
	cout << "11. In the past 12 months, since December of last year, did (you/anyone in this household) get food stamp benefits, that is, either food stamps or a food-stamp benefit card given by any government organization?";
	cout << "\n";
	do
	{
		cout << "\n";
		cout << "Please input Yes or No\n";
		cin >> ans_11;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_11 != "yes" && ans_11 != "no" && ans_11 != "YES" && ans_11 != "NO" && ans_11 != "Yes" && ans_11 != "No");//Loops to ensure users ONLY input yes or no


	if (ans_11 == "Yes" || ans_11 == "yes" || ans_11 == "YES")//If conditions are satisfied print the following
	{
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << "In which months from last year were food stamps received?\n";

		cout << "\n";
		do
		{

			cout << "Answer with the name of the complete name of the month\n";
			cin >> mo_recieved;//Allows users to input an amount
			cout << "\n";
		} while (!cin.fail() && mo_recieved != "January" && mo_recieved != "january" && mo_recieved != "JANUARY" && mo_recieved != "February" && mo_recieved != "february" && mo_recieved != "FEBRUARY" && mo_recieved != "March" && mo_recieved != "march" && mo_recieved != "MARCH" && mo_recieved != "April" && mo_recieved != "april" && mo_recieved != "APRIL" &&  mo_recieved != "May" && mo_recieved != "may" && mo_recieved != "MAY" && mo_recieved != "June" && mo_recieved != "june" && mo_recieved != "JUNE" &&  mo_recieved != "July" && mo_recieved != "july" && mo_recieved != "JULY" && mo_recieved != "August" && mo_recieved != "august" && mo_recieved != "AUGUST" && mo_recieved != "September" && mo_recieved != "september" && mo_recieved != "SPETEMBER" && mo_recieved != "October" && mo_recieved != "october" && mo_recieved != "OCTOBER" && mo_recieved != "November" && mo_recieved != "november" && mo_recieved != "NOVEMBER" && mo_recieved != "December" && mo_recieved != "december" && mo_recieved != "DECEMBER");//Loops to ensure users only input months
		cout << "On what date in " << mo_recieved << " did (you/your household) receive food stamp benefits?\n";
		bool valid12 = false;
		while (!valid12)
		{
			valid12 = true;
			cin >> day_recieved;//Allows users to input day recieved
			if (cin.fail() || day_recieved > 31)//Loops to ensures users only input actual dates
			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter a value from 1 to 31 only." << endl;
				valid12 = false;
			}
		}
		cout << "\n";

		{
			cout << "\n************************************************************************************************************************************************************************";
			cout << "\n";
			cout << "How much did (you/your household) receive the last time you got food stamp benefits?";
			cout << "\nP";
			bool valid28 = false;
			while (!valid28)
			{
				valid28 = true;

				cin >> amount_foodstamp;//Allows users to input an amount
				cout << "\n";
				if (cin.fail())//Loops to ensure users only input integers

				{
					cin.clear();
					cin.ignore();
					cout << "\n";
					cout << "Please enter integers only." << endl;
					cout << "\nP";
					valid28 = false;
				}

			}
		}

	}

	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Zeth Arguelles
	cout << "12. During the past 30 days, did (your child/any children in the household between 5 and 18 years old) receive free or reduced-cost lunches at school?";
	cout << "\n";
	do
	{
		cout << "\n";
		cout << "Please input Yes or No\n";
		cin >> ans_12;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_12 != "yes" && ans_12 != "no" && ans_12 != "YES" && ans_12 != "NO" && ans_12 != "Yes" && ans_12 != "No");//Loops to ensure users ONLY input yes or no
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Zeth Arguelles
	cout << "13. During the past 30 days, did (your child/any children in the household) receive free or reduced-cost breakfasts at school?";

	cout << "\n";
	do
	{
		cout << "\n";
		cout << "Please input Yes or No\n";
		cin >> ans_13;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_13 != "yes" && ans_13 != "no" && ans_13 != "YES" && ans_13 != "NO" && ans_13 != "Yes" && ans_13 != "No");//Loops to ensure users ONLY input yes or no
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Zeth Arguelles
	cout << "14. During the past 30 days, did (your child/any children in the household) receive free or reduced-cost food at a day-care or Head Start program?";

	cout << "\n";
	do
	{
		cout << "\n";
		cout << "Please input Yes or No\n";
		cin >> ans_14;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_14 != "yes" && ans_14 != "no" && ans_14 != "YES" && ans_14 != "NO" && ans_14 != "Yes" && ans_14 != "No");//Loops to ensure users ONLY input yes or no
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Zeth Arguelles
	cout << "15. During the past 30 days, did any (women/women or children/children/women and children) in this household get food through the WIC program?";

	cout << "\n";
	do
	{
		cout << "\n";
		cout << "Please input Yes or No\n";
		cin >> ans_15;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_15 != "yes" && ans_15 != "no" && ans_15 != "YES" && ans_15 != "NO" && ans_15 != "Yes" && ans_15 != "No");//Loops to ensure users ONLY input yes or no
	if (ans_15 == "yes" || ans_15 == "Yes" || ans_15 == "YES")//Prints the following if conditions are satisfied
	{
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << "How many (women/women or children/children/women and children) in the household got WIC foods?";
		bool valid11 = false;
		while (!valid11)
		{
			valid11 = true;
			cout << "\n";
			cin >> number_wc;//Allows users to input an amount
			cout << "\n";
			if (cin.fail())//Loops to ensure users only input integers

			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter integers only." << endl;
				valid11 = false;
			}
			cout << "\n";
		}
	}
	cout << "\n";
	cout << "\n";
	system("PAUSE");
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n\t\t\t\t\t\t\tIV. FOOD SUFFICIENCY AND FOOD SECURITY";
	cout << "\n";
	cout << "\n";
	float ans_24b, ans_26, ans_25c, ans_28, ans_33, ans_35, ans_37b, ans_38b, ans_31b;//Intializes items to have decimal points
	char ans_16;//Initializes characters
	char ans_17a, ans_18a, ans_19a, ans_20a, ans_21a, ans_22a, ans_23b, ans_25b, ans_27b, ans_30b, ans_32b, ans_34b, ans_36b;
	string ans_17b, ans_18b, ans_19b, ans_20b, ans_21b, ans_22b, ans_23a, ans_24a, ans_25a, ans_27a, ans_27c, ans_29a, ans_29b, ans_30a, ans_31a, ans_32c, ans_32a, ans_34a, ans_34c, ans_36a, ans_37a, ans_38a;//Initializes characters

	cout << "\n";
	cout << "\nThe next questions are about food eaten in your household in the last 12 months, since December of last year, and whether you were able to afford the food you need.";
	cout << "\n";
	cout << "\n";
	system("PAUSE");
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "16. "" Which of these statements best describes' the food eaten in your household?""" << endl;
	cout << endl << "A. Enough of the kinds of food we want to eat \nB. Enough but not always the kind of food we want eat \nC. Sometimes not enough to eat \nD. Often not enough to eat" << endl;
	cout << "\n";
	do {
		cout << "NOTE: Please Input A, B, C, D" << endl;
		cin >> ans_16;//Allows users to input a,b,c,d
		cout << "\n";
	} while (!cin.fail() && ans_16 != 'a' && ans_16 != 'b' && ans_16 != 'c' && ans_16 != 'd' && ans_16 != 'A' && ans_16 != 'B' && ans_16 != 'C' && ans_16 != 'D');//Loops to ensure users only input a,b,c,or d

	cout << "\n";
	cout << "\nNow I'm going to state you several statements that people have made about their food situation. For these statements, please tell me whether the statement was OFTEN true, SOMETIMES true, or NEVER true for (you/your household) in the last 12 months.";
	cout << "\n";
	cout << "\n";
	system("PAUSE");
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << "17. The first statement is (I / We) worried whether(my / our) food would run out before(I / we) got money to buy more. Was that... \n \n A. OFTEN true \n B. SOMETIMES true \n C. NEVER true for (you / your household) in the last 12 months? \n";
	cout << "\n";
	do {
		cout << "NOTE: Please Input A, B, C" << endl;
		cin >> ans_17a;//Allows users to input a,b,c
		cout << "\n";
	} while (!cin.fail() && ans_17a != 'a' && ans_17a != 'b' && ans_17a != 'c' && ans_17a != 'A' && ans_17a != 'B' && ans_17a != 'C');
	ans_17a = tolower(ans_17a);//Loops to ensure users only input a,b, or c
	do {
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << "Did this ever happen in the last 30 days? (Yes / No)" << endl;
		cin >> ans_17b;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_17b != "yes" && ans_17b != "no" && ans_17b != "YES" && ans_17b != "NO" && ans_17b != "Yes" && ans_17b != "No");//Loops to ensure users only input yes or no

	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "18. ""The food that (I/We) bought just didn't last, and (I/we) didn't have money to get more. Was that...""" << endl;
	cout << "A. OFTEN true\nB. SOMETIMES true\nC. NEVER true\nFor (you/your household) in the last 12 months?\n" << endl;

	do {
		cout << "NOTE: Please Input A, B, C" << endl;
		cin >> ans_18a;//Allows users to input a,b,c
	} while (!cin.fail() && ans_18a != 'a' && ans_18a != 'b' && ans_18a != 'c' && ans_18a != 'A' && ans_18a != 'B' && ans_18a != 'C');//Loops to ensure users only input a,b, or c
	cout << "\n";
	do {
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << endl << "Did this ever happen in the last 30 days? (Yes / No)" << endl;
		cin >> ans_18b;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_18b != "yes" && ans_18b != "no"  && ans_18b != "YES" && ans_18b != "NO" && ans_18b != "Yes" && ans_18b != "No");//Loops to ensure users only input yes or no
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "19. ""(I/We) couldn't afford to eat balanced meals. Was that... ";
	cout << endl << "A. OFTEN true\nB. SOMETIMES true\nC. NEVER true\nFor (you/your household) in the last 12 months?";
	cout << "\n";
	cout << "\n";
	do {
		cout << "NOTE: Please Input A, B, C" << endl;
		cin >> ans_19a;//Allows users to input a,b,c
		cout << "\n";
	} while (!cin.fail() && ans_19a != 'a' && ans_19a != 'b' && ans_19a != 'c' && ans_19a != 'A' && ans_19a != 'B' && ans_19a != 'C');//Loops to ensure users only input a,b, or c
	do {
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << endl << "Did this ever happen in the last 30 days? (Yes / No)" << endl;
		cin >> ans_19b;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_19b != "yes" && ans_19b != "no" && ans_19b != "Yes" && ans_19b != "No" && ans_19b != "YES" && ans_19b != "NO");//Loops to ensure users only input yes or no
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "20. ""(I/we) relied on only a few kinds of low-cost food to feed ((my/our) child/the children) because (I was/we were) running out of money to buy food. Was that... ";
	cout << "\n";
	cout << "A. OFTEN true\nB. SOMETIMES true\nC. NEVER true\nFor (you/your household) in the last 12 months?" << endl;
	cout << "\n";
	do {
		cout << "NOTE: Please Input A, B, C" << endl;
		cin >> ans_20a;//Allows users to input a,b,c
		cout << "\n";
	} while (!cin.fail() && ans_20a != 'a' && ans_20a != 'b' && ans_20a != 'c' && ans_20a != 'A' && ans_20a != 'B' && ans_20a != 'C' && ans_20a != 'A' && ans_20a != 'B' && ans_20a != 'C');//Loops to ensure users only input a,b, or c

	do {
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << endl << "Did this ever happen in the last 30 days? (Yes / No)" << endl;
		cin >> ans_20b;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_20b != "yes" && ans_20b != "no" && ans_20b != "Yes" && ans_20b != "No" && ans_20b != "YES" && ans_20b != "NO");//Loops to ensure users only input yes or no
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "21. (I / we) couldn't feed((my / our) child / the children) a balanced meal, because (I / we) couldn't afford that. Was that..." << endl;
	cout << "A. OFTEN true\nB. SOMETIMES true\nC. NEVER true\nFor (you/your household) in the last 12 months?" << endl;
	cout << "\n";
	do {
		cout << "NOTE: Please Input A, B, C" << endl;
		cin >> ans_21a;//Allows users to input a,b,c
		cout << "\n";
	} while (!cin.fail() && ans_21a != 'a' && ans_21a != 'b' && ans_21a != 'c' && ans_21a != 'A' && ans_21a != 'B' && ans_21a != 'C');//Loops to ensure users only input a,b, or c

	do {
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << endl << "Did this ever happen in the last 30 days? (Yes / No)" << endl;
		cin >> ans_21b;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_21b != "yes" && ans_21b != "no" && ans_21b != "Yes" && ans_21b != "No" && ans_21b != "YES" && ans_21b != "NO");//Loops to ensure users only input yes or no
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "22. ((My/Our) child was/The children were) not eating enough because (I/we) just couldn't afford enough food.";
	cout << "\n";
	cout << "A. OFTEN true\nB. SOMETIMES true\nC. NEVER true\nFor (you/your household) in the last 12 months?" << endl;
	cout << "\n";
	do {
		cout << "NOTE: Please Input A, B, C" << endl;
		cin >> ans_22a;//Allows users to input a,b,c
		cout << "\n";
	} while (!cin.fail() && ans_22a != 'a' && ans_22a != 'b' && ans_22a != 'c' && ans_22a != 'A' && ans_22a != 'B' && ans_22a != 'C');//Loops to ensure users only input a,b, or c

	do {
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << endl << "Did this ever happen in the last 30 days? (Yes / No)" << endl;
		cin >> ans_22b;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_22b != "yes" && ans_22b != "no" && ans_22b != "Yes" && ans_22b != "No" && ans_22b != "YES" && ans_22b != "NO");//Loops to ensure users only input yes or no


	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << "23. In the last 12 months, did you or other adults in your household ever cut the size of your meals or skip meals because there wasn't enough money for food?" << endl;
	do {
		cout << endl << "(Yes or No)" << endl;
		cin >> ans_23a;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_23a != "yes" && ans_23a != "no" && ans_23a != "Yes" && ans_23a != "No" && ans_23a != "YES" && ans_23a != "NO");//Loops to ensure users only input yes or no

	if (ans_23a == "yes" || ans_23a == "Yes" || ans_23a == "YES") {
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << "How often did it happen?:\nA. Almost every month\nB. Some months but not every month\nC. Only in 1 or 2 months\nFor (you/your household) in the last 12 months?" << endl;
		cout << "\n";
		do {
			cout << "NOTE: Please Input A, B, C" << endl;

			cin >> ans_23b;//Allows users to input a,b,c
			cout << "\n";

		} while (!cin.fail() && ans_23b != 'a' && ans_23b != 'b' && ans_23b != 'c' && ans_23b != 'A' && ans_23b != 'B' && ans_23b != 'C');//Loops to ensure users only input a,b, or c

	}
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << "24. Now think about the last 30 days. During that time did (you/you or other adults in yourhousehold) ever cut the size of your meals or skip meals because there wasn't enough money for food?\n";
	cout << "\n";
	do {
		cout << "(Yes/No)" << endl;
		cin >> ans_24a;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_24a != "yes" && ans_24a != "no" && ans_24a != "Yes" && ans_24a != "No" && ans_24a != "YES" && ans_24a != "NO");//Loops to ensure users only input yes or no
	if (ans_24a == "yes" || ans_24a == "Yes" || ans_24a == "YES"){//If conditions are met the following below will be printed 
		cout << "\n";
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	cout << "How many days did this happen in the last 30 days?";
	bool valid = false;
	while (!valid)
	{
		valid = true;
		cout << "\n";
		cin >> ans_24b;//Allows users to input an amount
		cout << "\n";
		if (cin.fail() || ans_24b > 30)//Loops to ensure that users input only integers

		{
			cin.clear();
			cin.ignore();
			cout << "\n";
			cout << "Please enter a value from 1 to 30 only." << endl;
			valid = false;
		}
	}
}
cout << "\n************************************************************************************************************************************************************************";
cout << "\n";
//Made by Rollen Martija and Carlo Bautista
cout << "25. In the last 12 months, did you ever eat less than you felt you should because there wasn't enough money for food?" << endl;
do {
	cout << "(Yes/No)" << endl;
	cin >> ans_25a;//Allows users to input yes or no
	cout << "\n";
} while (!cin.fail() && ans_25a != "yes" && ans_25a != "no" && ans_25a != "Yes" && ans_25a != "No" && ans_25a != "YES" && ans_25a != "NO");//Loops to ensure users only input yes or no
if (ans_25a == "yes" || ans_25a == "Yes" || ans_25a == "YES"){ //If conditions are met the following below will be printed  
cout << "\n************************************************************************************************************************************************************************";
cout << "\n";
cout << "How often did it happen?:\nA. Almost every month\nB. Some months but not every month\nC. Only in 1 or 2 months\nFor (you/your household) in the last 12 months?" << endl;
cout << "\n";
do {
	cout << "Input A, B, C" << endl;
	cin >> ans_25b;//Allows users to input a,b,c
	cout << "\n";
} while (!cin.fail() && ans_25b != 'a' && ans_25b != 'b' && ans_25b != 'c' && ans_25b != 'A' && ans_25b != 'B' && ans_25b != 'C');//Loops to ensure users only input either a,b,c, or d
cout << "\n";
cout << "\n************************************************************************************************************************************************************************";
cout << "\n";
cout << "How many days did this happen in the last 30 days?";
bool valid1 = false;
while (!valid1)
{
	valid1 = true;
	cout << "\n";
	cin >> ans_25c;//Allows user to input an integer
	if (cin.fail() || ans_25c > 30)//Loops to ensure users only input integers from 1 to 30
	{
		cin.clear();
		cin.ignore();
		cout << "\n";
		cout << "Please enter a value from 1 to 30 only." << endl;
		valid1 = false;
	}
}
	}

	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	cout << endl << "26. In the last 30 days, how many days did you eat less than you felt you should because there wasn't enough money to buy food?" << endl;

	bool valid2 = false;
	while (!valid2)
	{
		valid2 = true;

		cin >> ans_26;//Allows user to input an integer
		if (cin.fail() || ans_26 > 30)//Loops to ensure users only input integers from 1 to 30
		{
			cin.clear();
			cin.ignore();
			cout << "\n";
			cout << "Please enter a value from 1 to 30 only." << endl;
			valid2 = false;
		}
	}

	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "27. In the last 12 months, since December of last year, were you ever hungry but didn't eat because you couldn't afford enough food?";
	cout << "\n";
	do {
		cout << "(Yes/No)" << endl;
		cin >> ans_27a;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_27a != "yes" && ans_27a != "no" && ans_27a != "Yes" && ans_27a != "No" && ans_27a != "YES" && ans_27a != "NO");//Loops to ensure users only input yes or no
	if (ans_27a == "yes" || ans_27a == "Yes" || ans_27a == "YES") {
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << "How often did it happen?:\nA. Almost every month\nB. Some months but not every month\nC. Only in 1 or 2 months\nFor (you/your household) in the last 12 months?" << endl;
		cout << "\n";
		do {
			cout << "Input A, B, C" << endl;
			cin >> ans_27b;//Allows users to input a,b,c
			cout << "\n";
		} while (!cin.fail() && ans_27b != 'a' && ans_27b != 'b' && ans_27b != 'c' && ans_27b != 'A' && ans_27b != 'B' && ans_27b != 'C');//Loops to ensure users only input a,b, or c
		do {
			cout << "\n************************************************************************************************************************************************************************";
			cout << "\n";
			cout << "Did this ever happen in the last 30 days? (Yes/No)" << endl;
			cin >> ans_27c;//Allows users to input a,b,c
			cout << "\n";
		} while (!cin.fail() && ans_27c != "yes" && ans_27c != "no"  && ans_27c != "Yes" && ans_27c != "No"  && ans_27c != "YES" && ans_27c != "NO");//Loops to ensure users only input a,b, or c

	}
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "28. In the last 30 days, how many days were you hungry but did not eat because you couldn't afford enough food?";
	cout << "\n";
	bool valid3 = false;
	while (!valid3)
	{
		valid3 = true;

		cin >> ans_28;//Allows users to input an integer
		if (cin.fail() || ans_28 > 30)//Loops to ensure users only input integers from 1 to 30
		{
			cin.clear();
			cin.ignore();
			cout << "\n";
			cout << "Please enter a value from 1 to 30 only." << endl;
			valid3 = false;
		}
	}

	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "29. In the last 12 months, did you lose weight because you didn't have enough money for food?";
	cout << "\n";
	do {
		cout << "(Yes/No)" << endl;
		cin >> ans_29a;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_29a != "yes" && ans_29a != "no" && ans_29a != "Yes" && ans_29a != "No" && ans_29a != "YES" && ans_29a != "NO");//Loops to ensure users only input yes or no
	if (ans_29a == "yes" || ans_29a == "Yes" || ans_29a == "YES"){ //If conditions are met, the following below will print 
		do {
			cout << "\n************************************************************************************************************************************************************************";
			cout << "\n";
			cout << "Did this ever happen in the last 30 days? (Yes/No)" << endl;
			cin >> ans_29b;//Allows users to input yes or no
			cout << "\n";
		} while (!cin.fail() && ans_29b != "yes" && ans_29b != "no" && ans_29b != "Yes" && ans_29b != "No" && ans_29b != "YES" && ans_29b != "NO");//Loops to ensure users only input yes or no
	}
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "30. In the last 12 months, since last December, did (you/you or other adults in your household) ever not eat for a whole day because there wasn't enough money for food?" << endl;
	do {
		cout << "(Yes/No)" << endl;
		cin >> ans_30a;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_30a != "yes" && ans_30a != "no" && ans_30a != "Yes" && ans_30a != "No" && ans_30a != "Yes" && ans_30a != "No");//Loops to ensure users only input yes or no
	if (ans_30a == "yes" || ans_30a == "Yes" || ans_30a == "YES"){ //If conditions are met, the following below will print 
		cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	cout << "How often did it happen?:\nA. Almost every month\nB. Some months but not every month\nC. Only in 1 or 2 months\nFor (you/your household) in the last 12 months?" << endl;
	cout << "\n";
	do {
		cout << "Input A, B, C" << endl;
		cin >> ans_30b;//Allows users to input a,b,c
		cout << "\n";
	} while (!cin.fail() && ans_30b != 'a' && ans_30b != 'b' && ans_30b != 'c' && ans_30b != 'A' && ans_30b != 'B' && ans_30b != 'C');//Loops to ensure users only input a,b, or c
	}
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "31. Now think about the last 30 days. During that time, did (you/you or other adults in your household) ever not eat for a whole day because there wasn't enough money for food?" << endl;
	cout << "\n";
	do {
		cout << "(Yes/No)" << endl;
		cin >> ans_31a;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_31a != "yes" && ans_31a != "no" && ans_31a != "Yes" && ans_31a != "No" && ans_31a != "YES" && ans_31a != "NO");//Loops to ensure users only input yes or no
	if (ans_31a == "yes" || ans_31a == "Yes" || ans_31a == "YES")//If conditions are met, the following below will print {
		cout << "\n";
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	cout << "How many days did this happen in the last 30 days?";
	bool valid4 = false;
	while (!valid4)
	{
		valid4 = true;

		cout << "\n";
		cin >> ans_31b;//Allows users to input an integer
		if (cin.fail() || ans_31b > 30)//Loops to ensure user inputs only integers from 1 to 30
		{
			cin.clear();
			cin.ignore();
			cout << "\n";
			cout << "Please enter a value from 1 to 30 only." << endl;
			valid4 = false;
		}
	}
	cout << "\n";
	cout << "The next questions are about(your child / children living in the household who are under 18 years old)." << endl;
	cout << "\n";
	cout << "\n";
	system("PAUSE");
	cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	//Made by Rollen Martija and Carlo Bautista
	cout << endl << "32. In the last 12 months, since December of last year, did you ever cut the size of (your child's/any of the children's) meals because there wasn't enough money for food?" << endl;
	cout << "\n";
	do {
		cout << "(Yes/No)" << endl;
		cin >> ans_32a;//Allows users to input yes or no
		cout << "\n";
	} while (!cin.fail() && ans_32a != "yes" && ans_32a != "no" && ans_32a != "Yes" && ans_32a != "No" && ans_32a != "YES" && ans_32a != "NO");//Loops to ensure users only input yes or no
	if (ans_32a == "yes" || ans_32a == "Yes" || ans_32a == "YES"){ //If conditions are met, the following below will print 
		cout << "\n************************************************************************************************************************************************************************";
	cout << "\n";
	cout << "How often did it happen?:\nA. Almost every month\nB. Some months but not every month\nC. Only in 1 or 2 months\nFor (you/your household) in the last 12 months?" << endl;
	cout << "\n";
	do {
		cout << "Input A, B, C" << endl;
		cin >> ans_32b;//Allows users to input a,b,c
		cout << "\n";
	} while (!cin.fail() && ans_32b != 'a' && ans_32b != 'b' && ans_32b != 'c' && ans_32b != 'A' && ans_32b != 'B' && ans_32b != 'C');//Loops to ensure users only input a,b, or c
	do {
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << "Did this ever happen in the last 30 days ? (Yes/No)" << endl;
		cin >> ans_32c;//Allows users to input yes or no
		cout << "\n";

	}

	while (!cin.fail() && ans_32c != "yes" && ans_32c != "no" && ans_32c != "Yes" && ans_32c != "No" && ans_32c != "YES" && ans_32c != "NO");//Loops to ensure users only input yes or no
		}
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		//Made by Rollen Martija and Carlo Bautista
		cout << endl << "33. In the last 30 days, how many days did you cut the size of (your child's/the children's) meals because there wasn't enough money for food?" << endl;

		bool valid5 = false;
		while (!valid5)
		{
			valid5 = true;

			cin >> ans_33;//Allows users to input an integer
			if (cin.fail() || ans_33 > 30)//Loops to ensure user inputs only integers from 1 to 30
			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter a value from 1 to 30 only." << endl;
				valid5 = false;
			}
		}
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		//Made by Rollen Martija and Carlo Bautista
		cout << endl << "34. In the last 12 months, (was your child/ were the children) ever hungry but you just couldn't afford more food?" << endl;
		cout << "\n";
		do {
			cout << "(Yes/No)" << endl;
			cin >> ans_34a;//Allows users to input yes or no
			cout << "\n";
		} while (!cin.fail() && ans_34a != "yes" && ans_34a != "no" && ans_34a != "Yes" && ans_34a != "No" && ans_34a != "Yes" && ans_34a != "No");//Loops to ensure users only input yes or no
		if (ans_34a == "yes" || ans_34a == "Yes" || ans_34a == "YES"){ //If conditions are met, the following below will print 
			cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << "How often did it happen?:\nA. Almost every month\nB. Some months but not every month\nC. Only in 1 or 2 months\nFor (you/your household) in the last 12 months?" << endl;
		cout << "\n";
		do {
			cout << "Input A, B, C" << endl;
			cin >> ans_34b;//Allows users to input a,b,c
			cout << "\n";
		} while (!cin.fail() && ans_34b != 'a' && ans_34b != 'b' && ans_34b != 'c' && ans_34b != 'A' && ans_34b != 'B' && ans_34b != 'C');//Loops to ensure users only input a,b, or c
		do {
			cout << "\n************************************************************************************************************************************************************************";
			cout << "\n";
			cout << "Did this ever happen in the last 30 days? (Yes/No)" << endl;
			cin >> ans_34c;//Allows users to input yes or no
			cout << "\n";
		} while (!cin.fail() && ans_34c != "yes" && ans_34c != "no" && ans_34c != "Yes" && ans_34c != "No" && ans_34c != "Yes" && ans_34c != "No");//Loops to ensure users only input yes or no
		}
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		//Made by Rollen Martija and Carlo Bautista
		cout << endl << "35. In the last 30 days, how many days (was your child/were the children) hungry but you just couldn't afford more food?" << endl;
		bool valid6 = false;
		while (!valid6)
		{
			valid6 = true;
			cin >> ans_35;//Allows users to input an integer
			if (cin.fail() || ans_35 > 30)//Loops to ensure user inputs only integers from 1 to 30
			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter a value from 1 to 30 only." << endl;
				valid6 = false;
			}
		}
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		//Made by Rollen Martija and Carlo Bautista
		cout << endl << "36. In the last 12 months, did (your child/any of the children) ever skip a meal because there wasn't enough money for food?" << endl;
		cout << "\n";
		do {
			cout << "(Yes/No)" << endl;
			cin >> ans_36a;//Allows users to input yes or no
			cout << "\n";
		} while (!cin.fail() && ans_36a != "yes" && ans_36a != "no" && ans_36a != "Yes" && ans_36a != "No" && ans_36a != "YES" && ans_36a != "NO");//Loops to ensure users only input yes or no
		if (ans_36a == "yes" || ans_36a == "Yes" || ans_36a == "YES"){//If conditions are met, the following below will print 
			cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << "How often did it happen?:\nA. Almost every month\nB. Some months but not every month\nC. Only in 1 or 2 months\nFor (you/your household) in the last 12 months?" << endl;
		cout << "\n";
		do {
			cout << "Input A, B, C" << endl;
			cin >> ans_36b;//Allows users to input a,b,c
			cout << "\n";
		} while (!cin.fail() && ans_36b != 'a' && ans_36b != 'b' && ans_36b != 'c' && ans_36b != 'A' && ans_36b != 'B' && ans_36b != 'C');//Loops to ensure users only input a,b, or c
		}
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		//Made by Rollen Martija and Carlo Bautista
		cout << endl << "37. Now think about the last 30 days. Did (your child/the children) ever skip a meal during that time because there wasn't enough money for food?" << endl;
		do {
			cout << "(Yes/No)" << endl;
			cin >> ans_37a;//Allows users to input yes or no

		} while (!cin.fail() && ans_37a != "yes" && ans_37a != "no" && ans_37a != "Yes" && ans_37a != "No" && ans_37a != "YES" && ans_37a != "NO");//Loops to ensure users only input yes or no
		if (ans_37a == "yes" || ans_37a == "Yes" || ans_37a == "YES")//If conditions are met, the following below will print {
			cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << endl << "How many days did this happen in the last 30 days?" << endl;

		bool valid7 = false;
		while (!valid7)
		{
			valid7 = true;

			cin >> ans_37b;//Allows users to input an integer
			if (cin.fail() || ans_37b > 30)//Loops to ensure user inputs only integers from 1 to 30
			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter a value from 1 to 30 only." << endl;
				valid7 = false;
			}
		}
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		//Made by Rollen Martija and Carlo Bautista
		cout << endl << "38. In the last 12 months, since December of last year, did (your child/any of the children) ever not eat for a whole day because there wasn't enough money for food?";
		cout << "\n";
		do {
			cout << "(Yes / No)" << endl;
			cin >> ans_38a;//Allows users to input yes or no
			cout << "\n";
		} while (!cin.fail() && ans_37a != "yes" && ans_37a != "no");//Loops to ensure users only input yes or no
		if (ans_38a == "yes" || ans_38a == "Yes" || ans_38a == "YES")//If conditions are met, the following below will print  {
			cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << endl << "How many days did this happen in the last 30 days?" << endl;
		bool valid8 = false;
		while (!valid8)
		{
			valid8 = true;
			cin >> ans_38b;//Allows users to input an integer
			if (cin.fail() || ans_38b > 30)//Loops to ensure user inputs only integers from 1 to 30
			{
				cin.clear();
				cin.ignore();
				cout << "\n";
				cout << "Please enter a value from 1 to 30 only.\n";
				valid8 = false;
			}
		}


		cout << "\n";
		cout << "\n";
		system("PAUSE");
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << "\n************************************************************************************************************************************************************************";
		string ans_39, ans_40, ans_41a, ans_41c, ans_43a, ans_43c, ans_42;//Initializes items for string
		cout << "\t\t\t\t\t\t\tV. WAYS OF COPING WITH NOT HAVING ENOUGH FOOD\n";
		cout << "\n";
		//Made by Rollen Martija and Zeth Arguelles
		cout << "39. During the past 30 days, did (you/anyone in the household) receive anymeals delivered to the home from community programs, Meals on Wheels, or any other programs?\n";
		cout << "\n";
		do
		{
			cout << "Please input Yes or No\n";
			cin >> ans_39;//Allows users to input yes or no
			cout << "\n";
		} while (!cin.fail() && ans_39 != "yes" && ans_39 != "no" && ans_39 != "YES" && ans_39 != "NO" && ans_39 != "Yes" && ans_39 != "No");//Loops to ensure users only input yes or no
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		//Made by Rollen Martija and Zeth Arguelles
		cout << "40. During the past 30 days, did (you/anyone in the household) go to a community program or senior center to eat prepared meals?\n";
		cout << "\n";
		do
		{
			cout << "Please input Yes or No\n";
			cin >> ans_40;//Allows users to input yes or no
			cout << "\n";
		} while (!cin.fail() && ans_40 != "yes" && ans_40 != "no" && ans_40 != "YES" && ans_40 != "NO" && ans_40 != "Yes" && ans_40 != "No");//Loops to ensure users only input yes or no
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		//Made by Rollen Martija and Zeth Arguelles
		cout << "41. In the last 12 months, did (you/you or other adults in your household) ever get emergency food from a church, a food pantry, or food bank?\n";
		cout << "\n";
		do
		{
			cout << "Please input Yes or No\n";
			cin >> ans_41a;//Allows users to input yes or no
			cout << "\n";
		} while (!cin.fail() && ans_41a != "yes" && ans_41a != "no" && ans_41a != "YES" && ans_41a != "NO" && ans_41a != "Yes" && ans_41a != "No");//Loops to ensure users only input yes or no
		if (ans_41a == "Yes" || ans_41a == "yes" || ans_41a == "Yes")//If conditions are met, the following below will print
		{
			char ans_41b;
			cout << "\n************************************************************************************************************************************************************************";
			cout << "\n";
			cout << "How often did this happen?\n";
			cout << "A. almost every month\n";
			cout << "B. some months but not every month\n";
			cout << "C. in only one or two months\n";
			cout << "\n";
			do
			{
				cout << "Please input A, B, C, D\n";
				cin >> ans_41b;//Allows users to input a,b,c,d
				cout << "\n";
			} while (!cin.fail() && ans_41b != 'a' && ans_41b != 'b' && ans_41b != 'c' && ans_41b != 'd' && ans_41b != 'A' && ans_41b != 'B' && ans_41b != 'C' && ans_41b != 'D');//Loops to ensure users only input a,b,c, or d
			cout << "\n************************************************************************************************************************************************************************";
			cout << "\n";
			cout << "Did this happen in the last 30 days?\n";
			cout << "\n";
			do
			{
				cout << "Please input Yes or No\n";
				cin >> ans_41c;//Allows users to input yes or no
				cout << "\n";
			} while (!cin.fail() && ans_41c != "yes" && ans_41c != "no" && ans_41c != "YES" && ans_41c != "NO" && ans_41c != "Yes" && ans_41c != "No");//Loops to ensure users only input yes or no


		}
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		//Made by Rollen Martija and Zeth Arguelles
		cout << "42. Is there a church, food pantry or food bank in your community where you could get emergency food if you needed it?\n";
		cout << "\n";
		do
		{
			cout << "Please input Yes or No\n";
			cin >> ans_42;//Allows users to input yes or no
			cout << "\n";
		} while (!cin.fail() && ans_42 != "yes" && ans_42 != "no" && ans_42 != "YES" && ans_42 != "NO" && ans_42 != "Yes" && ans_42 != "No");//Loops to ensure users only input yes or no
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		//Made by Rollen Martija and Zeth Arguelles
		cout << "43. In the last 12 months, did (you/you or other adults in your household) ever eat any meals at a soup kitchen?\n";
		cout << "\n";
		do
		{
			cout << "Please input Yes or No\n";
			cin >> ans_43a;//Allows users to input yes or no
			cout << "\n";
		} while (!cin.fail() && ans_43a != "yes" && ans_43a != "no" && ans_43a != "YES" && ans_43a != "NO" && ans_43a != "Yes" && ans_43a != "No");//Loops to ensure users only input yes or no
		if (ans_43a == "Yes" || ans_43a == "YES" || ans_43a == "yes")//If conditions are met, the following below will print
		{
			char ans_43b;
			cout << "\n************************************************************************************************************************************************************************";
			cout << "\n";
			cout << "How often did this happen?\n";
			cout << "A. almost every month\n";
			cout << "B. some months but not every month\n";
			cout << "C. in only one or two months\n";
			cout << "\n";
			do
			{
				cout << "Please input A, B, C, D\n";
				cin >> ans_43b;//Allows users to input a,b,c,d
				cout << "\n";
			} while (!cin.fail() && ans_43b != 'a' && ans_43b != 'b' && ans_43b != 'c' && ans_43b != 'd' && ans_43b != 'A' && ans_43b != 'B' && ans_43b != 'C' && ans_43b != 'D');//Loops to ensure users only input a,b,c, or d
			cout << "\n************************************************************************************************************************************************************************";
			cout << "\n";
			cout << "Did this happen in the last 30 days?";
			cout << "\n";
			do
			{
				cout << "\n";
				cout << "Please input Yes or No\n";
				cin >> ans_43c;//Allows users to input yes or no
				cout << "\n";
			} while (!cin.fail() && ans_43c != "yes" && ans_43c != "no" && ans_43c != "YES" && ans_43c != "NO" && ans_43c != "Yes" && ans_43c != "No");//Loops to ensure users only input yes or no
		}

		{

		}
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n";
		cout << "\n************************************************************************************************************************************************************************";
		cout << "\n\t\t\t\t\t\t\tVI. FINAL ANALYSIS";
		cout << "\n";
		//Made by Rollen Martija
		if ('yes' || 'YES' || 'Yes' < 3)
		{
			cout << "Food secure" << endl;
			cout << "\n";
			//(households that denied all items or affirmed 1 or 2 items)
			cout << "The government's strategic plan in delivering the food assistance" << endl
				 << "programs, to reduce the prevalence of food insecurity with hunger" << endl
				 << "among households is successful." << endl;
			cout << "Thank You for your time answering this survey. Have a nice day\n";

		}
		else if ('yes' || 'YES' || 'Yes' < 2 && 'yes' || 'YES' || 'Yes' > 6)
		{
			cout << "Food insecure without hunger" << endl;
			//(households that affirmed 3, 4, or 5 items)
			cout << "The government's strategic plan in delivering the food assistance " << endl
				<< "programs, to reduce the prevalence of food insecurity with hunger" << endl
				<< "among households must be continued and intensified." << endl;
			cout << "Thank You for your time answering this survey. Have a nice day\n";

		}

		else if ('yes' || 'YES' || 'Yes' <= 6)
		{
			cout << "Food insecure with hunger " << endl;
			//(households that affirmed 6 or more items)
			cout << "The government's strategic plan in delivering the food assistance " << endl
				<< "programs, to reduce the prevalence of food insecurity with hunger" << endl
				<< "among households has failed. It must be revised and intensified." << endl;
			cout << "Thank You for your time answering this survey. Have a nice day\n";


		}
		cout << "\n";
		system("Pause");
		cin.get();
		return 0;
			}

		
	



