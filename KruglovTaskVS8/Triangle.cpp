#include "stdafx.h"
#include "Triangle.h"

using namespace std;


Triangle::Triangle()
{
	center_X = 0;
	center_Y = 0;
}

Triangle::Triangle(int x, int y)
{
	this->center_X = x;
	this->center_Y = y;
}

Triangle::~Triangle()
{
}

void Triangle::Draw()
{
	cout << "Triang. " << "Center points: " << "x - " << center_X << ", y - " << center_Y << endl;
}

//bool Triangle::IsMoreLeft(Triangle triangle)
//{
//	return (this->center_X < triangle.center_X);
//}