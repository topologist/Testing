#include <iostream>
#include "Vec3f.h"

int main(void)
{
	Vec3f v1(1.0f, 3.14f, 2.17f);
	Vec3f v2 = v1.Normalize();

	std::cout << "v1 [" << v1.x << " " << v1.y << " " << v1.z << "]\n";
	std::cout << "v2 [" << v2.x << " " << v2.y << " " << v2.z << "]\n";

	return 0;
}