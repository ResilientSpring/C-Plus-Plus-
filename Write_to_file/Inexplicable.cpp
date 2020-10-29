// Write to file. 

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream out;
	out.open("test.txt");

	if (out.is_open()) {
		out << 10 << " " << 123.23 << "\n" << "This is a short text file.";

		out.close();

		return 0;

	}
	else {
		cout << "Cannot open file. \n";
		return 1;
	}


}