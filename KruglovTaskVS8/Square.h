#pragma once
#include "Shape.h"
class Square :
	public Shape
{
public:
	Square();
	Square(int x, int y);
	~Square();
	void Draw();
	//bool IsMoreLeft(Square square);
};

