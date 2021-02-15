#include <iostream>
using namespace std;

int main() {

	int x;
	int *p;  // Normal Pointer, the value of the pointer is the address of a value. 
	int **q; // Pointer to a Pointer contains the address of the second pointer.

	//-----End of the declaration.

	x = 10; 
	p = &x;  // Assign p the address of x. 
	q = &p;  // Assign q the address of p which is a pointer.

	// Prints the value of x.
	cout << **q; // Returns the value at the memory address of q which is a pointer.

	return 0;
}