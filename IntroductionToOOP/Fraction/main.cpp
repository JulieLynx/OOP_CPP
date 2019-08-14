#include"Fraction.h"



void main()
{
	Fraction A(4, 1, 2);
	Fraction B(5, 3, 10);
	cout << A << "\t" << B << endl;
	cout << delimiter << endl;

	cout << A << " * " << B << " = " << A * B << endl; cout << delimiter << endl;
	cout << A << " / " << B << " = " << A / B << endl; cout << delimiter << endl;
	cout << A << " + " << B << " = " << A + B << endl; cout << delimiter << endl;
	cout << A << " - " << B << " = " << A - B << endl; cout << delimiter << endl;

	cout << " *= " << (A *= B) << endl; cout << delimiter << endl;
	cout << " /= " << (A /= B) << endl; cout << delimiter << endl;
	cout << " += " << (A += B) << endl; cout << delimiter << endl;
	cout << " -= " << (A -= B) << endl; cout << delimiter << endl;

	cout << (A == B) << endl; cout << delimiter << endl;
	cout << (A != B) << endl; cout << delimiter << endl;
	cout << (A >= B) << endl; cout << delimiter << endl;
	cout << (A <= B) << endl; cout << delimiter << endl;
	cout << (A < B) << endl; cout << delimiter << endl;
	cout << (A > B) << endl; cout << delimiter << endl;

	cout << A << " is " << ++A << endl; cout << delimiter << endl;
	cout << B << " is " << B++ << endl; cout << delimiter << endl;

	Fraction C(1, 1, 2);
	Fraction D(1, 5, 11);
	cout << C << endl;
	cout << D << endl;
	cout << (C != D) << endl;

}