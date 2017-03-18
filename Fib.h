#include <iostream>
using namespace std;

int dofib(int n){
	if(n==0 || n==1){
	return 1;
	}
	return dofib(n-1) + dofib(n-2);
}

void Fib(){
	int n;
	cout << "=== Fibonacci Seqeunce ===\n";
	cout << "How many Sequences would you like to see? \n";
	cin >> n;
	for (int i = 0; i <=n; i++){
	cout << "Fibonacci Sequence of " << i << " is " << dofib(i) << "\n";
	}
}
