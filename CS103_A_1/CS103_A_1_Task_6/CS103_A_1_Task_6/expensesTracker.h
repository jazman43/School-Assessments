#pragma once
#include <iostream>


struct PersonalExpentses
{
	int date=0, transportCost=0, mealCost=0, entertamentCost=0, otherCost=0;
};


class TrackExpenses
{
private:
	PersonalExpentses expentses[3];

public:
	TrackExpenses(int date, int transportCost, int mealCost, int enertamentCost, int otherCost);

	TrackExpenses();

	void getInput();
	void showDailyExpenses();
	void showWeeklyExpenses();
};

