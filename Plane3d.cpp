#include "Point3d.h"
#include "Plane3d.h"
#include <iostream>
#include <cmath>

using namespace std;
//default constructor
Plane3d::Plane3d()
{
	a = 0.0; b = 0.0; c = 0.0 ; d = 0.0;
}
//parametarized constructor
Plane3d::Plane3d(float a, float b, float c, float d)
{
	this->a = a; this->b = b; this->c = c; this->d = d;
}

//Is a point lies on the plane
bool Plane3d::isOnPlane(const Point3d & point) const
{
	float result = a * point.getX() + b * point.getY() + c * point.getZ() + d;
	return (result == 0);
}
//Are the two planes equal
bool Plane3d::operator==(const Plane3d & other) const
{
	float ratio1 = a / other.a;
	float ratio2 = b / other.b;
	float ratio3 = c / other.c;
	float ratio4 = d / other.d;
	return (ratio1 == ratio2) && (ratio2 == ratio3) && (ratio3 == ratio4);
}
//Are the two planes parallel
bool Plane3d::isParallel(const Plane3d& other) const
{
	float ratio1 = a / other.a;
	float ratio2 = b / other.b;
	float ratio3 = c / other.c;
	return (ratio1 == ratio2) && (ratio2 == ratio3);
}
//Distance of a point from a plane
bool Plane3d::Distance(const Point3d& point) const
{
	float numerator = abs(a * point.getX() + b * point.getY() + c * point.getZ() );
	float denominator = sqrt(a * a + b * b + c * c);
	return (numerator/denominator);
}
