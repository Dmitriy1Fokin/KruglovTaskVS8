#include "stdafx.h"
#include "Square.h"

using namespace std;

Square::Square()
{
	center_X = 0;
	center_Y = 0;
}

Square::Square(int x, int y)
{
	this->center_X = x;
	this->center_Y = y;
}

Square::~Square()
{
}

void Square::Draw()
{
	cout << "Square. " << "Center points: " << "x - " << center_X << ", y - " << center_Y << endl;
}