
/*

Project 2-3 
Compute the regular payments for a loan.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double Principal;      // original principal
	double IntRate;        // interest rate, such as 0.075
	double PayPerYear;     // number of payments per year
	double NumYears;       // number of years 
	double Payment;        // the regular payment
	double numer, denom;   // temporary work variables
	double b, e;           // base and exponent for call to power()

	cout << "Enter the principal: ";
	cin >> Principal;

	cout << "Enter interest rate (i.e., 0.075) : ";
	cin >> IntRate;

	cout << "Enter number of payments per year: ";
	cin >> PayPerYear;

	cout << "Enter number of years: ";
	cin >> NumYears;

	// Perform the financial calculation. 
	numer = IntRate * Principal * PayPerYear;

	e = -(PayPerYear * NumYears);
	b = (IntRate / PayPerYear) + 1;

	denom = 1 - pow(b, e);

	Payment = numer / denom;

	cout << "Payment is " << Payment;

	return 0;
}