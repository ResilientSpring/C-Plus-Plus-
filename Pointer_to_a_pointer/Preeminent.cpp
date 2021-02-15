#include <iostream>
using namespace std;

int main() {

	// Refer to Figure 4-2 Single and multiple indirection, on page 159 of the textbook.

	int x;
	int *p;  // Normal Pointer, the value of the pointer is the address of a value(variable). 
	int **q; // Pointer to a Pointer contains the address of the second pointer.

	//-----End of the declaration.     See also: array declaration.

	x = 10; 
	p = &x;  // & is an operator that returns the memory address of its operand.
	q = &p;  // Assign q the memory address of p which is a pointer.

	// Prints the value of x.
	cout << **q; 

	cout << "\n";

	// * is an operator that returns the value at the memory address of its operand.
	cout << *q; // Returns the value at the memory address of q, i.e. returns the memory address of p.

	cout << "\n";

	cout << *(*q); // Returns the value at the memory address of p, i.e. returns the memory address of x.

	cout << ", which is identical to " << *(p); 

	return 0;
}