// reading a text file. 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string line;
	ifstream in;
	in.open("c17.txt");

	if (in.is_open()) {
		while (getline(in, line)) {
			cout << line << '\n';
		}

		in.close();
	}
	else {
		cout << "Unable to open file. ";

	}

	return 0;
}