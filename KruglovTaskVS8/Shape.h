#pragma once
#include "stdafx.h"

class Shape
{
public:
	Shape();
	~Shape();
	bool IsMoreLeft(Shape& shape);
	bool IsUpper(Shape& shape);
	virtual void Draw();

protected:
	int center_X, center_Y;

};

