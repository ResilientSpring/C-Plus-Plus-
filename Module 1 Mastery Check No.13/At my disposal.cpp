/*
The moon's gravity is about 17 percent that of Earth's. Write a program that displays a table that shows 
Earth pounds and their equivalent moon weight. Have the table run from 1 to 100 pounds.

Output a new line every 25 pounds. 
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double earth = 1;
	double moon = 0.17 * earth;

	cout << earth << " pound on earth is " << moon << " that on Moon.\n";

	for (int i = 2; i < 101; i++)
	{
		cout << i * earth << " pounds on earth is " << i * earth * 0.17 << " that on Moon.\n";

		if (i == 25 || i == 25 * 2 || i == 25 * 3 || i == 25 * 4) cout << "\n";
	}

	return 0;
}