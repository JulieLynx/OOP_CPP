#include"Point.h"




void main()
{


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
