#include <cmath>
#include <iostream>
#include <cstdlib>
#include "geometry.h"
#include "geometry.cpp"

/*
 * This File contains MIT C++ Assignment 3
 */
 
 //2.1
 
 
 int main() {
	std::cout << "Hello, World!" << std::endl;
	Point p(0,0);
	Point p1(2,3);
	Point p2(5,6);
	Point pA [3];
	pA[0] = p;
	pA[1] = p1;
	pA[2] = p2;
	//Create a point array after defining the points above.
	PointArray parr(pA,3);
	parr.resize(5);
	std::cout << "here: " << "parr" << std::endl;
	
    std::cout << p.getX() << std::endl;
	return 0;
};