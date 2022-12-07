/*
Task 3
jared evans
CS103 Assessmant 2
*/

#include <iostream>

using namespace std;



int main() {

	//vareablis
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	int b[3][3] = { {7,8,9},{4,5,6},{1,2,3} };

	int c[3][3];

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			//add var a (2d array) to var b(2d array) and store result in var c (2d array)
			c[i][j] = a[i][j] + b[i][j];

		}

	}

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {


			//muiltply var c(2d array) by 3 and store it back into c
			c[i][j] = 3 * c[i][j];

		}

	}

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			// display var c 3 by 3
			cout << c[i][j] << " ";

		}

		cout << endl;

	}



	system("pause>0");
}