// This program will not work right. 

#include <iostream>
using namespace std; 

int main() {

	// In a declaration statement, preceding a variable name with a * causes that variable to become a pointer. 

	double x, y;

	int* p;  // A pointer is an object that can contain a memory address. 

	// ----- End of declaration statements. 

	x = 123.23; 

	// use cast to assign double * to int *
	p = (int*) &x;   // & is a operator that returns the memory address of its operand. 

	y = *p;  // * is an operator that returns the value at the memory address. 

	cout << y; // y will contain the un-desired result.

	return 0;
}