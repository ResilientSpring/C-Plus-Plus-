/*

Compute the average and find the minimum and maximum of a set of values. 

*/

#include <iostream>

using namespace std;

int main() {

	int i, avg, min_val, max_val; 

	int nums[10];

	nums[0] = 10;
	nums[1] = 18; 
	nums[2] = 75;
	nums[3] = 0;
	nums[4] = 1;
	nums[5] = 56;
	nums[6] = 100;
	nums[7] = 12;
	nums[8] = -19;
	nums[9] = 88;

	// compute the average
	avg = 0;

	for (i = 0; i < 10; i++)
		avg += nums[i];  // Sum the values in nums.

	avg /= 10;  // Calculate the average.

	cout << "Average is " << avg << "\n";

	// Find minimum and maximum value.
	min_val = max_val = nums[0];
	for (i = 1; i < 10; i++)
	{
		if (nums[i] < min_val)  min_val = nums[i];
		if (nums[i] > max_val)  max_val = nums[i];
			
	}

	cout << "Minimum value: " << min_val << "\n";
	cout << "Maximum value: " << max_val;

	return 0;

}