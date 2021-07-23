// Demonstrate some escape sequences. 

#include <iostream>

using namespace std;

int main() {

	cout << "one\ttwo\tthree\n";
	cout << "123\b\b45";  // The \b\b will backspace over the 2 and 3.

	return 0;

}