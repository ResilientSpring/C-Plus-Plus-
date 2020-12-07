// Use an int value to control the if in order to avoid a divide-by-zero error.  Textbook page 88.

/* 
In C++,
A value of 0 is automatically converted into false, and all non-zero values are converted to true.  
Thus, any expression that results in a 0 or non-zero value can be used to control the if.
*/

#include <iostream>
using namespace std;

int main() {

	int a, b;

	cout << "Enter numerator: ";
	cin >> a;

	cout << "Enter denominator: ";  
	cin >> b;

	// Notice that b alone is sufficient to control this if statement.
	// No relational operator is needed. 
	if (b) cout << "Result: " << a / b << "\n";
	else cout << "Cannot divide by zero. \n";

	return 0;
}