#pragma once
#include "stdafx.h"

class Shape
{
public:
	Shape();
	Shape(int x, int y);
	~Shape();
	bool IsMoreLeft(const Shape& shape) const;
	bool IsUpper(Shape& shape);
	virtual void Draw();

protected:
	int center_X, center_Y;

};

