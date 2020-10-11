/*

An interaction program that computes the area of a rectangle. 

*/

#include <iostream>
using namespace std;

int main() {
	int length, width;

	cout << "Enter the length";
	cin >> length; 

	cout << "Enter the width";
	cin >> width;

	cout << "The area is ";
	cout << length * width;

	return 0;
}
