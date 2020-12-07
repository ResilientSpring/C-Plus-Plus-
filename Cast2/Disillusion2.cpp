// Demonstrate a case. 

#include <iostream>
using namespace std;

int main() {
	int i;

	for (i = 0; i <= 10; i++)
	{
		cout << i << "/2 is: " << (float)i / 2;
		// The cast to (float) causes a fractional component to be displayed. 

		cout << "\n";
	}

	return 0;
}