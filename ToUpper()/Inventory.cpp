// Convert a string to uppercase.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {

	char str[80];

	strcpy(str, "this is a test");

	for (int i = 0; str[i]; i++)   // This loop stops when the null terminator is indexed. 
		str[i] = toupper(str[i]);

	cout << str;

	return 0;
}