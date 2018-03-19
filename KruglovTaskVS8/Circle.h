#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
public:
	Circle();
	Circle(int x, int y);
	~Circle();
	void Draw();
	//bool IsMoreLeft(Circle circle);
};

