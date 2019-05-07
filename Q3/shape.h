#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include "point.h"


class Shape;


class Shape
{
public:
	virtual double area() const = 0;
	virtual double volume() const = 0;
	virtual void print() const = 0;
	friend std::ostream& operator<<(std::ostream& os, Shape& sh) {
		sh.print();
		return os;
	}


private:

};






#endif