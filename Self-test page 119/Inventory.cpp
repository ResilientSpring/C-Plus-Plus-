

#include <iostream>
using namespace std;

int main() {

	char read;

	int count = 0;

	do {

		cout << "Enter a character: ";

		cin >> read;

			count++;

		cout << " \n";

	} while ((read) != '$');

	cout << "The number of periods: ";
	cout << count;

	return 0;

}