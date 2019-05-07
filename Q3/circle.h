#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "two_dimensional_shape.h"
#include "point.h"

class Circle;
std::ostream& operator<<(std::ostream&, Circle&);

class Circle : public TwoDimensionalShape{
public:
	Circle(double, double, double);
	Circle(double, double);
	Circle(double);
	Circle();

	virtual double area() const override;
	virtual double volume() const override;
	virtual void print() const override;

	virtual Circle operator+(const Point&)const ;

	double radius;

private:

};
















#endif