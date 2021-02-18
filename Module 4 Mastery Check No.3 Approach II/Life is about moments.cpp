/*
 Write a program that searches an array of ten integers for duplicate values.
 Have the program display each duplicate found.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int input;

	int storage[20];

	cout << "Insert 20 integers and the program will check if there are duplicate integers in the array. \n";

	for (int i = 0; i < 20; i++)
	{
		switch (i) {

		case 0:
			cout << "Now, insert the first number.\n";
			cin >> input;
			storage[0] = input;
			break;
		case 1:
			cout << "Now, insert the No." << i + 1 << " number.\n";
			cin >> input;
			storage[1] = input;
			break;
		default:
			cout << "Now insert the No." << i + 1 << " number.\n";
			cin >> input;
			storage[i] = input;
		}

	}

	cout << "Duplicate found: ";

	for (int i = 0; i < 20; i++)
	{
		for (int j = i + 1; j < 20; j++) {

			if (storage[i] == storage[j] ) cout << storage[i];
		}
	}

	cout << "\n" << "The 20 numbers you inserted: ";
	for (int i = 0; i < 20; i++)
	{
		cout << storage[i];
	}

	return 0;

}