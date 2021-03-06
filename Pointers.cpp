#include <cmath>
#include <iostream>
#include <cstdlib>


//C++ Problem 4.1
int sum(const int a, const int b) { return a+b; }
double sum(const double a, const double b) { return a+b; }

//C++ Problem 4.2
/*
	sum(1, 10.0) returns a syntax error, because the compiler attempts 
	to convert to the necessary numerical type, but because a int sum and 
	double sum were both created, the compiler becomes confused about which
	function to execute.
*/

//C++ Problem 4.3 & 4.4
/*
	If I provided a three argument sum function as well as a 3 or 4 argument sum function.
	The compiler would choose the 3 argument function for sum(3,5,7) because this would
	optimize the time of the program. C++ compiler chooses which functions would create 
	a smoother and efficient program.
*/
inline int sum (const int a, const int b, int c = 0, int d = 0) {
	return a+b+c+d;
}

//C++ Problem 4.5
//An array and an int should be used for an arbitrary number of arguments. The array contains the
// arguments and the int indicates the length of the array.

int sum (int sPtr[], int sLen) {
	int result = 0;
	for (int i = 0; i < sLen; ++i) {
		result += sPtr[i];
	}
	return result;
}

//C++ Problem 4.6
//Same problem as 4.5, but utilizing recursion instead of a loop.

/*int sumPtr (int sPtr[], int sLen) {
	int result = 0;
	int i = sLen - 1;
	if (i > -1) {
		result += sPtr[i];
		sum(sPtr[], i);
	}
	else {
		return result;
	}
}*/

//C++ Problem 5
/* Calculates Pi from a simulation of n dart throws within a circle of 
radius 1, which is inscribed within a square. The ratio of the darts inside 
the circle to the total darts thrown times four equals the area which can
be used to calculate Pi.
*/
double calcPi(int n) {
	srand(0);
	double x = rand() % 1;
	double y = rand() % 1;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		int dist = sqrt(x*x + y*y);
		if (dist < 1) {
			count++;
		}
	}
	double area = 4 * (count/n); //Area = 4 * darts in circle/total darts
	double pi_result = 4 * (area/4);
	return pi_result;
}




//C++ Problem 6
/*void printArray(int arr[], int size) {
	int result[size];
	for (int i=0; i < size; ++i) {
		if (i < size-1) {
			result[i] = arr[i];
			result[i+1] = ", ";
		}
		else {
			result[i] = intArr[i];
		}
	}
	std::cout << result << std::endl;
}*/

//C++ Problem 7.1 - Counts number of characters in s.
int strLength(const char * s) {
    int count =0;
	const char * cPtr = s;
	while (*cPtr != '\0') {
		count++;
		cPtr++;
		std::cout << *cPtr << " and " << &cPtr << std::endl;
	}
	return count;
};

//C++ Problem 7.2 - Swap Integers with Pass-by-Reference
void swapInts(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//C++ Problem 7.3 - Swap Integers using pointers
void swapValues(int * a, int * b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//C++ Problem 7.4 - Swap Integers by swapping pointers
//    Contains a pointer to a pointer to a value.
void swapPtrs(int **a, int **b) {
    int *temp = *a;   //Temp hold the address of pointer a.
    *a = *b;          //Swap Pointers or "addresses".
    *b = temp;	         
}

void prob_seven() {
    //C++ Problem 7.5 - Various Pointer "one-liners".
    char *oddOrEven = "Never odd or even";
    //1. Assigns nthCharPtr to the 6th char of oddOrEven
    char *nthCharPtr = oddOrEven + 6;
    //2. Advances nthCharPtr 2 spaces with pointer arithmetic
    nthCharPtr+=2;
    //3. Print value that nthCharPtr points to
    std::cout << "value1: " << *nthCharPtr << std::endl;
    //4. Creates a pointer to a pointer (nthCharPtr)
    char **pointerPtr = &nthCharPtr;
    //5. Accesses value that pointerPtr is pointing to. (address of nthCharPtr)
    std::cout << "value2: " << *pointerPtr << std::endl;
    //6. Accesses value that nthCharPtr is pointing to through pointerPtr
    std::cout << "value3: " << **pointerPtr << std::endl;
    //7. Updates the pointer of nthCharPtr
    nthCharPtr++;
    //8. Prints how far away nthCharPtr is from the beginning of the string.
    char val = *nthCharPtr;
    int count = 0;
    while (val != 'N') {
	    count++;
        nthCharPtr--;
		val = *nthCharPtr;
    };
	std::cout << "Count: " << count << std::endl;
};


int main() {
	std::cout << "Hello, World!" << std::endl;
	/*char tester[] = {'a', 'b', 'c', 'd', 'e', 'F', '\0'};
	/std::cout << strLength(tester);
	int x = 5, y = 6;
	int *ptr1 = &x, *ptr2 = &y;
	swapPtrs(&ptr1,&ptr2);
	std::cout << x << " and " << y << std::endl;*/
	prob_seven();
	return 0;
}