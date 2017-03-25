#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

void maxList() {
	int maximum = 0;
	int comparison;
	string filePath;

	cout << "Please input the file path name: ";
	cin >> filePath;

	ifstream myfile(filePath);

	if (myfile.is_open())
		while (myfile >> comparison) {
			maximum = max(maximum, comparison);
		}

	cout << "The maximum number is: " << maximum << endl;
}
