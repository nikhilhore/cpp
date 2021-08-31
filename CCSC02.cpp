#include <iostream>
#include <conio.h>
#include <iomanip>
// header file for setprecision() function
using namespace std;

/*
Here we are going to make a program
to store 'n' integers and calculate there
sum, average and display it.
*/

int main(){
	int size;

	/* Reading input size of array 	from
	user and store it in 'size' variable */
	cout << endl;

	cout << "INPUT" << endl;
	cout << "Enter size of array : ";
	cin >> size;

	// create an array of length 'size'.
	int array[size];

	cout << "Enter " << size << " numbers : ";
	// Initially sum is zero
	float sum= 0.0;
	int i= 0;
	while (i<size){
		// Read and Store user entered numbers in array
		cin >> array[i];
		// Add element to 'sum' variable
		sum= sum + array[i];

		// new sum will be equal to previous sum plus element
		i = i + 1;
	}
	cout << endl;

	cout << "OUTPUT" << endl;
	cout << "Size of array : " << size << endl;

	i = 0;
	cout << "User entered array is : {";
	// print the array
	while (i<size){
		cout << array[i] << ", ";
		i = i + 1;
	}

	// calculating average
	float average= sum/size;
	// average equal total sum by total numbers
	
	// Used for formatting
	cout << "\b\b}" << endl; // To remove last two printed characters

	// print total sum
	cout << "Total Sum : " << sum << endl;

	// set precision of output up to 2 decimal digits
	cout << setprecision(2) << fixed;

	// print average
	cout << "Average : " << average << endl;

	getch();
	getch();
	return 0;
}

/*

Sample Input:

Enter size of array : 5
Enter 5 numbers : 4 6 2 7 3


Sample Output:

Size of array : 5
User entered array is : {4, 6, 2, 7, 3}
Total Sum : 22
Average : 4.40

*/
