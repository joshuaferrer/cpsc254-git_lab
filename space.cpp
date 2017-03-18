#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream file;
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
return 0;
}
