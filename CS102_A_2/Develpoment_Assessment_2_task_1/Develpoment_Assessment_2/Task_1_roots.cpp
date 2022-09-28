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

	float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;

	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	cout << "Enter c : ";
	cin >> c;


	discriminant = b * b - 4 * a * c;

	if (discriminant > 0)
	{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "roots are real and unequal\n";
		cout << "x1 = " << x1 << ";  x2 = " << x2 << endl;
	}
	else if (discriminant == 0)
	{
		cout << "roots are real and equal\n";
		x1 = -b / (2 * a);
		cout << "x1 = " << x1 << "; x2 = " << x1 <<endl;
	}
	else
	{
		realPart = -b / (2 * a);
		imaginaryPart = sqrt(-discriminant) / (2 * a);
		cout << "roots are imanginary\n";
		cout << "x1 = " << realPart << "+" << imaginaryPart << "i\n";
		cout << "x2 = " << realPart << "-" << imaginaryPart << "i\n";
	}


	system("pause>0");
}