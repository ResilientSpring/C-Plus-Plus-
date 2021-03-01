/*
* Write a program that averages the absolute value of five values entered by the user.
* Display the result. 
*/

#include <iostream>
using namespace std;

int main() {
	cout << "Enter five values and the program will show the absolute value of average: ";
	int a, b, c, d, e;
	cin >> a; 
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;

	double average = abs(a + b + c + d + e) / 5;

	cout << "The average of 5 values you entered is " << average;

	return 0;

}