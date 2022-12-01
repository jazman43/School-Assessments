#include "expensesTracker.h"
using namespace std;

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
	char y_Or_nInput;

	int i = 0;

	do
	{
		cout << "enter the Date(day month year '011222'): ";
		cin >> expentses[i].date;
		cout << "enter the transport cost: $";
		cin >> expentses[i].transportCost;
		cout << "enter the meal cost: $";
		cin >> expentses[i].mealCost;
		cout << "enter the entertament cost: $";
		cin >> expentses[i].entertamentCost;
		cout << "enter the other cost: $";
		cin >> expentses[i].otherCost;


		i++;

		cout << "\nEnter 'y' to add more or 'n' to continue\n";

		cin >> y_Or_nInput;

	} while (y_Or_nInput == 'y' || y_Or_nInput =='Y');
}

void TrackExpenses::showDailyExpenses()
{
	char y_Or_nInput;

	int iterasion = 0;

	do
	{
		cout << "\nDate: " << expentses[iterasion].date;
		
		cout << "\nTransport cost: $" << expentses[iterasion].transportCost;
		
		cout << "\nMeal cost: $" << expentses[iterasion].mealCost;
		
		cout << "\nEntertament cost: $" << expentses[iterasion].entertamentCost;
		
		cout << "\nOther cost: $" << expentses[iterasion].otherCost;	


		iterasion++;

		cout << "\nEnter 'y' to add more or 'n' to continue\n";

		cin >> y_Or_nInput;
		if (iterasion >= 3) {
			iterasion = 0;
		}

	} while (y_Or_nInput == 'y' || y_Or_nInput == 'Y');
}

void TrackExpenses::showWeeklyExpenses()
{
	int total=0;

	for (int i = 0; i < 3; i++) {
		total += expentses[i].transportCost + expentses[i].mealCost + expentses[i].entertamentCost + expentses[i].otherCost;
	}

	cout << "\n\n Total weekly Expenses: $" << total;
}


