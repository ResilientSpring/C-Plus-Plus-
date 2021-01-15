
#include <iostream>
using namespace std;

int main() {

	char character_read;
	int counter = 0;

	for (;;) {

		cout << "Please enter a character: (Enter \".\" to stop) \n";

		cin >> character_read;

		if (character_read > 64 && character_read < 91) {
			cout << (char) (character_read + 32) << "\n\n";
			counter++;
		}
		else if (character_read > 96 && character_read < 123) {
			cout << (char) (character_read - 32) << "\n\n";
			counter++;
		}
		else if (character_read == '.') {
			cout << "The number of case changes that have taken place: " << counter;
			break;
		}
		else 
			cout << character_read << "\n\n";

	}


}