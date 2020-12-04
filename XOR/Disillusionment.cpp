/*
Project 2-2 
Create an XOR using the C++ logical operators.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	bool p = true, q = true;

	cout << p << " XOR " << q << " is " << ((p || q) && !(p && q)) << "\n";

	// The << operator is higher in precedence than the logical operators.
	// If you remove the outer parentheses surrounding the XOR operation, an error will occur.
	cout << p << " XOR " << q << " is " <<  (p || q) && !(p && q) ; 
	cout << "\n";

	p = false;
	q = true;

	cout << p << " XOR " << q << " is " << ((p || q) && !(p && q)) << "\n";
	cout << p << " XOR " << q << " is " <<  (p || q) && !(p && q) ;
	cout << "\n";

	p = true;
	q = false;

	cout << p << " XOR " << q << " is " << ((p || q) && !(p && q)) << "\n";
	cout << p << " XOR " << q << " is " <<  (p || q) && !(p && q) ;
	cout << "\n";

	p = false;
	q = false;

	cout << p << " XOR " << q << " is " << ((p || q) && !(p && q)) << "\n";
	cout << p << " XOR " << q << " is " << (p || q) && !(p && q) ;

	return 0;

}
