/*
Task 4
jared evans
CS103 assessment 1
*/


#include <iostream>

using namespace std;

//function to show hang man in start and lost condions
void BoardDisplay(int numberOfWrongAttempts) {
	if (numberOfWrongAttempts == 0)//if else statement to show different status of hangman.
	{
		cout << " -------|\n |      |\n |      O\n |     \\|/\n |      |\n |     / \\ " << endl << " |"<<endl<<" -----\n";
	}
	else if(numberOfWrongAttempts == 3)
	{
		cout <<" ------ - | \n |      |\n |     /|\\\n |      |\n |      |\n |     /O\\ " << endl << " | "<<endl << " -----\n";
		cout << "\tYOU LOST!\n";
		
	}
	
}
//a string function to randomize the words with an array
string randomWord() {

	srand(time(0));

	string word[6] = {
		"hello",
		"yoobee",
		"engine",
		"software",
		"header",
		"source"
	};

	string wordToGuess = word[rand() % 6];

	return wordToGuess;
}


	
int main()
{	
	//verabiles
	string wordToGuess = randomWord();
	string blankString;

	int letterCount;	
	
	bool gameState = true;
	bool isInCorrect = false;
	bool letterChecked = false;

	char userGuess;

	int numberOfWrongAttempts = 0;

	letterCount = wordToGuess.size();
	
	//creating a blank string the size of the word to guess
	for (int i = 0; i < letterCount; i++)
	{
		blankString += "-";
	}
	 
	letterCount + 1;
	//character input from user	
	
	// display frist hangman
	BoardDisplay(numberOfWrongAttempts);

	while (gameState)
	{		
		//displays blank string and updates if user guests a letter correctly
		cout << "\n Word you need to Guess: " << blankString << endl;
		//promts for user input
		cout << " Enter letter to guess: ";
		//gets user input
		cin >> userGuess;

		cout << "\n You entered:" << userGuess << "\n\n";

		letterChecked = false;
		//goes thourh every letter in word
		for (int i = 0; i < letterCount; i++) {
			//checks if user inputed correct letter
			bool userInputCheck = userGuess == wordToGuess.at(i);
			
			if (userInputCheck) {
				//updates blank letter if correct letter was inputed
				char letter = wordToGuess[i];
				blankString[i] = letter;		
				isInCorrect = false;
				letterChecked = true;
			}
			else if(!letterChecked)
			{
				isInCorrect = true;
			}
			//when blank string is the same as the word to guess then you win
			if (wordToGuess == blankString) {
				cout << "You Have Guess correct YAY!!!\n\n";
				cout << "    O\n   \\|/\n    |\n    /\\" << endl;
				gameState = false;
				isInCorrect = false;
				break;
			}

			
			
		}
		//only runs if user input did not match any of the word letter
		if (isInCorrect) {
			numberOfWrongAttempts++;
			BoardDisplay(numberOfWrongAttempts);
			cout << "sorry you guess wrong try again\n\n";
			//ends the game
			if (numberOfWrongAttempts == 3) {

				gameState = false;
			}
		}
			
	}

	cout << "\n\n";
	system("pause>0");
	return 0;

}