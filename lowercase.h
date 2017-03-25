#ifndef countingLowercase_H
#define countingLowercase_H
#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include "main.cpp"
using namespace std;


void countingLowercase()
{
int countLow=0;
char next;
ifstream filelower;
filelower.open("string.txt");
while(filelower.get(next) )
{
if (islower(next))
{
countLow++;
}
}
cout<<"The Number of lowercase letters in the file is "<<countLow<<endl;
return;

}

#endif


