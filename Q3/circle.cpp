#include <iostream>
#include "circle.h"

Circle::Circle(double r, double x, double y) : TwoDimensionalShape(x, y)
{
	this->radius = r;
}

Circle::Circle(double r, double x) : Circle(r, x, 0)
{
}

Circle::Circle(double r) : Circle(r, 0, 0)
{
}

Circle::Circle() : Circle(0, 0, 0)
{
	std::cout << "The deafault constructor\n";
}

double Circle::area() const
{
	//The formula for the area of a circle
	return (this->radius*this->radius*(3.1415));
}

double Circle::volume() const
{
	//The volume of 2D shapes is zero
	return 0.0;
}

void Circle::print() const
{
	std::cout << "Circle radius = " << this->radius << "\n";
	std::cout << "center-> (" << this->center_x << ", " << this->center_y << ")\n";
	std::cout << "area of " << this->area() << "\n";

}


Circle Circle::operator+(const Point& p) const 
{
	//Defining a new variable so as to avoid changing "this"
	Circle c{};
	std::cout << "The cordinates of the center of the cirlce was moved by "
		<< p.px << " along the x axis and " << p.py << " along the y axis\n";
	c.center_x = this->center_x + p.px;
	c.center_y = this->center_y + p.py;

	return c;
}

std::ostream& operator<<(std::ostream& os, Circle& c)
{
	//Executing the print function to print the desired info then returning the os intact
	c.print();

	return os;
}




