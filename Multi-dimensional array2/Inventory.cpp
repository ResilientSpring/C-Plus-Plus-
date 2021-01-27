#include <iostream>
using namespace std;

int main() {

	int i, j;
	int sqrs[10][2] = { {1, 1}, {2, 4}, {3, 9}, {4, 16}, {5, 25}, {6, 36}, {7, 49}, {8, 56} };
	// When using sub-aggregate grouping, if you don't supply enough initializers for a given group, 
	// the remaining members will automatically be set to zero. The textbook page 139.

	cout << "Examine the content pair from index 1 to 10: (type the index you want to examine)  ";
	cin >> i;

	cout << "The content pair of index " << i << " is " << "{" << sqrs[i][0] << ", " << sqrs[i][1] << "}";

	return 0;
}