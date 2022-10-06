/*
development principles 1
assessment 2
task 5
jared evans
*/

#include <iostream>

using namespace std;


int main() {	
	//creating variables
	int userGuess; 
	int randomNumber;
	int numberOfGuesses = 3; 

	//prompting user with info and storing there first attempt
	cout << " Hello wellcome to my guess my number game\n\n Please enter a number bewtween 1 and 10 you have " << numberOfGuesses << " attempts: "; 
	cin >> userGuess; 
	
	//ramdom seed and storying it in a variable to guess; 
	srand(time(NULL));

	randomNumber = rand() % 10 + 1; 

	//loop 2 times or untill user guesses correctly
	while (numberOfGuesses > 1 && userGuess != randomNumber)
	{
		--numberOfGuesses;
		//lets the user know that they guessed wrong and let them guess again if they have guesses left
		cout << "\nsorry that was incorrect please try again you have: " << numberOfGuesses << " attempts remaining: ";
		cin >> userGuess; 
	}

	//Checks win or lose condition
	if (userGuess == randomNumber)
	{
		//displayes if user's guess was correct
		cout << "\ncongratulations you win you guessed the correct number: " << randomNumber;
	}
	else {
		//displayes if user runs out of guesses
		cout << "\nsorry you have guessed incorrectly too meany times the correct number was: " << randomNumber;
	}

	
	system("pause>0");
}