#include <iostream>
using namespace std;

int main() {
	int t; 

	// Loops from 0 to 9, not to 100
	for (t = 0; t < 100; t++)
	{
		if (t == 10) break;   // Break out of the for when t equals 10.
		cout << t << " ";
	}

	return 0;
}