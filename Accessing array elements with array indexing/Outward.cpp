// Reverse case using array indexing. 

#include <iostream>
#include <cctype>
using namespace std;

int main() {

	int i; 

	char str[80] = "This Is A Test";  // Valid character array initialization See: https://www.studytonight.com/c/string-and-character-array.php

	cout << "Original string: " << str << "\n";


	// The loop iterates until the null terminating str is indexed. 
	// Since a null is zero(false), the loop stops. 
	for ( i = 0; str[i]; i++)
	{
		if (isupper(str[i]))  // isupper() function returns true when its argument is an uppercase letter. 
			str[i] = tolower(str[i]);
		else if (islower(str[i]))
			str[i] = toupper(str[i]);
	}

	cout << "Inverted-case string: " << str;

	return 0;

}