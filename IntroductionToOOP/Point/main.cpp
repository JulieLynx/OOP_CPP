#include<iostream>
using namespace std;


class Point
{
	double x;
	double y;
public:
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	void set_x(double x)
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
	void set_y(double y)
	{
		this->y = y;
	}

	double distance(Point other)
	{
		/*double result_x = this->x-other.x;
		double result_y = this->y-other.y;/
		return sqrt(result_x*result_x + result_y*result_y);*/
		return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
	}

	
};



void main()
{
	setlocale(LC_ALL, "Russian");

	double a;
	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;
	Point* pA = &A;
	cout << pA->get_x() << "\t" << pA->get_y() << endl;
	cout << (*pA).get_x() << "\t" << (*pA).get_y() << endl;
	Point B;
	B.set_x(2);
	B.set_y(4);
	cout << A.distance(B) << endl;
	
	

}
