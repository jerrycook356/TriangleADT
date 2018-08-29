/**@file Triangle.cpp*/

#include "Triangle.h"
#include <cmath>
#include <string>

const double PI = 3.141592653589793238462643383279;
Triangle::Triangle()
{
	sideA = 3.0;
	sideB = 4.0;
	sideC = 5.0;

	//angles are derived from length of sides using law of cosines
	angleA = acos((pow(sideB, 2) + pow(sideC, 2)-pow(sideA,2))/ (2 * (sideB * sideC)))*(180/PI);
	angleB = acos((pow(sideA, 2) + pow(sideC, 2)-pow(sideB,2)) / (2 * (sideA * sideC)))*(180/PI);
	angleC = 180 - (angleA + angleB);

}//end default constructor

Triangle::Triangle(double _sideA, double _sideB, double _sideC)
{
	sideA = _sideA;
	sideB = _sideB;
	sideC = _sideC;


	//angels are derived from sides using the law of cosines
	
	angleA = acos((pow(sideB, 2) + pow(sideC, 2) - pow(sideA, 2)) / (2 * (sideB * sideC)))*(180 / PI);
	angleB = acos((pow(sideA, 2) + pow(sideC, 2) - pow(sideB, 2)) / (2 * (sideA * sideC)))*(180 / PI);
	angleC = 180 - (angleA + angleB);
}//end contructor

void Triangle::setSideA(double sideA)
{
	sideA = sideA;
}//end setSideA

void Triangle::setSideB(double sideB)
{
	sideB = sideB;
}//end setSideB

void Triangle::setSideC(double sideC)
{
	sideC = sideC;
}//end setSideC

double Triangle::getSideA() const
{
	return sideA;
}//end getSideA

double Triangle::getSideB() const
{
	return sideB;
}//end getSideB

double Triangle::getSideC() const
{
	return sideC;
}//end getSideC

double Triangle::getAngleA() const
{
	return angleA;
}//end getAngleA

double Triangle::getAngleB() const
{
	return angleB;
}//end getAngleB

double Triangle::getAngleC() const
{
	return angleC;
} //end getAngleC

double Triangle::getTriangleArea() const
{
	std::string type = getTriangleType();
	double area;
	if (type == "Right Triangle")
	{
		area = (sideA * sideB) / 2;
	}
	if (type == "Equilateral Triangle")
	{
		area = (sqrt(3) / 4)*(pow(sideA, 2));
	}
	if (type == "Isosceles Triangle")
	{
		double height = sqrt(pow(sideA, 2) - (pow(sideB, 2) / 4)); //get height 
		area = (sideA * height) / 2;
	}

	
	return area;
}//end getTriangleArea

std::string Triangle::getTriangleType() const
{
	if ((angleA == 90) || (angleB == 90) || (angleC == 90))
	{
		return "Right Triangle";
	}
	else if ((sideA == sideB) && (sideA == sideC))
	{
		return "Equilateral Triangle";
	}
	else if (((sideA == sideB) && (sideA != sideC)) || ((sideB == sideC) && (sideB != sideA)))
	{
		return "Isosceles Triangle";
	}
}//end getTriangleType
