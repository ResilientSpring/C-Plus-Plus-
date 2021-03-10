#include <iostream>
using namespace std;

int main() {

	int number_of_factors_including_1 = 0;

	cout << "Prime numbers between 1 and 100 are: ";

	for (int i = 1; i < 101; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				number_of_factors_including_1++;
			}
		}

		if (number_of_factors_including_1 == 1)
		{
			cout << i << " ";
		}

	}

	return 0;

}