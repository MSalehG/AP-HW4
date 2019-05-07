#include <iostream>
#include "cube.h"

Cube::Cube(double s, double x, double y, double z) : ThreeDimensionalShape(x, y, z)
{
	this->side = s;
}

Cube::Cube(double s, double x, double y) : Cube(s, x, y, 0)
{
}

Cube::Cube(double s, double x) : Cube(s, x, 0, 0)
{
}

Cube::Cube(double s) : Cube(s, 0, 0, 0)
{
}

Cube::Cube() : Cube(0, 0, 0, 0)
{
	std::cout << "The deafault constructor\n";
}

double Cube::area() const
{
	return (6 * this->side*this->side);
}

double Cube::volume() const
{
	return (this->side*this->side*this->side);
}

void Cube::print() const
{
	std::cout << "Cube side length = " << this->side << "\n";
	std::cout << "center-> (" << this->center_x << ", " << this->center_y << ", " << this->center_z
		<< ")\n";
	std::cout << "area of " << this->area() << " & volume of " << this->volume() << "\n";

}

Cube Cube::operator+(const Point& p) const
{
	Cube c{};
	std::cout << "The cordinates of the center of the cube was moved by "
		<< p.px << " along the x axis and " << p.py << " along the y axis and "
		<< p.pz << " along the z axis\n";
	c.center_x = this->center_x + p.px;
	c.center_y = this->center_y + p.py;
	c.center_z = this->center_z + p.pz;

	return c;
}

std::ostream& operator<<(std::ostream& os, Cube& c)
{
	c.print();

	return os;
}




