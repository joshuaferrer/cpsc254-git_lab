//10) Name/Story
//Burke Masles

#include <iostream>
#include <unistd.h>
#include <ctime>
#include <cstdlib>

int main() {
	std::string name;
	int storyNumber;
	std::cout << "Please imput your name" << std::endl;
	std::cin >> name;
	std::srand (std::time(NULL));
	storyNumber = std::rand() % 5 + 1;
	switch (storyNumber) {
		case 1:
		std::cout << name << " is sleeping and dies from a heart attack" << std::endl;
		break;
		case 2:
		std::cout << name << " runs out of air underwater and drowns" << std::endl;
		break;
		case 3:
		std::cout << name << " forgot to look both ways and was hit by a car" << std::endl;
		break;
		case 4:
		std::cout << name << " consumes poison and chokes" << std::endl;
		break;
		case 5:
		std::cout << name << " lived a happy life, dying of old age" << std::endl;
		break;
	}
	return 0;
}
