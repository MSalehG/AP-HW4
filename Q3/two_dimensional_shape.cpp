#include <iostream>
#include "two_dimensional_shape.h"

TwoDimensionalShape::TwoDimensionalShape(double x, double y)
{
	this->center_x = x;
	this->center_y = y;
}

TwoDimensionalShape::TwoDimensionalShape(double x) : TwoDimensionalShape(x, 0)
{
}

TwoDimensionalShape::TwoDimensionalShape() : TwoDimensionalShape(0, 0)
{
}






