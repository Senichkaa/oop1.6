//Triangle.cpp
#include "Triangle.h"
#include <cmath>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

double Triangle::Triad::GetSum()
{
	return (a + b + c);
}

void Triangle::Triad::Init(double a, double b, double c)
{
	SetA(a);
	SetB(b);
	SetC(c);
}

void Triangle::Triad::Display() const
{
	cout << ToString() << endl;
}

void Triangle::Triad::Read()
{
	double a;
	double b;
	double c;
	cout << endl;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	cout << "c = ? "; cin >> c;
	Init(a, b, c);
}

string Triangle::Triad::ToString() const
{
	stringstream s;
	s << a << "," << b << "," << c;
	return s.str();
}

void Triangle::Triad::SetA(double a)
{
	this->a = a;
}
void Triangle::Triad::SetB(double b)
{
	this->b = b;
}
void Triangle::Triad::SetC(double c)
{
	this->c = c;
}
double Triangle::Triad::GetA() const
{
	return a;
}
double Triangle::Triad::GetB() const
{
	return b;
}
double Triangle::Triad::GetC() const
{
	return c;
}

double Triangle::GetArea()
{
	double p = triad.GetSum() / 2.0;
	return sqrt(p * (p - triad.GetA()) * (p - triad.GetB()) * (p - triad.GetC()));
}

double Triangle::GetAlpha()
{
	return 180.0 - GetGamma() - GetBeta();
}

double Triangle::GetBeta()
{
	return asin(2.0 * GetArea() / (triad.GetC() * triad.GetA())) * 180 / PI;
}

double Triangle::GetGamma()
{
	return acos((triad.GetC() * triad.GetC() - triad.GetA() * triad.GetA() - triad.GetB() * triad.GetB()) /
		(-2.0 * triad.GetA() * triad.GetB())) * 180 / PI;
}

void Triangle::Init(double a, double b, double c)
{
	triad.SetA(a);
	triad.SetB(b);
	triad.SetC(c);
}

void Triangle::Display() const
{
	cout << triad.ToString() << endl;
}

void Triangle::Read()
{
	double a;
	double b;
	double c;
	cout << endl;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	cout << "c = ? "; cin >> c;
	triad.Init(a, b, c);
}

string Triangle::ToString() const
{
	stringstream s;
	triad.ToString();
	return ToString();
}
