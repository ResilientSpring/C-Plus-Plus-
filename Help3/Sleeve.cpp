#include <iostream>
using namespace std;

int main() {

    char choice;

	for ( ; ; )
	{
		do {
			cout << "Help on: \n";
			cout << " 1. if \n";
			cout << " 2. switch \n";
			cout << " 3. for \n";
			cout << " 4. while \n";
			cout << " 5. do-while \n";
			cout << " 6. break\n";
			cout << " 7. continue\n";
			cout << " 8. goto\n";
			cout << "Choose one (q to quit): ";

			cin >> choice;
		} while (choice < '1' || choice > '8' && choice != 'q');

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
		case '6':
			cout << "The break: \n\n";
			cout << "break; \n";
			break;
		case '7':
			cout << "The continue: \n\n";
			cout << "continue; \n";
			break;
		case '8':
			cout << "The goto: \n\n";
			cout << "goto label;\n";
			break;
		}

		cout << "\n";

		if (choice == 'q') break;
	}

	return 0;
}