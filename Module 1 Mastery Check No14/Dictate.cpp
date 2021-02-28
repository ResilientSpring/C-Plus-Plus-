#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	cout << "A year on Jupiter (the time it takes for Jupiter to make one full circuit around the Sun)";
	cout << "takes about 12 Earth years. \nEnter Jovian years to have it converted to Earth years: ";

	double jupiter;
	cin >> jupiter;

	double earth_year = jupiter * 12;

	cout << "\nEarth years will be " << earth_year << " years.";

	return 0;
}