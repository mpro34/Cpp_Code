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
const string vowels = " aeiou ";

string pigLatinify ( const string s) {
    if (s. size () == 0) {
        // oops , empty string
        return s;
    }
    if(s. find ("qu") == 0) { // Starts with "qu"
        return s. substr (2, s. size () -2) + "-" + s. substr (0, 2) + "ay";
    } else if( vowels . find (s [0]) != string :: npos ) { // Starts with a vowel
        return s + "-way";
    } else {
       return s. substr (1, s. size () -1) + "-" + s[0] + "ay";
    }
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
	
	string tester = "beast";
	//tester = ;
	cout << pigLatinify(tester) << endl;
	
	//SPolygon(pArray, 1);
	//std::cout << "here: " << pArray.showNum(3) << std::endl;
	return 0;
};