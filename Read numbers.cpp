#include <iostream>
/* Programmer:          Matthew Hagerman
   Date Due:            Thursday, January 29, 2026
   Project Number:      0
   Project Name:        EX1
   Project Description: 
           This program will read three numbers in from the keyboard,
           run them through several formulas to generate results, and
           then print them to the screen.
 
           NOTE:    Your Programs WILL have a section like this!
 */
using namespace std;

int main(void) {
    int number1, number2, number3;
    int answer1, answer2, answer3;
    char strvar(5);
    
    //Introduction
    cout << "This program is to be used to illustrate various statemnts"
        << endl;
    cout << "in the C++ programming language.  It will show basic" << endl;
    cout << "input/output operations, formulas and the general form of a"
        << endl;
    cout << "C++ program. " << endl << endl;
    cout << "The actual purpose of this program is to read three numbers"
        << endl;
    cout << "in from the keyboard, run them through several formulas to"
        << endl;
    cout << "generate results, and then print them to the screen." << endl;
    cout << endl; 
    cout << "Press the <ENTER> key to continue. " <<end1;
    cin.getline(strvar, 5);  // Pauses = we don not care about loading strvar
    cout << endl;
    cout << endl;
     
     // Data Entry
    cout << "Enter three integers now (press <ENTER> after each): ";
    cin >> number1;
    cin >> number2;              // Read each number into the memory 
    cin >> number3;
     
     // Redisplay Data
    cout << "Number 1 = ";      // Redisplay data entered so that the user
    cout << number1 << endl;    // can see any data entry errors that they
    cout << endl;               //may have entered.
    cout << "Number 2 = ";      
    cout << number2 << endl << endl;
    cout << "Number 3 = ";      
    cout << number3;
    cout << endl << endl;
     
     //Compute Ansers
     answer1 = number3 - number2 + number1;
     answer2 = number3 - (number2 + number1);
     answer3 = number3 * (number2 + number1);
     
     // Display Results
     cout << "Number 3 - Number 2 + Number 1 = ";           // Shows the
     cout << answer1 << endl;                               // results of the
     cout << endl;                                          // calculations
     cout << "Number 3 - (Number 2 + Number1) = " << answer2 << enl;
     cout << endl << "Number 3 * (Number 2 + Number 1) = ";
     cout << answer3 << endl;
     cout << endl;
    
    return 0;
} // main

