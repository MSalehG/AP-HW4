#ifndef TWO_DIMENSIONAL_SHAPE_H
#define TWO_DIMENSIONAL_SHAPE_H

#include <iostream>
#include "shape.h"
#include "point.h"


class TwoDimensionalShape : public Shape{
public:
	TwoDimensionalShape(double, double);
	TwoDimensionalShape(double);
	TwoDimensionalShape();

	virtual double area() const = 0;
	virtual double volume() const = 0;
	virtual void print() const = 0;

	double center_x;
	double center_y;

private:

};


#endif