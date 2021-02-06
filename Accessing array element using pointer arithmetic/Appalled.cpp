// Reverse case using pointer arithmetic. 

#include <iostream>
#include <cctype>
using namespace std;

int main() {

	char* p;
	char str[80] = "This Is A Test";

	cout << "Original string: " << str << "\n";

	p = str; // Assign p the address of the start of the array. 

	/*
	Array Name as Pointers
	
	An array name acts like a pointer constant. 
	The value of this pointer constant is the address of the first element.

	For example, if we have an array named val then val and &val[0] can be used interchangeably.

	Reference: https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/
		
	*/

	while (*p)  // The loop stops when *p returns the null terminator. 
	{
		if (isupper(*p))
		{
			*p = tolower(*p);
		}
		else if (islower(*p))
			*p = toupper(*p);

		p++;  
		// Each time that a pointer is increment, it will point to the memory location of the next element
		// of its base type, vise versa. 
		// In this case, p++ will point to the next element of the array.
		// Reference: the Textbook page on 148. 
	}

	cout << "Inverted-case string: " << str;

	return 0;
}