// TriangleADT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Triangle.h"

int main()
{
	Triangle right =   Triangle();
	

	std::cout << std::endl << "sideA = " << right.getSideA();
	std::cout << std::endl << "sideB = " << right.getSideB();
	std::cout << std::endl << "sideC = " << right.getSideC();
	std::cout << std::endl << "angleA = " << right.getAngleA();
	std::cout << std::endl << "angleB = " << right.getAngleB();
	std::cout << std::endl << "angleC = " << right.getAngleC();

	std::cout << std::endl << "area is = " << right.getTriangleArea();
	std::cout << std::endl << "The type is = " << right.getTriangleType();


	std::cin.get();
	std::cin.get();

	return 0;

}
