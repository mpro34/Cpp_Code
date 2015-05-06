#include <cmath>
#include <iostream>
#include <cstdlib>
#include <string>
#include "geometry.h"
#include "geometry.cpp"

/*
 * This File contains MIT C++ Assignment 3
 */
 using namespace std;
//Transform words into Pig-Latin
string pigLatinify ( const string s) {
	const string vowels = "aeiou";
	string result = "";
	if (s.compare("qu") == 0) {
		result += s.substr(2,s.length()) + "quay";
	}
	else if (vowels.find(s) == 0) {
		result += s + "-way";
	}
	else {
		result += s.substr(1,s.length()) + "-" + s[0] + "ay";
	}
	return result;
};
 
 
 
 int main() {
	Point p(1,2);
	Point p1(2,3);
	Point p2(5,6);
	Point pT(10,16);
	Point pI(23,31);
	Point pA[3] = {p, p1, p2};
	//Create a point array after defining the points above.
	PointArray pArray(pA,3);       //Create new PointArray object pArray with pA.
    pArray.push_back(pT);          //Add new Point pT to the end of pArray.
	pArray.resize(5);              //Resize pArray to 5 total Points
	pArray.insert(3,pI);
	pArray.getSize();
	//pArray.printArray();
	pArray.get(5);
    pArray.clear();              //Clear the contents of the Point Array.
	pArray.getSize();
	//pArray.printArray();
	
	string tester = "quest";
	//tester = ;
	cout << pigLatinify(tester) << endl;
	
	//SPolygon(pArray, 1);
	//std::cout << "here: " << pArray.showNum(3) << std::endl;
	return 0;
};