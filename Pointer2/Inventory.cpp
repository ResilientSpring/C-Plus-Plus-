#include <iostream>
using namespace std;

int main() {

	int total;
	int ptr;   
	int val;

	total = 3200; // Assign 3200 to total.
	ptr = &total; // get address of total.  & is a operator that returns the memory address of its operand.

	val = *ptr;  // * is an operator that returns the value at the memory address. 

	cout << "Total is: " << val << '\n';

	return 0;
}