/*
development principles 1
assessment 2
task 2
jared evans
*/

#include <iostream>



using namespace std;

//functions protypes
void NumbersDivisibleBy7(int, int);
void FindPrimeNumbers(int, int);

int main() {

	//creating vereaibles
	int startingNum, endingNum, tempNum;
	
	//promting user and storing vereaibles
	cout << "enter a starting number: ";
	cin >> startingNum;
	cout << "enter a ending number: ";
	cin >> endingNum;

	cout << "\n";

	//makeing sure that starting number is always smaller
	if (startingNum >= endingNum)
	{
		tempNum = startingNum;

		startingNum = endingNum;

		endingNum = tempNum;
	}

	//providing visual info to user
	cout << "numbers divisible by 7 from " << startingNum << " to " << endingNum << endl;
	cout << "*************************************\n";
	//a function that divides the numbers by 7 and displays them
	NumbersDivisibleBy7(startingNum, endingNum);	

	// displays more visual info to user
	cout << "\n";
	cout << "\n";
	cout << "prime Numbers\n";
	cout << "*************\n";

	cout << "Prime List between (" << startingNum << " and " << endingNum << ") :";
	//a function that finds prime Numbers and displays them and total amount of prime numbers
	FindPrimeNumbers(startingNum,endingNum);	


	system("pause>0");
}


void NumbersDivisibleBy7(int startingNum, int endingNum) 
{
	//Cycle through all numbers in between the users starting number and ending number
	for (int number = startingNum; number <= endingNum; number++)
	{
		//then checks if it can be divided by 7 and displays that number
		if (number % 7 == 0)
		{
			if (number >= endingNum -1)	{ cout << number; }
			else{ cout << number << ", "; }
			
		}
	}
}


void FindPrimeNumbers(int startingNum,int endingNum) {

	int primeNumberCount{};
	//Cycle through all numbers in between the users starting number and ending number
	for (int i = startingNum; i <= endingNum; i++)
	{
		bool prime = true;
		//starting at 2 we cycle through the numbers a second time
		for (int count = 2; count < i; count++)
		{
			/*Check if they are a prime if not a bool vereaible is 
			set to false then we break out and try agin */
			if (i % count == 0)
			{
				prime = false;
				break;
			}
		}
		//if true then we print out the prime number and add them togeter
		if (prime)
		{			
			cout << i << ", ";
			primeNumberCount++;
		}
	}
	
	cout << "\n" << "total number of prime numbers form (" << startingNum << " and " << endingNum << "): ";
	//and we print the total amount of prime numbers
	cout << primeNumberCount << endl;
}