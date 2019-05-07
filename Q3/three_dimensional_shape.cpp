#include <iostream>
#include "three_dimensional_shape.h"

ThreeDimensionalShape::ThreeDimensionalShape(double x, double y, double z)
{
	this->center_x = x;
	this->center_y = y;
	this->center_z = z;
}

ThreeDimensionalShape::ThreeDimensionalShape(double x, double y) : ThreeDimensionalShape(x, y, 0)
{
}

ThreeDimensionalShape::ThreeDimensionalShape(double x) : ThreeDimensionalShape(x, 0, 0)
{
}

ThreeDimensionalShape::ThreeDimensionalShape() : ThreeDimensionalShape(0, 0, 0)
{
}





