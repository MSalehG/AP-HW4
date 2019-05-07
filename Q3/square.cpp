#include <iostream>
#include "square.h"

Square::Square(double s, double x, double y) : TwoDimensionalShape(x, y)
{
	this->side = s;
}

Square::Square(double s, double x) : Square(s, x, 0)
{
}

Square::Square(double s) : Square(s, 0, 0)
{
}

Square::Square() : Square(0, 0, 0)
{
	std::cout << "The deafault constructor\n";
}

double Square::area() const
{
	return (this->side*this->side);
}

double Square::volume() const
{
	return 0.0;
}

void Square::print() const
{
	std::cout << "Square side length = " << this->side << "\n";
	std::cout << "center-> (" << this->center_x << ", " << this->center_y << ")\n";
	std::cout << "area of " << this->area() << "\n";

}

Square Square::operator+(const Point& p) const
{
	Square s{};
	std::cout << "The cordinates of the center of the square was moved by "
		<< p.px << " along the x axis and " << p.py << " along the y axis\n";
	s.center_x = this->center_x + p.px;
	s.center_y = this->center_y + p.py;

	return s;
}

std::ostream& operator<<(std::ostream& os, Square& s)
{
	s.print();

	return os;
}




