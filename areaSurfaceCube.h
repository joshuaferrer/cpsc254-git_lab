#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void areaSurfaceCube() {
	int edge = 0;
	cout << "Enter the size of the cube's edge." << endl;
	cin >> edge;
	cout << "The surface area of your cube is " << 6 * edge << "." << endl;
	system("pause");
}
