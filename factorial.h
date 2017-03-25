#ifndef FACTORIAL_H
#define FACTORIAL_H

#include <iostream>

void factorial() {
	int num = 0, counter = 0, result = 1;

	std::cout << "Enter number: ";
	std::cin >> num;

	counter = num;

	do {
		result *= counter;
		counter--;
	} while (counter > 0);

	std::cout << "The factorial of " << num << " is: " << result << std::endl;
}

#endif
