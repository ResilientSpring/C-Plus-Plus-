/*

Loop until a random number that is greater than 20000.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i, r;

	r = rand();

	// Conditional exxpression of for loop in C does not use the loop control variable.
	for ( i = 0; r <= 20000; i++)
	{
		r = rand();
	}

	cout << "Number is " << r << ". It was generated on try " << i << ".";

	return 0;
}