#include <iostream>
using namespace std;

void print(int x)
{
	cout << "[";
	for(int i = 1 ; i <= x; i++)
	{
		cout << i << ' ';
	} 
	cout<<"] ";
}

void reverse(int y)
{
	cout << "[";
	for(int i = y ; i >= 1; i--)
	{
		cout << i << ' ';
	} 
	cout<<"] "<<endl;
}

int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	for(int i = 1 ; i <= n ; i++)
	{
		print(i);
		reverse(i);
		cout<<endl;
	}	
	return 0;
}