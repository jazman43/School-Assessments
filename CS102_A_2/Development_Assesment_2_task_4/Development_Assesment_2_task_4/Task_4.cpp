/*
development principles 1
assessment 2
task 4
jared evans
*/

#include<iostream>

using namespace std;

int main(){
	int unitsConsumed, totalAmount,customerNumber;
	string customerName;

	cout << "enter custormer Name: ";
	cin >> customerName;
	cout << "enter custoumer Number: ";
	cin >> customerNumber;
	cout << "enter consumed units :";
	cin >> unitsConsumed;


	if (unitsConsumed >= 301)
	{
		totalAmount = (unitsConsumed - 300) * 1 + (100 * 0.80) + (100 * 0.50) + 100 * 0.30;
	}
	else if(unitsConsumed >= 201 && unitsConsumed <= 300)
	{
		totalAmount = (unitsConsumed - 200) * 0.80 + (100 * 0.50) + 100 * 0.30;
	}
	else if (unitsConsumed >= 101 && unitsConsumed <= 200)
	{
		totalAmount = (unitsConsumed - 100) * 0.50 + (100 * 0.30);
	}
	else if (unitsConsumed <= 100)
	{
		totalAmount = unitsConsumed * 0.30;
	}


	cout <<endl<< totalAmount;

	system("pause>0");
}