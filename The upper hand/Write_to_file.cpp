// Write to file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream out("test");  // Create and open a file called "test" for text output.

	if (!out) {

		cout << "Can't open file. \n";

		return 1;
	}

	out << 10 << " " << 123.23 << "\n";  // Output to the file.

	out << "This is a short text file. ";

	out.close(); // Close the file. 

	return 0;
}