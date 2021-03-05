#include <iostream>
using namespace std;

int main() {
	bool a = 1;
	bool b = 0;
	bool c = true;
	bool d = false;
	bool e = 2;

	if (a) cout << "1 and true is interchangeable in C++'s conditional statement. \n";
	if (b) cout << "0 and false is interchangeable in C++'s conditional statement. \n";
	if (c) cout << "A bool variable can have values of true, false, or non-zero, and zero. \n";
	if (d) cout << "This statement will not execute. \n";
	if (e) cout << "Any nonzero value is interpreted as true and zero is false, in C++ .\n";

	return 0;
}