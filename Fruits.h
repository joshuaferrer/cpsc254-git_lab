#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
void randomFruit()
{
	srand(time(NULL));
	string fruits[7] = {"Mangle", "Apple","Jack fruit", "Orange", "Grape", "Avocado","Others"};
	cout <<  fruits[rand() % 7] << endl;
}
