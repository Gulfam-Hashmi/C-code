#include <iostream>
using namespace std;

bool iseven(int x)
{
	if(x%2 == 0)
	{
		return true;
	}else{
		return false;
	}
}

int main()
{
	int n = 16;
	int y = 17;
	cout << "Is n is even: " << (iseven(n) ? "Yes" : "No") <<endl;
	cout << "Is y is even: " << (iseven(y) ? "Yes" : "No") <<endl;
	
	cout<<n <<" " <<y<<endl;
	swap(n,y);
	cout<<n <<" " <<y<<endl;
	
	return 0;
}