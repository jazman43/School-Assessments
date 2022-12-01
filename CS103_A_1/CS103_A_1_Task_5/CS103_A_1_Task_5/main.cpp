/*
Task 5
Jared Evans
CS103 Assesment 1
*/


#include <iostream>
#include <iomanip>

using namespace std;

//Creating functions
void SquareTriangle();
void Rectangle(int width, int height);
int calculateScore(int score);



int main() {

	//varables
	int menuChoie;
	int totalScore = 0;
	int *totalScorePtr = &totalScore;
	int width = 15, heigth = 5;

	//for randomizing rand()%
	srand(time(0));

	//Title
	cout << "\n\tWelcome to Identify the Shapes\n";
	//main gane loop
	do
	{		
		//menu output display
		cout << "\tMenu\n\n 0=>.PLAY\n 1=>.Final Score\n 2=>.Exit\n\n";
		//menu user input
		cin >> menuChoie;


		//random number to pick what will display
		int randomNumber = rand() % 2;	

		

		switch (menuChoie)
		{
		case 0:
			//play game

			if (randomNumber == 1) {
				//Display rectangle
				Rectangle(width, heigth);
			}
			else
			{
				//display Square or Triagle
				SquareTriangle();

			}
			
			
			break;
		case 1:
			//show final Score
			//one bug known score will increse event if user got i wrong
			*totalScorePtr = calculateScore(totalScore);
			cout << "\n\n****Total Score: " << *totalScorePtr << endl;
			break;
		default:
			cout << "Invaled opcion";
			break;
		}
		
		
	} while (menuChoie != 2);

	
	return 0;
}


//Defineing functions
void SquareTriangle() {

	//verables
	int randomSquareNumber = rand()%2;
	int squareChoice;
	int pointsToAdd = 10;

	//to randomlly pick squre or triangle to display
	if (randomSquareNumber == 1) {

		//nested for loop to darw a square 5 by 5
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << setw(2) << "O";
			}
			cout << endl;
		}

		//displays to user askes what shape is displaying
		cout << "\tPick What Shape you think this is:\n\n 0.Rectangle\n 1.Square\n 2.Triangle\n 3.None of the above\n";
		//takes user input
		cin >> squareChoice;
		//checks to see if user got it correct
		if (squareChoice == 1) {
			calculateScore(pointsToAdd);
			cout << "\nYAY THATS Correct\n";
		}
		else
		{
			cout << "\nSorry Incorrect Try again\n";
		}
	}
	else
	{
		//nested for loops to draw the triangle
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < i; j++) {
				cout << setw(2) << "O";
			}
			cout << endl;
		}
		//displays to user askes what shape is displaying
		cout << "\tPick What Shape you think this is:\n\n 0.Rectangle\n 1.Square\n 2.Triangle\n 3.None of the above\n";
		
		//takes user input
		cin >> squareChoice;
		//checks to see if user got it correct
		if (squareChoice == 2) {
			calculateScore(pointsToAdd);
			cout << "\nYAY THATS Correct\n";
		}
		else
		{
			cout << "\nSorry Incorrect Try again\n";
		}
	}



}

void Rectangle(int width, int height) {

	//verables
	int rectangleChoice;
	int pointAddToScore = 10;

	//nested for loops to draw the rectangle
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << setw(2) << "O";
		}
		cout << endl;
	}

	//displays to user askes what shape is displaying
	cout << "\tPick What Shape you think this is:\n\n 0.Rectangle\n 1.Square\n 2.Triangle\n 3.None of the above\n";

	//takes user input
	cin >> rectangleChoice;

	//checks to see if user got it correct
	if (rectangleChoice == 0) {
		calculateScore(pointAddToScore);
		cout << "\nYAY THATS Correct\n";
	}
	else
	{
		cout << "\nSorry Incorrect Try again\n";
	}
	
}

int calculateScore(int score) {
	int totalScore;
	//adds 10 to your total score and returns it to be displayed
	totalScore = score + 10;


	return totalScore;
}