#include <iostream>
using namespace std;

int main() {

	int* i;
	int j[10];

	double* f;
	double g[10];
	int x; 

	i = j;
	f = g;

	for (x = 0; x < 10; x++)
		cout << i + x << ' ' << f + x << '\n'; // Display the address produced by adding x to each pointer.

	return 0;
}