#include <iostream>

using namespace std;

int main() {

	int startingNum, endingNum, tempNum, prime, divisble;

	cout << "enter a starting number: ";
	cin >> startingNum;
	cout << "enter a ending number: ";
	cin >> endingNum;


	if (startingNum >= endingNum)
	{
		tempNum = startingNum;

		startingNum = endingNum;

		endingNum = tempNum;

	}


	cout << startingNum << endl << endingNum << endl;


}