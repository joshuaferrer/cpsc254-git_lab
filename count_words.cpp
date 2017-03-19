#include<iostream>
using namespace std;

int main()
{	
	char c;
	int word = 0;
	cout << "Enter a sentence." << endl;
	cin.get(c);
	
	while(c != '\n' && c != '\0')
	{
		if(c == ' ')
			word++;
		cin.get(c);
	}
	if(c != '\0')
		cout << "There are " << word + 1<< " word(s) in your sentence." << endl;
	else
		cout << "There are 0 word in your sentence." << endl;	
	return 0;
}
