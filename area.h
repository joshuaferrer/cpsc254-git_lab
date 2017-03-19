#include <iostream>
using namespace std;

int main() {
	int length, width, area;

	cout << "Enter the length: ";
	cin >> length;

	cout << "Enter the width: ";
	cin >> width;

	area = length*width;

	cout << endl << "The area is " << area << endl;

	return 0;
}
