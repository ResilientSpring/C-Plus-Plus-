#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

string readFile(string);
int numIn(string);
int ssIn(string);

int main(void) {

	string benchmark_name = "c17";
	string fileName = "E:\\Users\\JoeDunbar\\Documents\\Verilog_files\\Verilog_files\\" + benchmark_name + "\\" + benchmark_name + ".v"; //input file
	string testFileName = "E:\\Users\\JoeDunbar\\Documents\\Verilog_files\\Verilog_files\\" + benchmark_name + "\\" + benchmark_name + "test.v"; //input file 
	string testName = readFile(fileName);
	int testInputs = numIn(testFileName);
	int SSIn = ssIn(testFileName);
	string Name = readFile(fileName);


}

string readFile(string fileName) {
	ifstream inFile;
	inFile.open(fileName.c_str());
	if (!inFile) {

		cerr << "Unable to open file 2.txt";
		exit(1);
	
	}

	bool stored = false;
	string line;
	while (!inFile.eof() && !stored) {
		getline(inFile, line);
		if ((line.rfind("module") != string::npos)) {
			line = line.substr(line.find_first_of("e") + 1, line.find_first_of("(") - line.find_first_of("e") - 1);
			line = deleteSpaces(line);
			stored = true;

		}
	}
	return line;
}

string deleteSpaces(string phrase) {
	size_t space = phrase.find_first_of(" ");
	while (space != string::npos) {

		phrase.replace(space, 1, "");
		space = phrase.find_first_of(" ");
	
	}

	return phrase;
}
