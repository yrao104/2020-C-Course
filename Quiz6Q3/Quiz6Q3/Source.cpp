/*Given 3 sides of a (possibly non-right) triangle, write a function called tri_area that takes in 3 doubles, a, b, and c, 
and computes the area, returning it as a double.
If you aren't sure how to do this, look up Heron's formula. You will most likely need some additional math functions. 
Inside of cmath, you can use the sqrt function. Add this to the top, next to your other #incldues: #include <cmath> 
Then, you can call sqrt(), which is a function that takes in a number and returns its square root. Ex. cout << sqrt(400); 
//prints 20
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double  tri_area(double a, double b, double c);

int main() {
	int a = 3;
	int b = 4;
	int c = 5;
	cout << tri_area(a, b, c) << endl;
}

double  tri_area(double a, double b, double c) {
	int s = (a + b + c) / 2;
	int area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}