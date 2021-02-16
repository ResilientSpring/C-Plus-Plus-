/*
 Write a program that searches an array of ten integers for duplicate values. 
 Have the program display each dubplicate found.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int input;

	int storage[10];

	cout << "Insert 10 integers and the program will check if there is are duplicate integers. \n";

	for (int i = 0; i < 10; i++)
	{
		switch (i) {
		
		case 0:
			cout << "Now, insert the first number.\n";
			cin >> input;
			storage[0] = input;
			break;
		case 1:
			cout << "Now, insert the No." << i + 1 << " number.\n" ;
			cin >> input;
			storage[1] = input;
			break;
		case 2:
			cout << "Now insert the No." << i + 1 << " number.\n";
			cin >> input;
			storage[i] = input;
			break;
		case 3: 
			cout << "Now, insert the No." << i + 1 << " number.\n";
			cin >> input;
			storage[i] = input;
			break;
		case 4:
			cout << "Now, insert the No." << i + 1 << " number.\n";
			cin >> input;
			storage[i] = input;
			break;
		case 5:
			cout << "Now, insert the No." << i + 1 << " number.\n";
			cin >> input;
			storage[i] = input;
			break;
		case 6: 
			cout << "Now, insert the No." << i + 1 << " number.\n";
			cin >> input; 
			storage[i] = input; 
			break;
		case 7:
			cout << "Now, insert the No." << i + 1 << " number.\n";
			cin >> input;
			storage[i] = input;
			break;
		case 8: 
			cout << "Now, insert the No." << i + 1 << " number.\n";
			cin >> input;
			storage[i] = input;
			break;
		case 9:
			cout << "Now, insert the No." << i + 1 << " number.\n";
			cin >> input;
			storage[i] = input;
			break;		
		}

	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {

			if (j == i) continue;

			if (storage[i] == storage[j]) cout << "Duplicate found: " << storage[i] << "\n";
		}
	}

	cout << "The 10 numbers you inserted: ";
	for (int i = 0; i < 10; i++)
	{
		cout << storage[i];
	}

	return 0;

}