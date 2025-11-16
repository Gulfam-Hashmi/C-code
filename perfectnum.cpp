#include <iostream>
using namespace std;

int sumofdivisor(int x)
{
	int sum = 0;
	for(int i =1; i<x/2 ; i++)
	{
		if(x%i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

bool perfectnumber(int n)
{
	bool c = false;
	if(sumofdivisor(n) == n)
	{
		c = true;
	}
	return c;
}

int main()
{
	perfectnumber(6);
	return 0;
}