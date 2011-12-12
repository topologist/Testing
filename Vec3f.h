#pragma once

class Vec3f
{
public:
	float x;
	float y;
	float z;

	Vec3f(void);
	Vec3f(float, float, float);
	~Vec3f(void);

	Vec3f Normalize();
	Vec3f operator+(const Vec3f arg);
	Vec3f operator-(const Vec3f arg);
};

