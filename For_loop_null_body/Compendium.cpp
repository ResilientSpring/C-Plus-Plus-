// The body of a for loop can be empty.

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int i;

	int sum = 0;

	// sum the numbers from 1 through 10.

	for (i = 1; i <= 10; sum += i++);  // This loop has no body.

	cout << "Sum is " << sum;

	return 0;

}