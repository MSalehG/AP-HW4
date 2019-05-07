#ifndef THREE_DIMENSIONAL_SHAPE_H
#define THREE_DIMENSIONAL_SHAPE_H

#include "shape.h"
#include "point.h"


class ThreeDimensionalShape : public Shape{
public:
	ThreeDimensionalShape(double, double, double);
	ThreeDimensionalShape(double, double);
	ThreeDimensionalShape(double);
	ThreeDimensionalShape();

	virtual double area() const = 0;
	virtual double volume() const = 0;
	virtual void print() const = 0;

	double center_x;
	double center_y;
	double center_z;

private:

};





#endif