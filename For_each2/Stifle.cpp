#include <iostream>
using namespace std;

int main() {

	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	for (int number : fibonacci)
	{
		cout << number << " ";
	}

	return 0;
}

/* While for loops provide a convenient and flexible way to iterate through an array, 
they are also easy to mess up and prone to off-by-one errors.

There’s a simpler and safer type of loop called a for-each loop (also called a 
range-based for-loop) for cases where we want to iterate through 
every element in an array (or other list-type structure).

The for-each statement has a syntax that looks like this:

for (element_declaration : array)
   statement;

When this statement is encountered, the loop will iterate through each element in array, 
assigning the value of the current array element to the variable declared in 
element_declaration.

For best results, element_declaration should have the same type as the array elements, 
otherwise type conversion will occur.

Reference: 
https://www.learncpp.com/cpp-tutorial/for-each-loops/
*/