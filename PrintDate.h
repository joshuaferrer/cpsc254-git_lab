#include <ctime>
#include <iostream>

using namespace std;

void printDate {


	time_t t = time(0); 
	struct tm * now = localtime( & t );
	cout<< (now->tm_year + 1900) << '-'
<< (now->tm_mon + 1) << '-' << now->tm_mday << endl;


}
