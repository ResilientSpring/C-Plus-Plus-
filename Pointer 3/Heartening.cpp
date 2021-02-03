#include <iostream>
using namespace std;

int main() {

	int* p;
	int num;

	p = &num;

	*p = 100; 
	
	cout << num << ' ';

	(*p)++;

	cout << num << ' ';

	(*p)--;

	cout << num << '\n';

	return 0;


}