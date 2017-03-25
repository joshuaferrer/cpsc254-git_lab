// 12) Write in a file
// Author: Joshua Ferrara
// 18 March 2017

#include <fstream>
#include <iostream>

using namespace std;

void savefile()  {
	string reminder;
	cout << "Enter note: ";
	cin >> reminder;

	ofstream out("note.txt");
	out << reminder;
	out.close();
}
