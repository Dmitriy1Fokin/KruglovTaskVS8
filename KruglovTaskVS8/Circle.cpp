#include "stdafx.h"
#include "Circle.h"

using namespace std;


Circle::Circle()
{
	center_X = 0;
	center_Y = 0;
}

Circle::Circle(int x, int y)
{
	this->center_X = x;
	this->center_Y = y;
}

Circle::~Circle()
{
}

void Circle::Draw()
{
	cout << "Circle. " << "Center points: " << "x - " << center_X << ", y - " << center_Y << endl;
}
