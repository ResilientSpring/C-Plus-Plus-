// Declare loop control variable inside the for. 

#include <iostream>
using namespace std;

int factorial_function(int a);

int main() {

	int sum = 0;

	int fact = 1;

	// compute the factorial of the numbers through 5 
	for (int i = 0; i <= 5; i++)
	{
		sum += i; // i is known throughout the loop. 

	}

	// but, i is not known here. 

	cout << "Sum is " << sum << "\n.";
	
	cout << "Please input a number to count its factorial: ";
	cin >> fact;
	cout << fact << " factorial is " << factorial_function(fact);

	return 0;
}

int factorial_function(int a) {

	int factorial = 1;


	for (int i = 1; i <= a; i++)
	{
		factorial = factorial * i;
	}

	return factorial;
}