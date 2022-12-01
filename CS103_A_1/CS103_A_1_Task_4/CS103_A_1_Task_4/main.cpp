#include <iostream>

using namespace std;


void BoardDisplay(int numberOfWrongAttempts) {
	if (numberOfWrongAttempts == 0)//if else statement to show different status of hangman.
	{
		cout << " -------|\n |      |\n |      O\n |     \\|/\n |      |\n |     / \\ " << endl << " |"<<endl<<" -----\n";
	}
	else if(numberOfWrongAttempts == 3)
	{
		cout << "YOU LOST!";		
	}
	
}

string randomWord() {

	srand(time(0));

	string word[6] = {
		"hello",
		"Yoobee",
		"engine",
		"Software",
		"Header",
		"Source"
	};

	string wordToGuess = word[rand() % 6];

	return wordToGuess;
}


	
int main()
{	
	
	string wordToGuess = randomWord();
	string blankString;

	int letterCount;
	int counter = 0;
	
	bool gameState = true;

	letterCount = wordToGuess.size();
	
	for (int i = 0; i < letterCount; i++)
	{
		blankString += "-";
	}
	 
	letterCount + 1;
	//character input from user

	char userGuess;

	// dummuy array to keep track of the element in word
	

	int numberOfWrongAttempts = 0;
	
	BoardDisplay(numberOfWrongAttempts);

	while (gameState)
	{		
		

		cout << "\n Word you need to Guess: " << blankString << endl;

		cout << " Enter letter to guess: ";

		cin >> userGuess;

		cout << "\n You entered:" << userGuess << "\n\n";

		for (int i = 0; i < letterCount; i++) {

			bool userInputCheck = userGuess == wordToGuess.at(i);
			counter++;
			if (userInputCheck) {
				char letter = wordToGuess[i];
				blankString[i] = letter;
								
			}			

			if (wordToGuess == blankString) {
				cout << "You Have Guess correct YAY!!!\n\n";
				cout << "    O\n   \\|/\n    |\n    /\\"<<endl;
				gameState = false;
				break;
			}
			if (counter == letterCount) {
				
				if (userGuess != wordToGuess[i])
				{
					
					numberOfWrongAttempts++;
					BoardDisplay(numberOfWrongAttempts);

					cout << "sorry you guess wrong try again\n\n";
				}
			}
		}
		
		
	}

	cout << "\n\n";
	system("pause>0");
	return 0;

}