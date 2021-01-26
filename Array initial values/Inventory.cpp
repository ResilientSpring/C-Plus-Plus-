#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {


	char str[10];

	for (int i = 0; i < 6; i++)
		str[i] = 65 + i;

	cout << "Initial values in the character array are: ";

	for (int i = 0; i < 11; i++)
		cout  << str[i] << " ";

}