// A simple program that demonstrates box()

#include <iostream>
using namespace std;

void box(int length, int width, int height); // function prototype.

int main() {
	box(7, 20, 4);
	box(50, 3, 2);
	box(8, 6, 9);
}

// Compute the volume of a box.
void box(int length, int width, int height) {
	cout << "Volume of box is " << length * width * height << "\n";
}
