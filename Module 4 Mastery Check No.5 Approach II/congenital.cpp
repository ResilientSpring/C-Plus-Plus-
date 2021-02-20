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
	int i = 0;

	cout << "Input two strings and the program will compare them for equality. \n";
	cout << "Case differences are ignored so \"ok\" and \"OK\" will compare as equal.\n";

	cout << "Now, enter the first string: ";
	// getline() will read the ENTIRE line, leading to variable overflow. 
//	getline(cin, first_string);
	fgets(array_first_string, 210, stdin);
//	gets_s(array_first_string);  // [16], [15]

	cout << "Now, enter the second string: ";
	//	getline(cin, second_string);
	fgets(array_second_string, 210, stdin); // [17]

	cout << "The result of comparing two strings you entered for equality: ";

	for (i = 0; array_first_string[i]; i++)
		array_first_string[i] = tolower(array_first_string[i]);

	for (i = 0; array_second_string[i]; i++)
		array_second_string[i] = tolower(array_second_string[i]);

	// Convert character array of string into string class
	first_string = array_first_string;  // [18]
	second_string = array_second_string;  // [18]

	if (first_string.compare(second_string) == 0)
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