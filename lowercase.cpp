#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;
void counting_lowercase();
int main()
{
counting_lowercase();
return 0;
}

void counting_lowercase()
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




