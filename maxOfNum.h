#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

void maxList(){
	int maximum = 0;
	int comparison;

	ifstream myfile("numberedList.txt");

	if (myfile.is_open())
		while (myfile >> comparison){
		maximum = (maximum, comparison);
		}
	}

	cout << "The maximum number is: " << maximum << endl;
}

