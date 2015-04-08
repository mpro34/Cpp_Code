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
	void PointArray::resize ( int newSize ) {
		//Allocates a new array of Pointer Objects, size n.
        Point *pts = new Point [ newSize ];
        int minSize = ( newSize > m_size ? m_size : newSize );
		//Sets the member values to the values of this newly created array
        for (int i = 0; i < minSize ; i++) {
            pts[i] = m_points[i];
		};
		//Deallocates the newly created array!!
        delete [] m_points ;
        m_size = newSize;
		m_points = pts;
    };
	
	void PointArray::printArray() {
		for (int i=0; i < m_size; i++) {
		    std::cout << m_points[i].getX() << ", " << m_points[i].getY() << std::endl;
	    };
	}; 
	
	//Add a Point to the end of the array.
	void PointArray::push_back(const Point &p) {
		resize(m_size + 1);
		m_points[m_size - 1] = p;
	};
	//Insert a point at position and shifting the other elements to the right.
	void PointArray::insert(const int position, const Point &p) {
		resize(m_size+1); //Add 1 to current size of PointArray.
	//	Point* newPoints = new Point[m_size+1]; 
		for (int i=m_size; i > position-1; i--) {
            m_points[i] = m_points[i-1];
		};
		m_points[position-1] = p;
	};
	//Remove a point at position (pos) and shifting elements left.
	void PointArray::remove(const int pos) {
		resize(m_size-1);
		
	};
	//Get the size of the array.
	const int PointArray::getSize() {
		
	};
	//Remove everything from the array and set size to 0.
	void PointArray::clear() {
		
	};
	//Get a pointer to the element at position.
	const Point *PointArray::get(const int position) {
		
	};
 
 
 
 
 
 
 
