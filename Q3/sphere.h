#ifndef SPHERE_H
#define SPHERE_H

#include <iostream>
#include "three_dimensional_shape.h"

class Sphere;
std::ostream& operator<<(std::ostream&, Sphere&);


class Sphere : public ThreeDimensionalShape{
public:
	Sphere(double, double, double, double);
	Sphere(double, double, double);
	Sphere(double, double);
	Sphere(double);
	Sphere();

	virtual double area() const override;
	virtual double volume() const override;
	virtual void print() const override;

	virtual Sphere operator+(const Point&) const;

	double radius;

private:


};


















#endif
