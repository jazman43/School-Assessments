/*
development principles 1
assessment 2
task 1
jared evans
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float numberA, numberB, numberC, x1, x2, discriminant, realPart, imaginaryPart;

	cout << "Enter number a : ";
	cin >> numberA;
	cout << "Enter number b : ";
	cin >> numberB;
	cout << "Enter number c : ";
	cin >> numberC;


	discriminant = numberB * numberB - 4 * numberA * numberC;

	if (discriminant > 0)
	{
		x1 = (-numberB + sqrt(discriminant)) / (2 * numberA);
		x2 = (-numberB - sqrt(discriminant)) / (2 * numberA);
		cout << "roots are real and unequal\n";
		cout << "x1 = " << x1 << ";  x2 = " << x2 << endl;
	}
	else if (discriminant == 0)
	{
		cout << "roots are real and equal\n";
		x1 = -numberB / (2 * numberA);
		cout << "x1 = " << x1 << "; x2 = " << x1 <<endl;
	}
	else
	{
		realPart = -numberB / (2 * numberA);
		imaginaryPart = sqrt(-discriminant) / (2 * numberA);
		cout << "roots are imanginary\n";
		cout << "x1 = " << realPart << "+" << imaginaryPart << "i\n";
		cout << "x2 = " << realPart << "-" << imaginaryPart << "i\n";
	}


	system("pause>0");
}