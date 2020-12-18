/*

This program displays all printable characters, including the extended character set, if one exitsts. 

*/

#include <iostream>
using namespace std;

int main() {

	unsigned char ch;

	ch = 32;
	
	while (ch)
	{
		cout << ch;

		ch++;
	}

	return 0;

}