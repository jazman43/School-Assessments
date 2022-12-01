#pragma once
#include <iostream>

// a struct to hold the users data
struct PersonalExpentses
{
	int date=0, transportCost=0, mealCost=0, entertamentCost=0, otherCost=0;
};


class TrackExpenses
{
private:
	//initialise struct to an array of seven to repersent each day of the week
	PersonalExpentses expentses[7];

public:
	//create constructor with values needed
	TrackExpenses(int date, int transportCost, int mealCost, int enertamentCost, int otherCost);
	//create a defult constructor
	TrackExpenses();
	//create functions to deal with input and output
	void getInput();
	void showDailyExpenses();
	void showWeeklyExpenses();
};