// A for loop with no increment.

#include <iostream>
using namespace std;

int main() {

	int x; 

	for ( x = 0; x != 123; )  // No increment expression
	{
		cout << "Enter a number: ";

		cin >> x;
	}

	return 0;
}