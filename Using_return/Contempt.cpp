// Using return

#include <iostream>
using namespace std;

// A void function that uses return.
void f() {
	cout << "Inside f()\n";

	return; // This causes an immediate return, bypassing the remaining cout statement.

	cout << "This won't display.\n";
}

int main() {

	cout << "Before call\n";
	f();
	cout << "After call\n";

	return 0;

}