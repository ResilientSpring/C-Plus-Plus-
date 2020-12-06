// Magic Number program. 

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int magic; // magic number 
	int guess; // user's guess 

	magic = rand();   // get a random number 

	cout << "Enter your guess: ";
	cin >> guess;

	if (guess == magic) cout << "** Right **";  // if the guess matches the "magic number", the messages is displayed. 
	else cout << "** Wrong **";

	return 0;
}