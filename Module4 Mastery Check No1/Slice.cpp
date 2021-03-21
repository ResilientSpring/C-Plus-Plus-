#include <iostream>
using namespace std;

int main() {
	short int hightemps[31];

	for (int i = 0; i < size(hightemps); i++)  // https://www.cplusplus.com/reference/array/array/size/
	{
		hightemps[i] = i + 1;
	}

	cout << "The length of the array is " << size(hightemps) << "\n";

	cout << "Elements of the array are ";

	for (int i = 0; i < size(hightemps); i++)
	{
		cout << hightemps[i] << " ";
	}

	return 0;
}