#include <iostream>
using namespace std;

int main() {

	int crossover[4][9];
	cout << "The element (2, 3) of the integer array called crossover is " << crossover[2][3];

	cout << "\n";

	crossover[2][3] = 6;
	cout << "The element (2, 3) of the integer array called crossover is " << crossover[2][3];

	return 0;

}
