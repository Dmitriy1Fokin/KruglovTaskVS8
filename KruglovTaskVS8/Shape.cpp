#include "stdafx.h"
#include "Shape.h"

using namespace std;

Shape::Shape()
{
	center_X = 0;
	center_Y = 0;
}

Shape::~Shape()
{
}

bool Shape::IsMoreLeft(Shape& shape)
{
	return (this->center_X < shape.center_X);
}

bool Shape::IsUpper(Shape& shape)
{
	return this->center_Y < shape.center_Y;
}

void Shape::Draw()
{
	cout << "Shape\n";
}