#include"Fraction.h"




	


int Fraction::get_integer() const
{
	return integer;
}
int Fraction::get_numerator() const
{
	return numerator;
}
int Fraction::get_denominator() const
{
	return denominator;
}



void Fraction::set_integer(int integer)
{
	this->integer = integer;
}
void Fraction::set_numerator(int numerator)
{
	this->numerator = numerator;
}
void Fraction::set_denominator(int denominator)
{
	this->denominator = denominator;
}

//			Constructors:
Fraction::Fraction()
{
	this->integer = 0;
	this->numerator = 0;
	this->denominator = 1;
	cout << "DefConstructor: \t" << this << endl;
}
Fraction::Fraction(int integer)
{
	this->integer = integer;
	this->numerator = 0;
	this->denominator = 1;
	cout << "Constructor: \t" << this << endl;
}
Fraction::Fraction(int numerator, int denominator)
{
	this->integer = 0;
	this->numerator = numerator;
	this->denominator = denominator;
	cout << "constructor: \t" << this << endl;
}
Fraction::Fraction(int integer, int numerator, int denominator)
{
	this->integer = integer;
	this->numerator = numerator;
	this->denominator = denominator;
	cout << "constructor: \t" << this << endl;
}
Fraction::~Fraction()
{
	cout << "destructor: \t" << this << endl;
}

//			Operators:
Fraction& Fraction::operator=(const Fraction& other)
{
	this->integer = other.integer;
	this->numerator = other.numerator;
	this->denominator = other.denominator;
	return*this;
}

Fraction& Fraction::operator*=(const Fraction& other)
{
	int a = 2;
	int b = 3;
	a = a * b;//a*=b;
	return *this = *this*other;
}

Fraction Fraction::operator++()
{
	this->integer++;
	return *this;
}
Fraction Fraction::operator++(int)
{
	Fraction temp = *this;
	this->integer++;
	return temp;
}

//			Methods:
void Fraction::to_proper()//переводит дробь в правильную
{
	integer = numerator / denominator;
	numerator = numerator % denominator;
}
void Fraction::to_improper()//переводит дробь в неправильную
{
	numerator = (integer*denominator) + numerator;
	this->integer = 0;
}
//int LCM(Fraction&  other)   //Least Common Multiplier
//{
//	this->to_improper();
//	other.to_improper();


//}
void Fraction::reduce()
{
	int value = this->numerator;
	if (value < 0)value *= -1;
	for (int i = value; i > 0; i--)
	{
		if (numerator%value == 0 && denominator%value == 0)
		{
			numerator /= value;
			denominator /= value;
			break;
		}
	}
	//сокращает дробь
}
Fraction Fraction::operator*(const Fraction&other) const
{
	Fraction left = *this;
	Fraction right = other;
	left.to_improper();
	right.to_improper();
	return Fraction(left.numerator * right.numerator, left.denominator*right.denominator);
}

void Fraction::Print()
{
	cout << integer << numerator << denominator;
}


//Fraction operator*(Fraction left, Fraction right)
//{
//	left.to_improper();
//	right.to_improper();
//	return Fraction(left.get_numerator()*right.get_numerator(), left.get_denominator()*right.get_denominator());
//}
Fraction operator/(Fraction left, Fraction right)
{
	left.to_improper();
	right.to_improper();
	return Fraction(left.get_numerator()*right.get_denominator(), left.get_denominator()*right.get_numerator());
}
Fraction operator+(Fraction left, Fraction right)
{
	left.to_improper();
	right.to_improper();
	return Fraction((left.get_numerator()*right.get_denominator()) + (left.get_denominator()*right.get_numerator()), (left.get_denominator()* right.get_denominator()));
}
Fraction operator-(Fraction left, Fraction right)
{
	left.to_improper();
	right.to_improper();
	return Fraction((left.get_numerator()*right.get_denominator()) - (left.get_denominator()*right.get_numerator()), (left.get_denominator()* right.get_denominator()));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Fraction& operator*=(Fraction& left, Fraction right)
//{
//	left = left * right;
//	return left;
//}
Fraction operator/=(Fraction left, Fraction right)
{
	left = left / right;
	return left;
}
Fraction operator+=(Fraction left, Fraction right)
{
	left = left + right;
	return left;
}
Fraction operator-=(Fraction left, Fraction right)
{
	left = left - right;
	return  left;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool operator==(Fraction left, Fraction right)
{
	left.to_improper();
	right.to_improper();
	/* left  = ((left.get_numerator()*right.get_denominator()),  (left.get_denominator()* right.get_denominator()));
	(left.get_denominator()*right.get_numerator()),
	return (left == right);*/
	return left.get_numerator()*right.get_denominator() == right.get_numerator()*left.get_denominator();
}

bool operator!=(const Fraction& left, const Fraction& right)
{
	/*left.to_improper();
	right.to_improper();
	return left.get_numerator()*right.get_denominator() != right.get_numerator()*left.get_denominator();*/
	return !(left == right);
}
bool operator<(Fraction left, Fraction right)
{
	left.to_improper();
	right.to_improper();
	return left.get_numerator()*right.get_denominator() < right.get_numerator()*left.get_denominator();
}
bool operator>(Fraction left, Fraction right)
{
	left.to_improper();
	right.to_improper();
	return left.get_numerator()*right.get_denominator() > right.get_numerator()*left.get_denominator();
}
bool operator<=(Fraction left, Fraction right)
{
	left.to_improper();
	right.to_improper();
	return left.get_numerator()*right.get_denominator() <= right.get_numerator()*left.get_denominator();
}
bool operator>=(Fraction left, Fraction right)
{
	left.to_improper();
	right.to_improper();
	return left.get_numerator()*right.get_denominator() >= right.get_numerator()*left.get_denominator();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ostream& operator<<(ostream& os, const Fraction& obj)
{
	if (obj.get_integer() != 0)os << obj.get_integer();
	if (obj.get_numerator() != 0)
	{
		if (obj.get_integer() != 0)os << "(" << obj.get_numerator() << "/" << obj.get_denominator() << ")";
		else os << obj.get_numerator() << "/" << obj.get_denominator();
	}
	if (obj.get_numerator() == 0 && obj.get_integer() == 0)os << 0;
	return os;
}
