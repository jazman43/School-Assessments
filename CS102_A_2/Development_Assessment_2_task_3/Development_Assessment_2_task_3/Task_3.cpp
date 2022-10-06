/*
development principles 1
assessment 2
task 3
jared evans
*/

#include <iostream>



using namespace std;

int main() {

	//creating variables
	int startNumber{10}, endNumber{20}, randomNumber, evenNumbers{}, oddNumbers{};

	cout << "Random numbers between 10 to 20\n";
	cout << "\n*******************************\n";

	//creates a random seed	
	srand(time(NULL));

	//cycles between 6 times to display 6 random numbers between 10 and 20 
	for (int num = 0; num < 6; num++)
	{	
		//creates a random number and stores a random number 
		randomNumber = rand() % ((endNumber + 1) - startNumber) + startNumber;		

		//if the loop is on its last loop dont display the , and displayes the random numbers
		if (num >= 5) {	cout << randomNumber;}
		else{cout << randomNumber << ", ";}		  

		//adds the even numbers that are created randomly 
		if (randomNumber %2 == 0) {evenNumbers++;}
		else{oddNumbers++;}//<- adds the odd numbers that are created randomly 
	}
	//displayes all the even number added together
	cout << "\nNumber of even numbers in the list: " << evenNumbers << endl;
	//displayes all the even number added together
	cout << "Number of odd numbers in the list: " << oddNumbers << endl;

	system("pause>0");
}