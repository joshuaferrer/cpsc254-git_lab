#include<iostream>
using namespace std;

void countWords()
{	
	char c;
	int word = 0;
	cout << "Enter a sentence." << endl;
	cin.get(c);
	
	while(c != '\n')
	{
		if(c == ' ')
			word++;
		cin.get(c);
	}
	cout << "There are " << word + 1 << " word(s) in your sentence." << endl;	
}
