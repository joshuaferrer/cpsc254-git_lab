#ifndef SPACE_H
#define SPACE_H
#include "main.cpp"
#include <fstream>
using namespace std;

void spacecount(ifstream file){
 
  file.open("contents.txt");
  char ch;
  int count =0;
  while(!file.eof())
    {
      file.get(ch);
      if(ch == ' ')
	count++;
    }
  cout << "number of blank spaces in file are " << count;
  file.close();
}
#endif
