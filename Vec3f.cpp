#include "Vec3f.h"
#include <math.h>

Vec3f::Vec3f(void)
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vec3f::Vec3f(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vec3f::~Vec3f(void)
{
}

Vec3f Vec3f::Normalize()
{
	float magnitude = sqrt(x*x + y*y + z*z);
	return Vec3f(this->x / magnitude, this->y / magnitude, this->z / magnitude);
}

Vec3f Vec3f::operator+(const Vec3f arg)
{
	return Vec3f(this->x + arg.x, this->y + arg.y, this->z + arg.z);
}

Vec3f Vec3f::operator-(const Vec3f arg)
{
	return Vec3f(this->x - arg.x, this->y - arg.y, this->z - arg.z);
}