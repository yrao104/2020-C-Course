/*Write a function that takes in two doubles and compares them up to 3 points of precision, 
called “three_point_comp”, returning a boolean if they are the same or not. For example, 123.456 
and 123.457 returns false, but 10.5555 and 10.5556 returns true. Make sure to test it on multiple inputs!
If you are stuck, remember, after the first 3 digits after the decimal, it doesn't matter any more.*/

#include <iostream>
#include <string>

using namespace std;

bool  three_point_comp(double decimal1, double decimal2);

int main() {
	/*double num1 = 123.456;
	double num2 = 123.457;*/
	double num1 = 10.555;
	double num2 = 10.5556;
	cout << three_point_comp(num1, num2) << endl;
}

bool three_point_comp(double decimal1, double decimal2) {
	decimal1 = decimal1 / 0.00001;
	decimal2 = decimal2 / 0.00001;

	decimal1 = decimal1 - int(decimal1) % 100;
	decimal2 = decimal2 - int(decimal2) % 100;

	if (decimal1 == decimal2) {
		return true;
	}
	else {
		return false;
	}
}
