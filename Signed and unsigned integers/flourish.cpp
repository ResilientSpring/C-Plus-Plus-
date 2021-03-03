#include <iostream>
using namespace std;
/*
* 
* This program shows the difference between signed and unsigned integers. 
*/

int main() {

	short int i;  // a signed short integers. 

	short unsigned int j; 

	j = 60000; 
	// 60000 is within the range of an unsigned short int, 
	// but is typically outside the range of a signed short int.
	// Thus, it will be interpreted as a negative valuewhen assigned to i. 

	i = j;

	cout << i << " " << j;

	return 0;


}