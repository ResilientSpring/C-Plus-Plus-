/*

Project 3-1

A simple help system.

*/

#include <iostream>
using namespace std;

int main() {

	char choice;

	do {
		cout << "Help on: \n";
		cout << " 1. if \n";
		cout << " 2. switch \n";
		cout << " 3. for \n";
		cout << " 4. while \n";
		cout << " 5. do-while \n";
		cout << "Choose one: ";

		cin >> choice;
	} while (choice < '1' || choice > '5');

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
	case '3':
		cout << "The for: \n\n";
		cout << "for (init ; condition; increment) \n";
		cout << "    statement; \n";
		break;
	case '4':
		cout << "The while: \n\n";
		cout << "while (condition) statement; \n";
		break;
	case '5':
		cout << "The do-while: \n\n";
		cout << "do { \n";
		cout << "     statment; \n";
		cout << "} while (condition); \n";
		break;
//	default:                                  // Since the menu loop ensures that a valid response will be entered,
//		cout << "Selection not found. \n";    // it is no longer necessary to include a default statement to handle an invalid choice.   
	}

	return 0;
}