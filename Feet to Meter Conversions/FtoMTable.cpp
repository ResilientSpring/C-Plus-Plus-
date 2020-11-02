/*
* Project 1-2 
* 
* This program displays a conversion table of feet to meter.
* 
* Call this program FtoMTable.cpp

*/

#include <iostream>
using namespace std;

int main() {

	double f; // holds the length in feet. 
	double m; // holds the conversion to meters. 
	int counter;

	counter = 0; // Line counter is initially set to zero.

	for (f = 1.0; f <= 100.0; f++) {
		m = f / 3.28; // convert to meters 
		cout << f << " feet is " << m << " meters. \n";


		counter++; // Increment the line counter with each loop iteration.

		// every 10th line, print a blank line. 
		if
			(counter == 10) {
			cout << "\n"; // output a blank line
			counter = 0; // reset the line counter. 
		}


	}

	return 0;

}