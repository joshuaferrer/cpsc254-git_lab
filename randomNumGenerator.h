#include<iostream>
#include<cstdlib>

using namespace  std;

int randomNumGenerator(){
  int randomNum;
  randomNum = rand() % 1000 + 1;
  cout << "Your random number is: " << randomNum;

  return randomNum;
}
