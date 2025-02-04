#pragma once

class Rectangle
{
public:
	Rectangle(float width = 0.0f, float height = 0.0f)
		:width(width), height(height)
	{
	}

	float GetArea() { return width * height; }

	float GetSize() { return 2.0f * (width + height); }

private:
	float width;
	float height;
};