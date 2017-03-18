#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
void randomFruit()
{
	srand(time(NULL));
	string fruits[6] = {"Mangle", "Apple","Jack fruit", "Orange", "Grape", "Avocado"};
	cout <<  fruits[rand() % 6] << endl;
}
