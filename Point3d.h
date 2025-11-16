#ifndef bsdsf24a034_lab07
#define bsdsf24a034_lab07

#include <iostream>
#include <string>

using namespace std;

class Point3d
{
protected:
    float x, y, z;
public:
    Point3d();
    Point3d(float, float, float);
    void displace(float, float, float);
    float distance(const Point3d &) const;
    bool operator==(const Point3d &) const;
    bool operator!=(const Point3d &) const;
    Point3d operator*(float) const;
    friend Point3d operator*(float, const Point3d &);
    Point3d operator/(float) const;
    friend ostream & operator<<(ostream & strm, const Point3d &);
    friend istream & operator>>(istream & strm, Point3d &);
	
	//all getter required for the Plane3d
	float getX() const {return x;}
	float getY() const {return y;}
	float getZ() const {return z;}
};
 
#endif

