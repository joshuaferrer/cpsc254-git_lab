#include <iostream>
#include <fstream>

using namespace std;

void battingAverage()
{
  ifstream inFile;
  inFile.open("input.txt");
  double a,b,average;
  inFile >>a>>b;
  cout<< "The batting average is "<<a\b;
  inFile.close();
}
