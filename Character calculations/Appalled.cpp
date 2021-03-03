// This program displays alphabet.

#include <iostream>
using namespace std;

int main() {

	char letter; 

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		cout << letter;
	}

	return 0;
}

/*
The type char can hold values other than just the ASCII character set. 
It can also be used as a "small" integer with the range typically from -128 through 127 and
can be substituted for an int when the situaltion does not require larger numbers.
*/