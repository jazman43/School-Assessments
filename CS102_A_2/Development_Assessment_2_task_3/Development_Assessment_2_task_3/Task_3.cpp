/*
development principles 1
assessment 2
task 3
jared evans
*/

#include <iostream>
#include <stdlib.h>
#include <random>

using namespace std;

int main() {

	int startNumber =10, endNumber =20, randomNumber, evenNumbers=0,oddNumbers=0;

	//srand(time(NULL));
	std::default_random_engine generator;


	for (int num = startNumber; num < endNumber; num++)
	{	
		
		uniform_int_distribution<int> distribution(startNumber, endNumber);
		randomNumber = distribution(generator);

		//randomNumber = rand() % 10 + 20;
		
		cout << randomNumber << " ,";
		if (randomNumber %2 == 0) {
			evenNumbers++;			
		}
		else
		{
			oddNumbers++;			
		}
	}
	cout << evenNumbers << endl;
	
	cout << oddNumbers << endl;
}