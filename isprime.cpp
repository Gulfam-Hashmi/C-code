#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    int point = sqrt(n);
    if (n <= 1) 
        return false;
    for(int i =2; i<=point; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
} 
int main()
{
	int i =2;
	while(i<=20)
	{
		if(isPrime(i)== true)
		{
			cout<<i<<endl;
		}
		i++;
	}
	return 0;
}