/*
development principles 1
assessment 2
task 5
jared evans
*/

#include <iostream>

using namespace std;


int main() {	

	int userGuess; 

	int numberOfGuesses = 3; 

	cout << "Hello wellcome to my guess my number game please enter a number bewtween 1 to 10 you have " << numberOfGuesses << " attems: "; 
	cin >> userGuess; 

	int randomNumber; 

	srand(time(NULL));

	randomNumber = rand() % 10 + 1; 

	while (numberOfGuesses > 1 && userGuess != randomNumber)
	{
		numberOfGuesses--;

		cout << "sorry that was incorret please try agine you have " << numberOfGuesses << " remanding ";
		cin >> userGuess; 
	}

	if (userGuess == randomNumber)
	{
		cout << "congerates you win you guessed corret the number was " << randomNumber;
	}
	else {
		cout << "sorry you have guessed incorretly too meany times the corret number was " << randomNumber;
	}

	return 0;

}