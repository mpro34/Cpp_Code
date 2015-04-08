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
	Point pT(10,16);
	Point pA[3] = {p, p1, p2};
	//Create a point array after defining the points above.
	PointArray pArray(pA,3);       //Create new PointArray object pArray with pA.
    pArray.push_back(pT);          //Add new Point pT to the end of pArray.
	//pArray.resize(5);              //Resize pArray to 5 total Points
	pArray.insert(3,pT);
	std::cout << "here: " << pArray.showNum(1) << std::endl;
	return 0;
};