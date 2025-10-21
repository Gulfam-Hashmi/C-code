#include "test.h"
#include<iostream>

using namespace std;
int main()
{
	Array a1(3);
	Array a2(4);
	cout<<"INput for array 1" <<endl;
	a1.input();
	cout<<"INput for array 2" <<endl;
	a2.input();
	cout<<"output for array 1" <<endl;
	a1.display();
	cout<<"output for array 1" <<endl;
	a2.display();
	a1 = ::move(a2);
	a1.display();
	return 0;
}