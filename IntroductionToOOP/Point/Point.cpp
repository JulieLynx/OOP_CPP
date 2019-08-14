#include"Point.h"


double Point::get_x() const
{
	return x;
}
double Point::get_y() const
{
	return y;
}
void Point::set_x(double x)
{
	if (x >= -100 && x <= 100)
	{
		this->x = x;
	}
	else
	{
		throw exception("Bad x");
	}
}
void Point::set_y(double y)
{
	this->y = y;
}

double Point::distance(Point other)
{
	/*double result_x = this->x-other.x;
	double result_y = this->y-other.y;/
	return sqrt(result_x*result_x + result_y*result_y);*/
	return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
}
