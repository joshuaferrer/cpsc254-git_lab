#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputStream("scores.txt");
	
	if (!inputStream)
	{
		cerr << "Failed to open file." << endl;
	}
	else
	{
		
		int score;
		cout << "Scores: ";
		int sum = 0;
		int numberOfScores = 0;
		while(inputStream >> score)
		{
			sum += score;
			numberOfScores++;
		}

		double average = static_cast<double>(sum) / static_cast<double>(numberOfScores);
		cout << "The average scores in text file are: " << average << endl;

		inputStream.close();
	}

}
