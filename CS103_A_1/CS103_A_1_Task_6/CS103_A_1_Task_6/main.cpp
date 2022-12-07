/*
Task 6
Jared evans
CS103 assessment 1
*/


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
		cout << "\n0=>.Input your expenses for the last Seven days\n1=>.Show weekly Expenses\n2=>.Show daily Expenses\n3=>.Exit\n\nEnter Your Choice:";

		//get user input for menu
		cin >> userInput;

		//switch to get menu peace needed
		switch (userInput)
		{
		case 0://get user unput
			tracker.getInput();
			
			break;
		case 1://weekly expenses
			tracker.showWeeklyExpenses();
			break;
		case 2://daily expenses
			tracker.showDailyExpenses();
			break;
		default:
			break;
		}

	} while (userInput != 3);


	return 0;
}