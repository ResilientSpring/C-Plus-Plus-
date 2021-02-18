/*
Write a program that prompts the user for two strings and then compares the strings 
for equality, but ignores case differences. Thus, "ok" and "OK" will compare as equal.
*/


#include <iostream>  // std::cout
#include <string>
#include <cctype>
#include <algorithm>  // std::transform
#include <vector>       // std::vector
#include <functional>   // std::plus
#include <locale>
using namespace std;

int main() {
	char array_first_string[256], array_second_string[256];
	string first_string, second_string, first_string_transformed, second_string_transformed;
	string destination_first_string_transformed, destination_second_string_transformed;
	long first_substract_from_second, first_intermediate, second_intermediate;

	cout << "Input two strings and the program will compare them for equality. \n";
	cout << "Case differences are ignored so \"ok\" and \"OK\" will compare as equal.\n";

	cout << "Now, enter the first string: ";
	// getline() will read the ENTIRE line, leading to variable overflow. 
//	getline(cin, first_string);
	gets_s(array_first_string);  // [16], [15]

	cout << "Now, enter the second string: ";
//	getline(cin, second_string);
	fgets(array_second_string, 210, stdin); // [17]

	// Convert character array of string into string class
	first_string = array_first_string;  // [18]
	second_string = array_second_string;  // [18]

	cout << "The result of comparing two strings you entered for equality: ";

	// Copy first_string to first_string_transformed that will be transformed into character array.
	first_string_transformed.assign(first_string);

	// Copy second_string to second_string_transformed that will be transformed into character array.
	second_string_transformed.assign(second_string);

	// Accommodate destination strings to fit the size of the source strings.
	destination_first_string_transformed.resize(first_string_transformed.size());
	destination_second_string_transformed.resize(second_string_transformed.size());

	// Convert the source string to lower case and store the result in destination string.
	transform(first_string_transformed.begin(), first_string_transformed.end(), destination_first_string_transformed.begin(), ::tolower);
	transform(second_string_transformed.begin(), second_string_transformed.end(), destination_second_string_transformed.begin(), ::tolower);

	// Save the converted values to variables for later arithmetic.
	first_intermediate = stol(first_string);
	second_intermediate = stol(second_string);

//	first_substract_from_second = stol(second_string) - stol(first_string);

	first_substract_from_second = first_intermediate - second_intermediate;

	if (first_string.compare(second_string) == 0  || abs(first_substract_from_second) == 32 && destination_first_string_transformed.compare(destination_second_string_transformed) == 0)
		cout << "Strings are equal.";
	else
		cout << "Strings are unequal.";
	return 0;
}

/*

References: 

1. https://www.geeksforgeeks.org/c-string-class-applications-set-2/
2. https://docs.microsoft.com/en-us/dotnet/api/system.string.compare?view=net-5.0
3. https://www.geeksforgeeks.org/converting-strings-numbers-cc/
4. https://stackoverflow.com/questions/313970/how-to-convert-stdstring-to-lower-case
5. https://www.google.com/search?q=convert+string+to+integer+c
6. https://www.techiedelight.com/convert-string-to-int-cpp/
7. https://www.cplusplus.com/reference/string/string/c_str/
8. https://www.cplusplus.com/reference/string/string/
9. https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/
10. https://www.tutorialspoint.com/how-to-convert-std-string-to-lower-case-in-cplusplus
11. https://www.cplusplus.com/reference/locale/tolower/
12. https://www.geeksforgeeks.org/transform-c-stl-perform-operation-elements/
13. https://www.cplusplus.com/reference/algorithm/transform/
14. https://stackoverflow.com/questions/56412349/stdcopy-failure-cannot-seek-vector-iterator-after-end
15. https://stackoverflow.com/a/37615528/14900011
16. https://www.cplusplus.com/reference/cstdio/gets/
17. https://www.cplusplus.com/reference/cstdio/fgets/
18. https://stackoverflow.com/a/33317961/14900011

*/