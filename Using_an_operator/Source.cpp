// https://stackoverflow.com/questions/59073388/can-i-have-multiple-c-source-files-in-the-same-project-visual-studio-19

// Using an operator. 

#include <iostream>
using namespace std;

int main() {
	int length=7, width=5, area;

	area = length * width;

	cout << "The area is ";
	cout << area;

	return 0;

}