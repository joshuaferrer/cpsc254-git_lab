#include <iostream>
#include <fstream>
#include <string>

void totlaChars()
{
	int totalChar = 0;
	std::string line;
	std::string filename;
	std::cout << "What is the file name: ";
	std::cin >>> filename;

	std::fstream readin (filename.c_str());
	
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
