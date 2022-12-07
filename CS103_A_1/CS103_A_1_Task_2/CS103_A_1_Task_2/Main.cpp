/*
Task 2 
Jared Evans
CS103 Assessment 1
*/



#include <iostream>
using namespace std;


int SumOfNonNegativeList(int*array,int size) {
	//local vareabil
	int sum =0;

	//run thourgh the array
	for (int i = 0; i < size; i++) {
		//get user input to populate the array 
		cout << "enter number for array index[" << i << "]";
		cin >> array[i];	
		//check if not less then 0 then add add non negtive numbers togeter
		if (array[i] > 0) {
			 sum += array[i];
		}
		
	}
	//return the result and clean up ponter
	return sum;
	delete[] array;
	*array = NULL;	
}


int main() {
	//vareabil
	int arrSize;

	//get user input for array size
	cout << "enter size: " << endl;
	cin >> arrSize;

	//create a ponter array and make it dynamic
	int* superArray = new int[arrSize];

	//call function and store returned data into "total"
	int total = SumOfNonNegativeList(superArray, arrSize);

	//display result to user
	cout << total << endl;

	//memory clean up
	delete[] superArray;
	
	system("pause>0");
}