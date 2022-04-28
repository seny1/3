#pragma once
#include <iostream>
using namespace std;

class Circle
{
public:
	double GetRadius();
	void SetRadius(double);
	string GetColor();
	void SetColor(string);
	double area(double);
	double perimeter(double);
private:
	double radius;
	string color;
};

class Vector
{
public:
	void SetCoordinateX(double);
	void SetCoordinateY(double);
	double GetCoordinateY();
	double GetCoordinateX();
	double lenght_of_vector(double, double);
	void printCoordinates();
	double scalarProduct(double, double, double, double);
private:
	double coordinateX;
	double coordinateY;
};

class Complex
{
private:
	double x;
	double y;
public:
	double GetX();
	void SetX(double valueX);
	double GetY();
	void SetY(double valueY);
	void Print(double, double);
	Complex Sum(Complex, Complex);
};
