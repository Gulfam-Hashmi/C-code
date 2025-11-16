#include "Point3d.h"
#include "Plane3d.h"
#include <iostream>

using namespace std;

int main()
{
	Plane3d plane1(1 ,2 , 3, 4);
	Point3d point1(1, 0 , 1);
	//Is a point lies on the plane
	if(plane1.isOnPlane(point1))
	{
		cout<<"It is on the Plane"<<endl;
	}else{
		cout<<"It is not on the Plane"<<endl;
	}
	//Are plane equal
	Plane3d plane2(1, 2, 3, 4);
	if(plane1 == plane2)
	{
		cout<<"Equal"<<endl;
	}else{
		cout<<"Not Equa;"<<endl;
	}
	
	//is Parallel
	if(plane1.isParallel(plane2))
	{
		cout<<"Are Parallel"<<endl;
	}else{
		cout<<"Not Parallel"<<endl;
	}
	//Distance of a point from a plane
	Point3d point2(1, 1 , 1);
	cout<<plane1.Distance(point2);
	return 0;
}