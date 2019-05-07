#include <iostream>
#include "sphere.h"

Sphere::Sphere(double r, double x, double y, double z) : ThreeDimensionalShape(x, y, z)
{
	this->radius = r;
}

Sphere::Sphere(double r, double x, double y) : Sphere(r, x, y, 0)
{
}

Sphere::Sphere(double r, double x) : Sphere(r, x, 0, 0)
{
}

Sphere::Sphere(double r) : Sphere(r, 0, 0, 0)
{
}

Sphere::Sphere() : Sphere(0, 0, 0, 0)
{
	std::cout << "The deafault constructor\n";
}

double Sphere::area() const
{
	return (4 * (3.1415)*this->radius*this->radius);
}

double Sphere::volume() const
{
	return (4 * (3.1415)*this->radius*this->radius*this->radius / 3);
}

void Sphere::print() const
{
	std::cout << "Sphere radius = " << this->radius << "\n";
	std::cout << "center-> (" << this->center_x << ", " << this->center_y << ", " << this->center_z
		<< ")\n";
	std::cout << "area of " << this->area() << " & volume of " << this->volume() << "\n";

}

Sphere Sphere::operator+(const Point& p) const
{
	Sphere s{};
	std::cout << "The cordinates of the center of the sphere was moved by "
		<< p.px << " along the x axis and " << p.py << " along the y axis and "
		<< p.pz << " along the z axis\n";
	s.center_x = this->center_x + p.px;
	s.center_y = this->center_y + p.py;
	s.center_z = this->center_z + p.pz;

	return s;
}


std::ostream& operator<<(std::ostream& os, Sphere& s)
{
	s.print();

	return os;
}




