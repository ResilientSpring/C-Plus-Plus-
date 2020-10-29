// Read from file.

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	char ch;
	int i;
	float f;
	char str[80];

	ifstream in;
	in.open("test.txt", ios::binary);

	if (in.is_open()) {
		in >> i;
		in >> f;
		in >> ch;
		in >> str;

		cout << i << " " << f << " " << ch << "\n";
		cout << str;

		return 0;
	} 
	else {
		cout << "Cannot open file. \n";
		
		return 1;
	}
}