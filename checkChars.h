#include <iostream>
#include <fstream>
#include <string>

int main()
{
	int totalChar = 0;
	std::string line;
	std::fstream readin ("sample.txt");
	
	if (readin.is_open())
	{
		while(getline(readin, line))
		{
			totalChar += line.length();
		}
	}

	std::cout << "Total characters present in file are: " << totalChar << std::endl;

	return 0;
}
