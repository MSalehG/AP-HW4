#include "point.h"

Point::Point(double x, double y, double z)
{
	this->px = x;
	this->py = y;
	this->pz = z;
}

Point::Point(double x, double y) :Point(x, y, 0)
{

}

Point::Point(double x) : Point(x, 0, 0)
{

}

Point::Point() : Point(0, 0, 0)
{

}
