#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void linecounter() {
  int counter = 0;
  string line;
  
  fstream myfile("lines.txt");
  
  if (myfile.is_open()){
    while (getline(myfile, line))
      counter++;
    myfile.close();
  }
  
  else
    cout << "unable to open file";
  
  cout << "Number of lines: " << counter << endl;  
 
}

