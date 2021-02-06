// Index a pointer as if it were an array. 

#include <iostream>
#include <cctype>
using namespace std; 

int main() {

	char* p;
	int i; 
	char str[80] = "This Is A Test";

	cout << "Original string: " << str << "\n";

	p = str;

	// now, index p
	for ( i = 0; i < p[i]; i++)
	{
		// In C++, the statement p[i] is functionally identical to *(p+i). See the Textbook page on 154.
		if (isupper(p[i]))
			p[i] = tolower(p[i]);
		else if (islower(p[i]))     // Access p as if it were array. 
			p[i] = toupper(p[i]);
	}

	cout << "Inverted-case string: " << str;

	return 0;
}