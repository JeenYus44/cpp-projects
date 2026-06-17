#include <iostream>
#include <iomanip>

/* Programmer:          Matthew Hagerman
   Date Due:            Thursday, February 26, 2026
   Project Number:      4
   Project Name:        Generate Order Summary
   Project Description: 
           This program will calculate the total cost of quantity
           of lathes and shipping.  Will also calculate how many
           trucks are necessary to ship them.

*/

using namespace std;

int main(void) 
{
   char streetAddress[80];
   char customerName[80];
   char cityStateZip[80];
   int smWidth, smLength, smHeight, lgWidth, lgLength, lgHeight; 
   int lgTruckCapacity, smTruckCapacity;
   int latheWidth, latheLength, latheHeight, remainingCapacity; 
   int numLargeTrucks, numSmallTrucks, quantityOrdered, remainingQuantity;
   float lathePrice, smShippingPrice, lgShippingPrice;
   float lgTruckCost, smTruckCost, prodCost, totalCost;

   //Customer Data
      cout << "Enter Name: ";
      cin.getline(customerName, 80);
      cout << "Enter Street Address: ";           //Customer Data Input
      cin.getline(streetAddress, 80);
      cout << "Enter City, State, Zip: ";
      cin.getline(cityStateZip, 80);
      cout << "Enter number of lathes: ";
      cin >> quantityOrdered;

   //Truck Dimensions
      smWidth = 7; //feet
      smLength = 12; //feet
      smHeight = 10; //feet                              //Sets the Truck Dimensions for
      lgWidth = 8; //feet                                //Large and Small Trucks
      lgLength = 24; //feet
      lgHeight = 13; //feet

   //Lathe Dimensions
      latheWidth = 19; //inches
      latheLength = 49; //inches                         //Sets Lathe Dimensions
      latheHeight = 11; //inches

   //Prices
      lathePrice = 979.54; //$
      smShippingPrice = 265.54; //$                      //Sets Prices
      lgShippingPrice = 329.93; //$

   //Capacity of Trucks
      smTruckCapacity = (int) (smWidth / (latheWidth / 12.0)) * (int) (smLength / (latheLength / 12.0)) * (int) (smHeight / (latheHeight / 12.0));      //Calculates how much space
      lgTruckCapacity = (int) (lgWidth / (latheWidth / 12.0)) * (int) (lgLength / (latheLength / 12.0)) * (int) (lgHeight / (latheHeight / 12.0));      //one lathe will take up in the truck

   //Number of Trucks
      numLargeTrucks = (int) (quantityOrdered / lgTruckCapacity);
      remainingQuantity = quantityOrdered % lgTruckCapacity;                                   //Calculates how many trucks are needed
      numSmallTrucks = (int) (remainingQuantity + smTruckCapacity) / (smTruckCapacity + 0.9);  //to haul the quantity specified
      

   //Cost
      lgTruckCost = numLargeTrucks * lgShippingPrice;
      smTruckCost = numSmallTrucks * smShippingPrice;                   //Calculates the overall cost of shipping
      prodCost = quantityOrdered * lathePrice;                          //and total lathe cost
      totalCost = lgTruckCost + smTruckCost + prodCost;

   //Display Order Summary
      
      const int LABEL_W = 26;
      const int VALUE_W = 15;
      cout << "---------------------Order Summary---------------------\n";
      cout << left << setw(LABEL_W) <<"Customer Name: " << right << setw(VALUE_W) << customerName << endl;
      cout << left << setw(LABEL_W) <<"Address: " << right << setw(19) << streetAddress << endl;
      cout << left << setw(LABEL_W) <<"City, State  Zip: "<< right << setw(22) << cityStateZip << endl;
      cout << left << setw(LABEL_W) <<"Quantity Ordered: " << right << setw(5) << quantityOrdered << endl;
      cout << left << setw(LABEL_W) <<"Number of Large Trucks: " << right << setw(3) << numLargeTrucks << endl;
      cout << left << setw(LABEL_W) <<"Number of Small Trucks: " << right << setw(3) << numSmallTrucks << endl;
      cout << fixed << setprecision(2);
      cout << left << setw(LABEL_W) <<"Lathe Price: " << right << setw(3) << "$" << lathePrice << endl;
      cout << left << setw(LABEL_W) <<"Number of Lathes: " << right << setw(5) << quantityOrdered << endl;
      cout << left << setw(LABEL_W) <<"Lathe Cost: " << right << setw(3) << "$" << prodCost << endl;
      cout << left << setw(LABEL_W) <<"Large Truck Cost: " << right << setw(3) << "$" << lgTruckCost << endl;
      cout << left << setw(LABEL_W) <<"Small Truck Cost: " << right << setw(3) << "$" << smTruckCost << endl;
      cout << left << setw(LABEL_W) <<"Total Cost: " << right << setw(3) << "$" << totalCost << endl;
      
      
      return 0;
}//main

