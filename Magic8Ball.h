#ifndef MAGIC8BALL_H
#define MAGIC8BALL_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

void magic8ball()
{
	const int ARRAY_LENGTH = 6;

	string eightBall[ARRAY_LENGTH];

	bool prgExit = false;

	srand(time(0));

	string userInput;

	eightBall[0] = "No";
	eightBall[1] = "Yes";
	eightBall[2] = "Perhaps...";
	eightBall[3] = "Most definitely yes!";
	eightBall[4] = "Almost positively not";
	eightBall[5] = "I think so...";

	cout << "Welcome to the Magic 8-ball!\n";
	cout << "Ask me a yes or no question to play, or type 'exit' to quit\n";

	while (!prgExit)
	{
		cout << "\nAsk me a question and I will tell the future!\n";
		getline(cin, userInput);

		if (userInput.compare("exit") == 0)
			prgExit = true;
		if (userInput.compare("") != 0 && userInput.compare("exit") != 0)
		{
			cout << eightBall[rand() % ARRAY_LENGTH] << endl;
			userInput = "";
		}
	}
	cout << "Thanks for playing!\n";
}

#endif 