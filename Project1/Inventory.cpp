/*

Project 3-1 

A simple help system. 

*/

#include <iostream>
using namespace std;

int main() {

	char choice;

	cout << "Help on: \n";
	cout << " 1. if \n";
	cout << " 2. switch \n";
	cout << "Choose one: ";

	cin >> choice;

	switch (choice)
	{
	case '1':   // '1' and 1 are different!! The variable "choice" was declared as a type of char. 
		cout << "The if: \n\n";
		cout << "if (condition) statement; \n";
		cout << "else statement; \n";
		break;

	case '2':  // In C++, the case constatnts in switch statement must be integer or character literals. See the textbook page 92. 
		cout << "The switch: \n\n";
		cout << "switch(expression) { \n";
		cout << "  case constant: \n";
		cout << "      statement sequences;";
		cout << " //... \n";
		cout << "} \n";
		break;
	default:
		cout << "Selection not found. \n";
	}

	return 0;
}