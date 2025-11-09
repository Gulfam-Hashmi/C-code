#include <iostream>
using namespace std;
	
int main()
{
	int score = 0;
	cout << "Lets start the game"<< endl;
	for(int i = 0 ; i < 5 ; i++)
	{
		int x;
		int N1 = rand() %10;
		int N2 = rand() %10;
		int s = N1 + N2;
		int m = N1 - N2;
		int mul = N1 * N2;
		cout << "N1: " <<N1<< "\t N2: "<< N2<<endl;
		cout << "Sum: ";
		cin >> x;
		if(x == s)
		{
			score++;
			cout<<endl;}
		else
		{ 
			cout<<"try again"<<endl;
			cin>>x;
			if(x == s)
			{
				score++;
				cout<<endl;
			}
		}
		
		cout << "Difference: ";
		cin >> x;
		if(x == m)
		{
			score++;
			cout<<endl;
		}
		else
		{ 
			cout<<"try again"<<endl;
			cin>>x;
			if(x == m)
			{
				score++;
				cout<<endl;
			}
		}
		
		cout << "Product: ";
		cin >> x;
		if(x == mul)
		{ score++; cout<<endl;}
		else
		{ 
			cout<<"try again"<<endl;
			cin>>x;
			if(x == mul)
			{
				score++;
				cout<<endl;
			}
		}
	}
	
	cout<<"Total score: "<< score;
		
	return 0;
}