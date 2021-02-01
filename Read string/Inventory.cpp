// Using gets() to read a string from the keyboard. 

#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
using namespace std;

int main() {

	char str[80];

	cout << "Enter a string: ";

	gets(str); // Read a string using gets()

	cout << "Hero is your string: " << str;

	return 0;

}

// Must read: https://stackoverflow.com/questions/60098426/why-g-shows-gets-not-declared-even-after-including-cstdio