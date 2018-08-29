/**@file Triangle.h*/

#ifndef _TRIANGLE
#define _TRIANGLE

#include <string>

class Triangle
{
private:
	double sideA;
	double sideB;
	double sideC;
	double angleA;
	double angleB;
	double angleC;

	

public:
	Triangle();
	Triangle(double sideA, double sideB, double sideC);

	void setSideA(double sideA);
	void setSideB(double sideB);
	void setSideC(double sideC);

	double getSideA()const;
	double getSideB()const;
	double getSideC()const;

	double getAngleA()const;
	double getAngleB()const;
	double getAngleC()const;


	double getTriangleArea()const;
	std::string getTriangleType()const;


};

#endif // !_TRIANGLE

