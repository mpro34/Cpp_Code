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
			m_size = size;
			m_points = new Point[size+1];
			for (int i=0; i < size+1; i++){
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
		void printArray();
		//Some Point Array Operations member functions.
		void resize(int n);
		//Add a Point to the end of the array.
		void push_back(const Point &p);
		//Insert a point at position and shifting the other elements to the right.
		void insert(const int position, const Point &p);
		//Remove a point at position (pos) and shifting elements left.
		void remove(const int pos);
		//Get the size of the array.
		const int getSize();
		//Remove everything from the array and set size to 0.
		void clear();
		//Get a pointer to the element at position.
		const Point *get(const int position);
		
};








//This is the end of the header guard.
#endif