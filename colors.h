// 28. print random color
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;

void getRandomNumber()
{
	string color[8] = {"red", "blue", "yellow", "green", "brown", "black",
		 "white", "purple"};
	srand(time(NULL));
	int randomNum = rand() % 8;
	cout <<  color[randomNum] << endl;
}
