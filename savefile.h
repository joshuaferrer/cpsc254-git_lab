// 21) Write in a file
// Author: Joshua Ferrara
// 18 March 2017

#include <fstream>
#include <iostream>

using namespace std;

void savefile()  {
	string title;
	cout << "Enter a title for the note: ";
	getline(cin, title);

	string reminder;
	cout << "Enter note for " << title << endl;
	getline(cin, reminder);

	ofstream out(title.append(".txt").c_str());
	out << reminder;
	out.close();
}
