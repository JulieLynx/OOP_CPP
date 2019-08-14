#pragma once


#include<iostream>
using namespace std;
#define delimiter "\n--------------------------------------------\n"


class Fraction;
Fraction operator/(Fraction left, Fraction right);

Fraction operator+(Fraction left, Fraction right);

Fraction operator-(Fraction left, Fraction right);


Fraction operator/=(Fraction left, Fraction right);

Fraction operator+=(Fraction left, Fraction right);

Fraction operator-=(Fraction left, Fraction right);


bool operator==(Fraction left, Fraction right);


bool operator!=(const Fraction& left, const Fraction& right);

bool operator<(Fraction left, Fraction right);

bool operator>(Fraction left, Fraction right);

bool operator<=(Fraction left, Fraction right);

bool operator>=(Fraction left, Fraction right);

ostream& operator<<(ostream& os, const Fraction& obj);


class Fraction
{
	int integer;//целое 
	int numerator;// числитель
	int denominator;//знаменатель

public:
	int get_integer() const;
	int get_numerator() const;

	int get_denominator() const;



	void set_integer(int integer);

	void set_numerator(int numerator);

	void set_denominator(int denominator);

	//			Constructors:
	Fraction();

	Fraction(int integer);

	Fraction(int numerator, int denominator);

	Fraction(int integer, int numerator, int denominator);

	~Fraction();


	//			Operators:
	Fraction& operator=(const Fraction& other);


	Fraction& operator*=(const Fraction& other);


	Fraction operator++();

	Fraction operator++(int);


	//			Methods:
	void to_proper();

	void to_improper();




	//}
	void reduce();

	Fraction operator*(const Fraction&other) const;

	void Print();



};
