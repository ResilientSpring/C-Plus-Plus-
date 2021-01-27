#include <iostream>
using namespace std;

int main() {

	int i, j;
	int sqrs[10][2] = { {1, 1}, {2, 4}, {3, 9}, {4, 16}, {5, 25}, {6, 36}, {7, 49}, {8, 56}, {9, 81}, {10, } };
	// When using subaggregate grouping, if you don't supply enough initializers for a given group, 
	// the remaining members will automatically be set to zero. The textbook page 139.

	cout << "Enter a number between 1 and 10: ";
	cin >> i;

	// look up i
	for (j = 0; j < 10; j++)
		if (sqrs[j][0] == i) break;

	// value of j is kept in the memory even when the for loop has been terminated. 
	cout << "The square of " << i << " is " << sqrs[j][1]; 

	return 0;
}