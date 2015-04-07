/*
 * Add function prototypes and class definitions here.
 */
// This is start of the header guard.
#ifndef ADD_H
#define ADD_H
class Point {
	private:
	    int m_x;
		int m_y;
	public:
//Default Contructor for a Point object.	
	Point(int x=0,int y=0) {
		m_x = x;
		m_y = y;
	};
	//Member functions defined in geometry.cpp
	const int getX();
    const int getY();
	void setX(const int new_x);
	void setY(const int new_y);
};

class PointArray {
	private:
	    Point *m_points;
		int m_size;
	public:
	    //Default constructor
		PointArray() {
			m_size = 0;
			m_points = new Point[0];
		};
	    //Default constructor which takes in an array of Point objects and a size.
	    PointArray(const Point points[], const int size) {
			for (int i=0; i < size; i++){
				m_points[i] = points[i];
			};
		};
		
		//Copies points from PointArray pv into the constructed object in question.
		PointArray(const PointArray &pv) {
			m_size = pv.m_size;
			m_points = new Point[m_size];
			for (int i=0; i < m_size; i++) {
				m_points[i] = pv.m_points[i];
			}
		};
		
		//Deallocates memory for a PointArray object.
		~PointArray() {
			delete [] m_points;
		}
		void resize(int n);
};








//This is the end of the header guard.
#endif