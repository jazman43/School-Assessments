/*
Task 2 
Jared Evans
CS103 Assessment 1
*/



#include <iostream>
using namespace std;


int SumOfNonNegativeList(int*array,int size) {
	int sum =0;

	for (int i = 0; i < size; i++) {
		cout << "enter number for array index[" << i << "]";
		cin >> array[i];	
		
		if (array[i] > 0) {
			 sum += array[i];
		}
		else
		{
			continue;
		}
	}
	return sum;
	*array = NULL;	
}


int main() {
	int arrSize;
	cout << "enter size: " << endl;
	cin >> arrSize;
	int* superArray = new int[arrSize];

	int total = SumOfNonNegativeList(superArray, arrSize);

	cout << total << endl;

	*superArray = NULL;
	system("pause>0");
}