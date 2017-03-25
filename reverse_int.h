#include <iostream>
#include <queue>

void reverse()
{
	std::queue<int> q;
	
	int num = 0;
	
	std::cout << "Enter an integer: ";
	std::cin >> num;
	while(num >= 1)
	{
		q.push(num % 10);
		num /= 10;
	}
	while(!q.empty())
	{
		std::cout << q.front();
		q.pop();
	}
	std::cout << std::endl;
}
