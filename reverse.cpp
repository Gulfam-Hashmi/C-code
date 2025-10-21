#include <iostream>
using namespace std;
void reverse(int x)
{
	cout<<"Here is the reversed string"<<endl;
	while(x !=0)
	{
		cout<<x%10;
		x = x /10;
	}
	cout<<endl;
}
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	reverse(n);
	return 0;
}