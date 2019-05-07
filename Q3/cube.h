#ifndef CUBE_H
#define CUBE_H

#include <iostream>
#include "three_dimensional_shape.h"
#include "point.h"

class Cube;
std::ostream& operator<<(std::ostream&, Cube&);

class Cube : public ThreeDimensionalShape{
public:
	Cube(double, double, double, double);
	Cube(double, double, double);
	Cube(double, double);
	Cube(double);
	Cube();

	virtual double area() const override;
	virtual double volume() const override;
	virtual void print() const override;

	virtual Cube operator+(const Point&) const ;


	double side;

private:

};

















#endif