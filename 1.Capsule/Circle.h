#pragma once

class Circle
{
public:
	Circle(float radius = 0.0f)
		:radius(radius)
	{
	}

	float GetArea() { return pi * (radius * radius); }

	float GetSize() { return 2 * pi * radius; }

private:
	float radius;
	float pi = 3.1415;
};