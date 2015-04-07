#include <cmath>
#include <iostream>
#include <cstdlib>
#include "geometry.h"
/*
 * Add function definitions here.
 */
	const int Point::getX() {
		return m_x;
	};
    const int Point::getY() {
		return m_y;
	};
	void Point::setX(const int new_x) {
		m_x = new_x;
	};
	void Point::setY(const int new_y) {
		m_y = new_y;
	};
	
//Use new[] and delete[], respectively to allocate and de-allocate memory.
    void PointArray::resize(int n) {
	    int old_values = (m_size < n) ? n : (m_size-n);
	    Point *new_points = new Point[n];                  //Allocates a new array of Pointer Objects, size n.
	    for (int i=0; i < m_size; i++) {                   //Sets the member values to the values of this newly created array
		    new_points[i] = m_points[i];
	    };
		delete[] new_points;                               //Deallocates the newly created array!!
	    m_size = n;
		m_points = new_points;
    };
 
 
 
 
 
 
 
