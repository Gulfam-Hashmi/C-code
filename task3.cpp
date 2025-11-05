#include <iostream>
using namespace std;

int main()
{
	int max1,max2;
	int six1 = 0,six2 = 0;
	int sum1 = 0;
	int sum2 = 0;
	int i =1;
	while(i <= 5)  //Round 1: Player 1 rolled 4, Player 2 rolled 6 
	{
		int num1,num2;
		
		cout<<"Round "<<i<<": Player 1 rolled ";
		cin >>  num1;
		if(num1 > max1) max1 = num1;
		if(num1 ==6) six1++; 
		sum1 += num1;
		
		cout<<", Player 2 rolled ";
		cin >>num2;
		if(num2 > max2) max2 = num2;
		if(num2 ==6) six2++; 
		sum2 += num2;
		cout<<endl; 				//Player 2 Total: 20, Sixes: 2, Max Roll: 6 
		i++;
	}
	
	cout<< "Player total: " <<sum1<<", Sixes: "<<six1<<", Max Roll: "<<max1<<endl;
	cout<< "Player total: " <<sum2<<", Sixes: "<<six1<<", Max Roll: "<<max2<<endl;
	return 0;
}