#include <iostream>
/* Programmer:          Matthew Hagerman
   Date Due:            Thursday, February 5, 2026
   Project Number:      1
   Project Name:        Snow Removal Cost Summary
   Project Description: 
           This program will calculate the cost of snow removal using two
           different size trucks.  It will use volume, price and total loads
           needed to generate a Snow Removal Cost Summary.

*/


using namespace std;

int main(void)
{
	double lotLength, lotWidth, snowDepth;
	double smGasPrice, lgGasPrice, smHaulingPrice, lgHaulingPrice;
   double snowVolume, smVolume, lgVolume;
   double smGasCost, lgGasCost, smHaulingCost, lgHaulingCost;
   double smTotalCost, lgTotalCost;
   int smLength, smWidth, smHeight, lgLength, lgWidth, lgHeight, numSmLoads, numLgLoads;


	//Set Snowfall Lot Dimensions
		lotLength = 272; // feet
		lotWidth = 583; // feet
		snowDepth = 4.19; // feet

	//Set Truck Dimensions
		smLength = 10; // feet
		smWidth = 9; // feet
		smHeight = 6; // feet
		lgLength = 13; // feet
		lgWidth = 9; // feet
		lgHeight = 8; // feet

	//Set Gas Price
		smGasPrice = 11.20; // $
		lgGasPrice = 32.50; // $

	//Set Hauling Price
		smHaulingPrice = 38.50; //$
		lgHaulingPrice = 47.90; //$

	//Calculate Truck Volume
		smVolume = smLength * smWidth * smHeight * (1.00 + 1.0 / 3.0);   //This will show volume by
		lgVolume = lgLength * lgWidth * lgHeight * (1.00 + 1.0 / 5.0);	  //truck size	

	//Calculate Total Snow Accumulation in Lot
		snowVolume = lotWidth * lotLength * snowDepth;  //This will calculate the total amount
																		//of snow that the parking lot has

	//Calculate Number of Loads for each Truck
		numSmLoads = (int)(snowVolume / smVolume + 0.9);   //This will calculate the number of
		numLgLoads = (int)(snowVolume / lgVolume + 0.9);   //loads it will take each truck size
														  					//to clear the lot

	//Calculate Gas Cost
		smGasCost = numSmLoads * smGasPrice;			//This will calculate the total gas
		lgGasCost = numLgLoads * lgGasPrice;		   //cost for each size truck

	//Calculate Hauling Cost
		smHaulingCost = numSmLoads * smHaulingPrice;		//This will calculate the total
		lgHaulingCost = numLgLoads * lgHaulingPrice;		//Hauling price

	//Calculate Total Cost of Each Truck
		smTotalCost = smGasCost + smHaulingCost;			//This is the total cost of each truck
		lgTotalCost = lgGasCost + lgHaulingCost;

	//Display Snow Removal Cost Summary
	   cout << "Number of small loads: " << numSmLoads << endl;    //This is the Snow Removal
	   cout << "Number of large loads: " << numLgLoads << endl;	 //Cost Summary
	   cout << "Small Truck Cost: " << smTotalCost << endl;
	   cout << "Large Truck Cost: " << lgTotalCost << endl;
	
	return 0;
} //main