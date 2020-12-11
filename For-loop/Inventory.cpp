// Show square roots of 1 to 99. 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int num;

	double sq_root;

	for (num = 1; num < 100 ; num++)
	{
		sq_root = sqrt(num);
		cout << num << " 's square root is " << sq_root << "\n";
	}

	return 0;
}