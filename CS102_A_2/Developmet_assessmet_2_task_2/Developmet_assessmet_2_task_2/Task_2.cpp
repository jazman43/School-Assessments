/*
development principles 1
assessment 2
task 2
jared evans
*/





#include <iostream>



using namespace std;

int main() {

	int startingNum, endingNum, tempNum, divisble = 0,number , primeNumberCount = 0;
	
	
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


	for (number = startingNum; number <= endingNum; number++)
	{

		if (number % 7 == 0)
		{

			divisble = number;

			cout << divisble << ", ";
		}

	}

	cout << "\n";
	cout << "\n";
	cout << "prime Numbers\n";
	cout << "*************\n";

	cout << "Prime List between (" << startingNum << " and " << endingNum << ") :";

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


	system("pause>0");
}