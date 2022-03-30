//Triangle.h
#pragma once
#include <cmath>
#include <string>
#define PI 3.14159265
using namespace std;
class Triangle
{
public:
	class Triad 
	{
		double a;
		double b;
		double c;
	public:
		double GetA() const; 
		double GetB() const; 
		double GetC() const; 
		void SetA(double a); 
		void SetB(double b); 
		void SetC(double c); 
		double GetSum();

		void Init(double a, double b, double c);
		void Display()const;
		void Read();

		string ToString()const;
	};
private:
	Triad triad;
public:
	double GetArea();
	double GetAlpha();
	double GetBeta();
	double GetGamma();

	void Init(double a, double b, double c);
	void Display()const;
	void Read();
	string ToString()const;
};