#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "two_dimensional_shape.h"

class Square;
std::ostream& operator<<(std::ostream&, Square&);

class Square : public TwoDimensionalShape{
public:
	Square(double, double, double);
	Square(double, double);
	Square(double);
	Square();

	virtual double area() const override;
	virtual double volume() const override;
	virtual void print() const override;

	virtual Square operator+(const Point&) const;

	double side;

private:

};


















#endif