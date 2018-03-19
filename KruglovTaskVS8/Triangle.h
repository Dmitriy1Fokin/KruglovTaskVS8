#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	Triangle();
	Triangle(int x, int y);
	~Triangle();
	void Draw();
};

