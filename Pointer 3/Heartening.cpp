#include <iostream>
using namespace std;

int main() {

	int* p;
	int num;

	// ----- End of declaration statements. 

	p = &num;

	//On the left of an assignment statement, * is an operator standing for the value at the memory address.
	*p = 100; 
	
	cout << num << ' ';

	(*p)++;

	cout << num << ' ';

	(*p)--;

	cout << num << '\n';

	return 0;


}