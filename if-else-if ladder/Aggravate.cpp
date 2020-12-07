// Demonstrate an if-else-if ladder.

#include <iostream>
using namespace std;

int main() {

	int x;

	for (x = 0; x <= 6; x++) {
		if (x == 1) cout << "X is one\n";
		else if (x == 2) cout << "X is two\n";
		else if (x == 3) cout << "X is three\n";
		else if (x == 4) cout << "X is four\n";
		else if (x == 5) cout << "X is five\n";
		else cout << "X is not between 1 and 5.\n";
	}

	return 0;
}