/*
development principles 1
assessment 2
task 2
jared evans
*/



#include <iostream>



using namespace std;

//functions
void NumbersDivisibleBy7(int, int);
void FindPrimeNumbers(int, int);

int main() {

	int startingNum, endingNum, tempNum;
	
	
	cout << "enter a starting number: ";
	cin >> startingNum;
	cout << "enter a ending number: ";
	cin >> endingNum;

	cout << "\n";


	if (startingNum >= endingNum)
	{
		tempNum = startingNum;

		startingNum = endingNum;

		endingNum = tempNum;

	}


	cout << "numbers divisible by 7 from " << startingNum << " to " << endingNum << endl;
	cout << "*************************************\n";

	NumbersDivisibleBy7(startingNum, endingNum);
	

	cout << "\n";
	cout << "\n";
	cout << "prime Numbers\n";
	cout << "*************\n";

	cout << "Prime List between (" << startingNum << " and " << endingNum << ") :";

	
	FindPrimeNumbers(startingNum,endingNum);

	


	system("pause>0");
}


void NumbersDivisibleBy7(int startingNum, int endingNum) 
{
	
	for (int number = startingNum; number <= endingNum; number++)
	{

		if (number % 7 == 0)
		{
			cout << number << ", ";
		}

	}
}


void FindPrimeNumbers(int startingNum,int endingNum) {

	int primeNumberCount{};

	for (int i = startingNum; i <= endingNum; i++)
	{

		bool prime = true;

		for (int count = 2; count < i; count++)
		{

			if (i % count == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime)
		{
			cout << i << ", ";
			primeNumberCount++;
		}

	}

	cout << "\n" << "total number of prime numbers form (" << startingNum << " and " << endingNum << ")";
	cout << primeNumberCount << endl;
}