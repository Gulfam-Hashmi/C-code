#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> x;
	char choice;
	do{
		int n;
		cout<<"Enter: ";
		cin>>n;
		x.emplace_back(n);
		cout<<"Do you want to add more (n/y)?: ";
		cin>>choice;
	}while(choice == 'y');
	
	for(int i=0; i< x.size() ; i++)
	{
		cout<<x[i]<<endl;
	}
	return 0;
}