#pragma once
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::pow;

void areaSurfaceCube() {
	int edge = 0;
	cout << "Enter the size of the cube's edge." << endl;
	cin >> edge;
	cout << "The surface area of your cube is " << 6 * pow(edge,2) << "." << endl;
	system("pause");
}
