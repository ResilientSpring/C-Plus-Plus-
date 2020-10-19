/*

Project 1-1

This program converts feet to meter.

Call this program FtoM.cpp

*/

#include <iostream>
using namespace std;

int main() {
	double f, m;

	// Add the code that inputs the number of feet.
	cout << "Enter the length in feet:";
	cin >> f; // read the number of feet and store it into the memory location marked as f;

	// Add the code that performs the conversion and displays the result.
	m = f / 3.28;  // Converts to meters.
	cout << f << " feet is " << m << " meters.";

	return 0;

}