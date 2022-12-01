#include "expensesTracker.h"
using namespace std;

//use the constructor to initialize the struct members
TrackExpenses::TrackExpenses(int date, int transportCost, int mealCost, int enertamentCost, int otherCost)
{
	expentses[0].date = date;
	expentses[0].transportCost = transportCost;
	expentses[0].mealCost = mealCost;
	expentses[0].entertamentCost = enertamentCost;
	expentses[0].otherCost = otherCost;
}

TrackExpenses::TrackExpenses()
{
}

void TrackExpenses::getInput()
{

	//verabiles
	char y_Or_nInput;

	int i = 0;

	do
	{
		//getting user data for last seven days and storeing them
		cout << "enter the Date(day month year '011222'): ";
		cin >> expentses[i].date;
		cout << "enter the transport cost: $";
		cin >> expentses[i].transportCost;
		cout << "enter the meal cost: $";
		cin >> expentses[i].mealCost;
		cout << "enter the entertainment cost: $";
		cin >> expentses[i].entertamentCost;
		cout << "enter the other cost: $";
		cin >> expentses[i].otherCost;


		i++;
		//getting user input to see if user whants to go back to menu or add more to there daily spends
		cout << "\nEnter 'y' to add more or 'n' to continue\n";

		cin >> y_Or_nInput;

		
		if (i >= 7) {
			i = 0;
		}

	} while (y_Or_nInput == 'y' || y_Or_nInput =='Y');
}

void TrackExpenses::showDailyExpenses()
{

	//verabiles
	char y_Or_nInput;

	int i = 0;
	int dailyTotal;

	do
	{
		//displays user daily expenses 
		cout << "\nDate: " << expentses[i].date;
		
		cout << "\nTransport cost: $" << expentses[i].transportCost;
		
		cout << "\nMeal cost: $" << expentses[i].mealCost;
		
		cout << "\nEntertainment cost: $" << expentses[i].entertamentCost;
		
		cout << "\nOther cost: $" << expentses[i].otherCost;	
		//adds users expenses for that day and displays the total
		dailyTotal = expentses[i].transportCost + expentses[i].mealCost + expentses[i].entertamentCost + expentses[i].otherCost;

		cout << "\nYour Daily Expenses: $" << dailyTotal << endl;

		i++;
		//getting user input to see if user whants to go back to menu or see next days spends
		cout << "\nEnter 'y' to add more or 'n' to continue\n";

		//once day seven has been entered goes back to day 1
		cin >> y_Or_nInput;
		if (i >= 7) {
			i = 0;
		}

	} while (y_Or_nInput == 'y' || y_Or_nInput == 'Y');
}

void TrackExpenses::showWeeklyExpenses()
{
	//verabiles
	int total=0;

	//goes thourh all seven days and adds it all up for a weekly total and displays it
	for (int i = 0; i < 7; i++) {

		total += expentses[i].transportCost + expentses[i].mealCost + expentses[i].entertamentCost + expentses[i].otherCost;
	}

	cout << "\n\n Total weekly Expenses: $" << total;
}