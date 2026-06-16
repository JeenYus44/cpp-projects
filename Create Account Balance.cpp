#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>


/* Programmer:          Matthew Hagerman
   Date Due:            Thursday, March 19, 2026
   Project Number:      7
   Project Name:        Create Account Balance Report
   Project Description: 
           This program will calculate a beginning balance
           from a set amount and, from a file, deduct an
           amount from the chosen file and display an
           ending balance to the user in a file.

*/

using namespace std;


int main(void) {
    char fileName[80];
    char custName[80];
    char street[80];
    char cityStateZip[80];
    char date[80];
    char itemDescription[80];               //Set variables for the given output
    char heading[80];
    double balance, amount;
    int numTrans;
    ifstream acctFile;
    ofstream summaryFile;
    

    //Get File Name
        cout << "Enter File Name: " << endl;
        cin.getline(fileName, 80);                  //Input the file that the program pulls from
                      
    //Get Customer Data
        acctFile.open(fileName);                    //Opens the fileName from which the data resides
        
    //Get File Heading
        acctFile.getline(heading, 80);
        strcpy(custName, heading);
        strcat(heading, ".txt");                    //This will pull the Customer Name and title
        summaryFile.open(heading);                  //the output file accordingly
        cout << heading << endl << custName << endl;
    //Get Customer Data    
        
        acctFile.getline(street, 80);
        acctFile.getline(cityStateZip, 80);         //This will begin to input the data from the
        acctFile >> balance;                        //input file and process it to the output file
        acctFile >> numTrans;
        acctFile.ignore(1000, '\n');

    //Display Report Heading        
        summaryFile << endl;
        summaryFile << endl;
        summaryFile << setw(54) << "Checking Account Summary" << endl;
        summaryFile << endl;
        summaryFile << left << setw(15) << "CUSTOMER: " << custName << endl;
        summaryFile << right << setw(29) << street << endl;                                   //This is the Customer information that 
        summaryFile << right << setw(32) << cityStateZip << endl;                             //will be displayed in the output file
        summaryFile << endl;
        summaryFile << left << setw(15) << "Beginning Balance: " << ' ' << balance << endl;
        summaryFile << endl;
        summaryFile << left << setw(30) << "Date" << setw(31) << "Description" << setw(16) << "Amount" << setw(11) << "Balance" << endl;
        
    //Process Transactions
        for (int cnt = 0; cnt < numTrans; cnt++){
            acctFile.getline(date, 80);
            acctFile.getline(itemDescription, 80);          //The loop that will calculate the transactions
            acctFile >> amount;
            acctFile.ignore(1000, '\n');
            
        //Update Balance
            balance = balance + amount;                     //Sets the balance to the new balance during the loop
                    
        //Display Transaction Summary
            summaryFile << fixed << setprecision(2);        //Displays the summary
            summaryFile << left << setw(30) << date << setw(30) << itemDescription << right << setw(7) << amount << setw(17) << balance << endl;
           
        }
        
        
        
    //Display Ending Balance
        summaryFile << endl;                //Displays the ending balance
        summaryFile << left << setw(60) << "Ending Balance: " << ' ' << balance << endl;
            
        
    acctFile.close();
    summaryFile.close();                    //closes the files
        
        
 return 0;       
}//main