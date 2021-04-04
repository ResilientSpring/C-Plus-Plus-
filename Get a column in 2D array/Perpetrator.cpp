#include <iostream>
using namespace std;

int main() {
	double frame[6][2] = {

		{2000, 1.5},
		{2001, 1.7},
		{2002, 3.6},
		{2001, 2.4},
		{2002, 2.9},
		{2003, 3.2}

	};

	for (int i = 0; i < 6; i++)
	{
		cout << frame[i][0] << "\n";
	}

	for (int i = 0; i < 6; i++)
	{
		cout << frame[i][1] << "\n";
	}

	return 0;
}