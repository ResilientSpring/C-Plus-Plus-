// Display a file using get().

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {

	char ch;

	if (argc != 2) {
		cout << "Usage: PR <filename>\n";

		return 1;
	}

	ifstream in(argv[1], ios::in | ios::binary);  // Open the file for binary operations.
	if (!in) {
		cout << "Cannot open file. \n";
		return 1;
	}

	// Read data until the end of the file is reached. 
	while (in)
	{ // in will be false when the end of file is reached.

		in.get(ch);
		if (in) cout << ch;

	}

	in.close();

	return 0;

}