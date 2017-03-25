#ifndef VolumeOfCubes_H
#define VolumeOfCubes_H

#include <iostream>

void main() {


	float side = 0;
	float volume = 0.0;

	std::cout << "Enter on of a side of the cube: ";

	std::cin >> side;

	volume = side * side * side;

	std::cout << "The volume is: " << volume << std::endl;


}

#endif 
