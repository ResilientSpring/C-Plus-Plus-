#include <iostream>
using namespace std;

int main() {
	int x;

	for (x = 0; x <= 103; x++)
	{
		if (x % 2) continue;   // Continue the loop early when x is odd. 
		cout << x << " ";
	}

	return 0;
}