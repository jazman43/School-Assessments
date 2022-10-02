/*
development principles 1
assessment 2
task 4
jared evans
*/

#include<iostream>

using namespace std;

int main(){

	//creating variables
	float unitsConsumed,
		totalAmount,		
		lowPricePerUnit{.30f},
		lowMidPricePerUnit{.50f},
		heighMidPricePerUnit{.80f},
		topPricePerUnit{1.f};

	int customerNumber;
	string customerName;

	//displaying title
	cout << "Auckland Power - Customer Bill Generator\n";
	cout << "\n****************************************\n";

	//promting user for input and storing that input
	cout << "\nenter custormer Name: ";
	cin >> customerName;
	cout << "enter custoumer Number: ";
	cin >> customerNumber;
	cout << "enter consumed units :";
	cin >> unitsConsumed  ;

	//Begin to display the bill
	cout << "\n";
	cout << "\nAuckland Power - Customer Bill\n";
	cout << "******************************\n";

	//checking units of power consumed to make appropriate priceing calculation 
	if (unitsConsumed >= 301)
	{
		//calculate amount to be charge if power consumed is 301 and greater
		totalAmount = (unitsConsumed - 300) * topPricePerUnit + 
			(100 * heighMidPricePerUnit) + 
			(100 * lowMidPricePerUnit) + 
			100 * lowPricePerUnit;
	}
	else if(unitsConsumed >= 201 && unitsConsumed <= 300)
	{
		//calculate amount to be charge if power consumed is between 300 and 201
		totalAmount = (unitsConsumed - 200) * heighMidPricePerUnit +
			(100 * lowMidPricePerUnit) + 
			100 * lowPricePerUnit;
	}
	else if (unitsConsumed >= 101 && unitsConsumed <= 200)
	{
		//calculate amount to be charge if power consumed is between 200 and 101
		totalAmount = (unitsConsumed - 100) * lowMidPricePerUnit + 
			(100 * lowPricePerUnit);
	}
	else if (unitsConsumed <= 100)
	{
		//calculate amount to be charge if power consumed is less then 100
		totalAmount = unitsConsumed * lowPricePerUnit;
	}

	//displaying custormer info 
	cout << "\nCustormer Name : " << customerName << endl;
	cout << "\nCustormer Number : " << customerNumber << endl;
	cout << "\nUnits Consumed : " << unitsConsumed << endl;


	//display amount to pay
	cout << "\nAmount : " << totalAmount << endl;
	cout << "\n**************************";

	system("pause>0");
}