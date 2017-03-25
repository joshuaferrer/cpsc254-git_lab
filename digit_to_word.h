#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include<iostream>
#include<cstring>
using namespace std;
void dothing(){
	int a=0;
	string b;
	
	do
{
	cout <<" input the number 1-10 to translate them into word. (11 for exist)" <<endl;
	cin>> a;
	switch(a){
	case 1: cout <<"one"<<endl;break;
	case 2: cout <<"two"<<endl;break;
	case 3: cout <<"three"<<endl;break;
	case 4: cout <<"four"<<endl;break;
	case 5: cout <<"five"<<endl;break;
	case 6: cout <<"six"<<endl;break;
	case 7: cout <<"seven"<<endl;break;
	case 8: cout <<"eight"<<endl;break;
	case 9: cout <<"nine"<<endl;break;
	case 10: cout <<"ten"<<endl;break;
}
}while(a>=1 && a<=10);
	
}

]
#endif
