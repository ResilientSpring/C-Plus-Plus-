/*

This program illustrates the differences between int and double.

*/

#include <iostream> 
using namespace std;

int main() {
	int ivar = 100;
	double dvar = 100.0;

	cout << "Original value of ivar: " << ivar << "\n";  // Carriage-returned 
	cout << "Original value of dvar: " << dvar << "\n";

	cout << "\n";

	ivar = ivar / 3;
	dvar = dvar / 3.0;

	cout << "ivar after division: " << ivar << "\n";

	cout << "dvar after division: " << dvar;

	return 0;
}