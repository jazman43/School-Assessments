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

	float numberA, numberB, numberC, x1, x2, discriminant;
	//prompts user and gets input and stores numbers 
	cout << "Please Enter number for condition a : ";
	cin >> numberA;
	cout << "Please Enter number for condition b : ";
	cin >> numberB;
	cout << "Please Enter number for condition c : ";
	cin >> numberC;
	
	//number_b sqrt suptract 4 times number_A times number_C  (b 2-4ac)	
	discriminant = numberB * numberB - 4 * numberA * numberC;

	//performing variable discriminant checks to see if roots are real and unequal , equal and imanginary  
	if (discriminant > 0)
	{
		//performing calculations to find the roots of X1 and X2 and displaying them
		x1 = (-numberB + sqrt(discriminant)) / (2 * numberA);
		x2 = (-numberB - sqrt(discriminant)) / (2 * numberA);
		cout << "roots are real and unequal\n";
		cout << "x1 = " << x1 << ";  x2 = " << x2 << endl;
	}
	else if (discriminant == 0)
	{
		//as roots are equal only need to perform one calculation then display root X1 as X2
		cout << "roots are real and equal\n";
		x1 = -numberB / (2 * numberA);
		cout << "x1 = " << x1 << "; x2 = " << x1 <<endl;
	}
	else
	{
		//if Roots fail last 2 checks then roots are imanginary this displayes that user
		cout << "roots are imanginary\n";
		cout << "x1 = nan;\n";
		cout << "x2 = nan\n";
	}


	system("pause>0");
}