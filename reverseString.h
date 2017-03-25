//Reverse a string
//Steven Harrison

#ifndef REVERSESTRING_H
#define REVERSESTRING_H

#include <iostream>
#include <string>

void reverseString(){
	std::string strToReverse;
	std::string reversed = "";
	std::cout<<"Enter a string to reverse: ";
	std::cin>> strToReverse;

	int strSize = strToReverse.length();
	std::string currentChar;
	for(int i = strSize-1; i >= 0; --i){
		currentChar = strToReverse[i];
		reversed.append(currentChar);
	}

	std::cout<<"reversed string: "<< reversed<< std::endl;
}

#endif
