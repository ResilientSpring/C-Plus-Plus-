/*
Write a program that prompts the user for two strings and then compares the strings 
for equality, but ignores case differences. Thus, "ok" and "OK" will compare as equal.
*/

// Reference: 
// 1. https://www.geeksforgeeks.org/c-string-class-applications-set-2/
// 2. https://docs.microsoft.com/en-us/dotnet/api/system.string.compare?view=net-5.0
// 3. https://www.geeksforgeeks.org/converting-strings-numbers-cc/
// 4. https://stackoverflow.com/questions/313970/how-to-convert-stdstring-to-lower-case
// 5. https://www.google.com/search?q=convert+string+to+integer+c
// 6. https://www.techiedelight.com/convert-string-to-int-cpp/
// 7. https://www.cplusplus.com/reference/string/string/c_str/
// 8. https://www.cplusplus.com/reference/string/string/
// 9. https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/
// 10. https://www.tutorialspoint.com/how-to-convert-std-string-to-lower-case-in-cplusplus
// 11. https://www.cplusplus.com/reference/locale/tolower/
// 12. https://www.geeksforgeeks.org/transform-c-stl-perform-operation-elements/
// 13. https://www.cplusplus.com/reference/algorithm/transform/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

	string first_string, second_string;
	int first_substract_from_second;

	cout << "Input two strings and the program will compare them for equality. \n";
	cout << "Case differences are ignored so \"ok\" and \"OK\" will compare as equal.\n";

	cout << "Now, enter the first string: ";
	getline(cin, first_string);

	cout << "Now, enter the second string: ";
	getline(cin, second_string);

	cout << "The result of comparing two strings you entered for equality: ";

	first_substract_from_second = stoi(second_string) - stoi(first_string);

	if (first_string.compare(second_string) == 0  || abs(first_substract_from_second) == 32)
		cout << "Strings are equal.";
	else
		cout << "Strings are unequal.";

	return 0;
}