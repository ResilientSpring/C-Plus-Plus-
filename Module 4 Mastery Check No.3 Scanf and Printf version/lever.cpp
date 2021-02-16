/*
 Write a program that searches an array of ten integers for duplicate values.
 Have the program display each dubplicate found.
*/

#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include <stdio.h>

int main() {

	int input;

	int storage[10];

	std::cout << "Insert 10 integers and the program will check if there is are duplicate integers. \n";

	for (int i = 0; i < 10; i++)
	{
		switch (i) {

		case 0:
			std::cout << "Now, insert the first number.\n";
			scanf("%d", input);
			storage[0] = input;
			break;
		case 1:
			std::cout << "Now, insert the No." << i + 1 << " number.\n";
			scanf("%d", input);
			storage[1] = input;
			break;
		case 2:
			std::cout << "Now insert the No." << i + 1 << " number.\n";
			scanf("%d", input);
			storage[i] = input;
			break;
		case 3:
			std::cout << "Now, insert the No." << i + 1 << " number.\n";
			scanf("%d", &input);
			storage[i] = input;
			break;
		case 4:
			std::cout << "Now, insert the No." << i + 1 << " number.\n";
			scanf("%d", &input);
			storage[i] = input;
			break;
		case 5:
			std::cout << "Now, insert the No." << i + 1 << " number.\n";
			scanf("%d", &input);
			storage[i] = input;
			break;
		case 6:
			std::cout << "Now, insert the No." << i + 1 << " number.\n";
			scanf("%d", &input);
			storage[i] = input;
			break;
		case 7:
			std::cout << "Now, insert the No." << i + 1 << " number.\n";
			scanf("%d", &input);
			storage[i] = input;
			break;
		case 8:
			std::cout << "Now, insert the No." << i + 1 << " number.\n";
			scanf("%d", &input);
			storage[i] = input;
			break;
		case 9:
			std::cout << "Now, insert the No." << i + 1 << " number.\n";
			scanf("%d", &input);
			storage[i] = input;
			break;
		}

	}

	int j = 0;

	for (int i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++) {

			if (j == i) continue;

			if (storage[i] == storage[j] && i > j)
				std::cout << "Duplicate found: " << storage[i] << "\n";
		}
	}

	std::cout << "The 10 numbers you inserted: ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << storage[i];
	}

	return 0;

}

/*

Scanf() and Printf() are alternative to cin and cout.

References: 
1. https://www.tutorialspoint.com/cprogramming/c_input_output.htm
2. https://www.cplusplus.com/reference/cstdio/scanf/
3. https://en.cppreference.com/w/c/io/fscanf

*/