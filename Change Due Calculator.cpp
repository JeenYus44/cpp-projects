#include <iostream>

/* Programmer:          Matthew Hagerman
   Date Due:            Thursday, February 19, 2026
   Project Number:      3
   Project Name:        Generate Change Summary
   Project Description: 
           This program will calculate the change due when someone
           purchases a product at a given price.

*/

using namespace std;

int main(void) 
{
	double amntDue, amntPaid; 
	int num20s, num10s, num5s, num1s, numQuarters; 
	int numDimes, numNickles, numPennies, chngInCents;   //Sets all variables
	int remChngInCents;

//Get Amount Due
		cout << "Enter the amount due: $";       //Allows for input of dollar amount due
		cin >> amntDue;

//Get Amount Paid
		cout << "Enter the amount paid: $";      //Allows for input of dollar amount paid
		cin >> amntPaid;

//Calculate Change Due
	// Get Bills
		chngInCents = (int) (amntPaid * 100) - (amntDue * 100) + (0 + 0.5);
		num20s = chngInCents / 2000;
		remChngInCents = chngInCents % 2000;                           //Calculations on number of
		num10s = remChngInCents / 1000;											//bills and coins to dispense
		remChngInCents = remChngInCents % 1000;
		num5s = remChngInCents / 500;
		remChngInCents = remChngInCents % 500;
		num1s = remChngInCents / 100;
		remChngInCents = remChngInCents % 100;
	//Get Coins
		numQuarters = remChngInCents / 25;
		remChngInCents = remChngInCents % 25;
		numDimes = remChngInCents / 10;
		remChngInCents = remChngInCents % 10;
		numNickles = remChngInCents / 5;
		remChngInCents = remChngInCents % 5;
		numPennies = remChngInCents;

//Display Amount Due
		cout << "Amount Due; " << amntDue;							   //Displays text and takes in value
      cout << "  " << endl;

//Display Amount Paid
		cout << "Amount Paid; " << amntPaid;						   //Displays text and takes in value
      cout << "  " << endl;

//Display Change Due
		cout << "Change Due; " << chngInCents / 100.0;				//Displays the Change due to customer

//Display Change Summary
		cout << "  " << endl;
      cout << "Give the following bills; " << endl;		      //Tells cashier how many of what bills
		cout << num20s << " -$20 bill(s);" << endl;					//and coins are needed to dispense the
		cout << num10s << " -$10 bill(s);" << endl;					//correct change amount.
		cout << num5s << " -$5 bill(s);" << endl;
		cout << num1s << " -$1 bill(s);" << endl;
		cout << "Give the following coins; " << endl;
		cout << numQuarters << " -Quarter(s);" << endl;
		cout << numDimes << " -Dimes(s);" << endl;
		cout << numNickles << " -Nickel(s);" << endl;
		cout << numPennies << " -Penny(s);" << endl;





return 0;
} //main