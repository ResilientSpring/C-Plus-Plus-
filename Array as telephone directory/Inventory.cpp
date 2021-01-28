// A simple computerized telephone directory. 

#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int i; 
	string str;
	string numbers[][2] =
	{ {"Tom", "555-3322"}, {"Mary", "555-8976"}, {"Jon", "555-1037"}, { "Rachel", "555-1400" }, {"Sherry", "555-8873"} };

	cout << "Enter name: ";
	cin >> str;

	for (i = 0; i < 10; i += 2)
		if (!str.compare(numbers[i][0]))  // https://www.geeksforgeeks.org/stdstringcompare-in-c/
			break;
			cout << "Number is " << numbers[i][1];
	    if (i == 10)
		cout << "Not found.\n";
	
	return 0;
		
}