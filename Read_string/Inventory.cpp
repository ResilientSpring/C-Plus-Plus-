// Using cin to read a string from the keyboard

#include <iostream>
using namespace std;

int main() {

	char str[80];

	cout << "Enter a string: ";

	cin >> str; // Read string from keyboard. 

	cout << "Here is your string: " << str;

	return 0;

}