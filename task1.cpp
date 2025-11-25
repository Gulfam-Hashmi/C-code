#include <iostream>
using namespace std;

int main()
{
	int n;
	int pass = 0;
	int fail = 0;
	cout<< "Enter the number of students: ";
	cin >> n;
	int i = 0;
	while(i < n)
	{
		double marks;
		cout<< "Mark 1: ";
		cin >> marks;
		
		if(marks >= 50)
		{
			 cout<<"Pass";
			 pass++;
		}else{
			cout<<"Fail";
			fail++;
		}
		cout<<endl;
		i++;
	}
	
	cout <<"Total PASS students: " <<pass<<endl;
	cout <<"Total FAIL students: " <<fail<<endl;
	
	double percentage = (pass / n) * 100;
	if(percentage >= 80)
	{
		cout<<"Good result";
	}
	else 
	{
		cout<<"Poor result";
	}
	
	return 0;
}
		