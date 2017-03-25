#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void countWords()
{	
	ifstream file;
	string name, content;
	int word = 0;
	cout << "Enter the file's name: ";
	getline(cin, file);
	file.open(name.txt);
	while(!file,eof())
	{
		file >> content;
		word++;
	}
	cout << "There are " << word + 1 << " word(s) in your sentence." << endl;
	file.close();	
}
