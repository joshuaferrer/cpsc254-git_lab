#include <iostream>
#include <time.h>

int main ()
{
	time_t rawtime;
	struct tm * ptm;
	time(&rawtime);

	ptm = gmtime(&rawtime);

	std::cout << "The UTC time is " << ptm << std::endl;
}

