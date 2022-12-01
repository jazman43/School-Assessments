#include <iostream>
#include <string>
#include "expensesTracker.h"

using namespace std;


int main() {
	//verabiles
	int userInput;

	//assess Track Expenses Class
	TrackExpenses tracker;	

	//title
	cout << "********YOUR Personal Expenses Tracking System********" << endl;


	//main loop
	do {
		//display menus
		cout << "\n0=>.Show daily Expenses\n1=>.show weekly Expenses\n2=>.Input your expenses for the last three days\n3=>.Exit\n\nEnter Your Choice:";

		//get user input for menu
		cin >> userInput;

		//switch to get menu peace needed
		switch (userInput)
		{
		case 0://daily expenses
			tracker.showDailyExpenses();
			break;
		case 1://weekly expenses
			tracker.showWeeklyExpenses();
			break;
		case 2://get user unput
			tracker.getInput();
			break;
		default:
			break;
		}

	} while (userInput != 3);


	return 0;
}