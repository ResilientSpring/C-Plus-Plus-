#include <iostream> 
/* This program shows the difference between signed and unsigned integers. 
*/

using namespace std;

int main() {

	short int i; // a signed short integer.
	short unsigned int j; // an unsigned short integer.

	j = 60000;     // 60,000 is within the range of an unsigned 
	i = j;         // short int, but is typically outside the range of a signed short int. 
	               // Thus, it will be interpreted as a negative value when assigned to i. 

	cout << i << " " << j;

	return 0;
}