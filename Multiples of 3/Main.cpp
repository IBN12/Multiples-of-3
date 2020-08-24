/*
Program: Main (main program)
Description:This is the user-defined program.

Problem: If we list all the natural numbers below 10 that
are multiples of 3 and 5, we get 3, 5, 6, and 9. The sum
of these multiples is 23. Find the sum of all the multiples
of 3 or 5 below 1000.

Date: August-21-2020
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// local variables
	double valueFromDivision;
	int testDivision;
	int sum = 0;
	int dSum = 0;

	int num;
	double num2;

	double *dArray = new double[1000];  // allocates a new space of memory of type double and assigns it to the pointer variable.
	int *mArray = new int[1000];		// allocates a new space of memory of type int and assigns it to the pointer variable.

	int dLength = 0;
	int mLength = 0;

	// statements
	cout << fixed << showpoint << setprecision(2);
	for (double i = 1; i < 1000; i++) // for loop - will calculate if the natural number below 1000 are multiples of 3.
	{
		valueFromDivision = i / 3;
		testDivision = static_cast<int>(valueFromDivision);

		if (testDivision - valueFromDivision != 0) // if statement - test for decimal or a whole number.
		{
			dArray[dLength] = i;	// decimal dynamic array
			dLength++;
		}
		else
		{
			mArray[mLength] = i;	// multiples dynamic array
			mLength++;
		}
		cout << endl;
	}
	cout << endl;

	cout << "|Multiples of 3|" << endl;
	for (int i = 0; i < mLength; i++) // for loop - will print the multiples of 3.
	{
		cout << "mArray[" << i << "] = " << mArray[i] << endl;
		sum += mArray[i];
	}
	cout << endl;
	cout << "There are " << mLength << " multiples of 3 below 1000." << endl;
	cout << "The sum of the multiples of 3: " << sum << endl;
	cout << endl;



	//////////////////////////////////////////
	// decimal value test notes below
	/////////////////////////////////////////
	cout << "|||Notes|||" << endl;
	num = 3560;
	num2 = num % 9;
	cout << "Value: " << num2 << endl;
	cout << endl;

	cout << "|Using cmath header functions|" << endl;
	cout << "1 / 3: " << 1.0 / 3.0 << endl;
	num2 = floor(6.0 / 3.0);
	cout << "Num2: " << num2 << endl;
	cout << endl;

	cout << "4 % 3: " << 4 % 3 << endl;

	return 0;
	

}