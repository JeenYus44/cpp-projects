#include <iostream>
#include <iomanip>

/* Programmer:          Matthew Hagerman
   Date Due:            Thursday, March 5, 2026
   Project Number:      5
   Project Name:        Mid-Term Grade Calculator
   Project Description: 
           This program will calculate the mid-term grade of
           a student.  Grades are input and the program
           calculates the averages of homework, lab and 
           quiz assignments to give a mid-term grade

*/

using namespace std;

const int LABEL_W = 30;
const int VALUE_W = 20;

int main(void)
{
   char studentName[80];
   char streetAddress[80];
   char cityStateZip[80];
   double homeWork1, homeWork2, lab1, lab2, lab3, lab4, quiz1, quiz2;
   double homeWorkWeight, labWeight, quizWeight, examWeight;
   double examPercent, finalExam, hwAvg, labAvg, quizAvg, midTermAvg;
   
   //Get Student Personal Data
   cout << "Enter Student Name: ";
   cin.getline (studentName, 80);
   cout << "Enter Street Address: ";            //Input of student data regarding 
   cin.getline (streetAddress, 80);             //Name and location
   cout << "Enter City, State, Zip: ";
   cin.getline (cityStateZip, 80);
   cout << endl;
   cout << endl;
   
   //Get Student Grade Data
   cout << "Enter Homework Grade 1: ";
   cin >> homeWork1;
   cout << "Enter Homework Grade 2: ";
   cin >> homeWork2;
   cout << "Enter Lab Grade 1: ";                //This section is where the grades are input
   cin >> lab1;                                  //for homework, labs, quizes and the final exam
   cout << "Enter Lab Grade 2: ";
   cin >> lab2;
   cout << "Enter Lab Grade 3: ";
   cin >> lab3;
   cout << "Enter Lab Grade 4: ";
   cin >> lab4;
   cout << "Enter Quiz Grade 1: ";
   cin >> quiz1;
   cout << "Enter Quiz Grade 2: ";
   cin >> quiz2;
   cout << "Enter Exam Grade: ";
   cin >> finalExam;
   cout << endl;
   cout << endl;
   
   
   
   
   //Set Grade Weight
   homeWorkWeight = 0.133 * 100;
   labWeight = 0.40 * 100;                         //This is the weight of each assignment
   quizWeight = 0.133 * 100;                 
   examWeight = 0.334 * 100; 

   //Calculate Exam Percentage
   examPercent = (finalExam / 76) * 100;           //Calculates the exam percentage
   
   //Calculate Averages
   hwAvg = (homeWork1 + homeWork2) / 2.0;          //Calculates Averages for homework, lab,
   labAvg = (lab1 + lab2 + lab3 + lab4) / 4.0;     //quizes and the final exam 
   quizAvg = (quiz1 + quiz2) / 2.0;
   midTermAvg = (hwAvg * homeWorkWeight) + (labAvg * labWeight) + (quizAvg * quizWeight) + (examPercent * examWeight) / 4.0;
   
   
   
   
   //Display MidTerm Grade Report
   cout << fixed << setprecision(2);
   
   

   cout << setw(38) << " Jefferson Community College " << endl;
   cout << setw(41) << " CIS-116 - Introductory Programming " << endl;
   
   
   
   cout << left << setw(LABEL_W) << "Student Name: " << right << setw(VALUE_W) << studentName << endl;
   cout << left << setw(LABEL_W) << "Street Address: " << right << setw(VALUE_W) << streetAddress << endl;
   cout << left << setw(LABEL_W) << "City, State  Zip: " << right << setw(VALUE_W) << cityStateZip << endl;



   cout << setw(32) << "Homework Grades: " << endl;
   cout << left << setw(LABEL_W) << "Homework Grade 1: " << right << setw(VALUE_W) << homeWork1 << endl;
   cout << left << setw(LABEL_W) << "Homework Grade 2: " << right << setw(VALUE_W) << homeWork2 << endl;


   cout << setw(31) << "Lab Grades: " << endl;
   cout << left << setw(LABEL_W) << "Lab Grade 1: " << right << setw(VALUE_W) << lab1 << endl;
   cout << left << setw(LABEL_W) << "Lab Grade 2: " << right << setw(VALUE_W) << lab2 << endl;                    //This will display student information,
   cout << left << setw(LABEL_W) << "Lab Grade 3: " << right << setw(VALUE_W) << lab3 << endl;                    //college name, course attending, grades, 
   cout << left << setw(LABEL_W) << "Lab Grade 4: " << right << setw(VALUE_W) << lab4 << endl;                    //and averages for homework, labs, quizes
                                                                                                                  //and exam.

   cout << setw(31) << "Quiz Grades: " << endl;
   cout << left << setw(LABEL_W) << "Quiz Grade 1: " << right << setw(VALUE_W) << quiz1 << endl;
   cout << left << setw(LABEL_W) << "Quiz Grade 2: " << right << setw(VALUE_W) << quiz2 << endl;


   cout << setw(31) << "Exam Grade: " << endl;
   cout << left << setw(LABEL_W) << "Exam Grade: " << right << setw(VALUE_W) << finalExam << endl;


   cout << setw(30) << "Averages: " << endl;
   cout << left << setw(LABEL_W) << "Homework Average: " << right << setw(VALUE_W) << hwAvg << endl;
   cout << left << setw(LABEL_W) << "Lav Average: " << right << setw(VALUE_W) << labAvg << endl;
   cout << left << setw(LABEL_W) << "Quiz Average: " << right << setw(VALUE_W) << quizAvg << endl;


   cout << left << setw(LABEL_W) << "Exam Percentage: " << right << setw(VALUE_W) << examPercent << endl;

   
   return 0;
}//main