/*

Project 4-1
Demonstrate the Bubble sort.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int size = 10;   // number of elements to sort. 
	int nums[size];
	int a, b, t;

	// give the array some random initial values. 
	for (t = 0; t < size; t++) nums[t] = rand();

	// display original array 
	cout << "Original array is: \n  ";
	for (t = 0; t < size; t++) cout << nums[t] << " ";
	cout << "\n";

	// This is the bubble sort, which uses repeated comparison and, if necessary, 
	// exchange of adjacent elements in the array. 
	// In this process, small values move toward one end, and large ones toward the other end. 

	// The number of passes required to ensure that the entry is sorted
	// is equal to one less than the number of elements in the array.
	for (a = 1; a < size; a++)
		// The outer loop causes the process to repeat until the entire array has been sorted. 

			// The inner loop checks adjacent elements in the array, looking for out-of-order elements. 
		for (b = size - 1; b >= a; b--) {
			if (nums[b - 1] > nums[b])
			{
				// exchange elements
				t = nums[b - 1];
				nums[b - 1] = nums[b];
				nums[b] = t;
			}
		}

	// display sorted array 
	cout << "\nSorted array is:\n ";
	for (t = 0; t < size; t++) cout << nums[t] << " ";

	return 0;

}