/*Create a float called my_float, and a float pointer called my_float_ptr.Print out the address of both, 
the data stored in both, and use my_float_ptr to print out the data stored in my_float.Add a print 
statement to say which of the previous 5 outputs match
So for example, if both values are equal, print out "value of pointer and value of float are the same"*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	float my_float = 10;
	float* my_float_ptr = &my_float;

	cout << &my_float << endl;
	cout << &my_float_ptr << endl;
	cout << my_float << endl;
	cout << my_float_ptr << endl;
	cout << *my_float_ptr << endl;

	cout << "The address of the float and the value of the pointer are the same." << endl;
	cout << "The value of the float and the data of the float received from the pointer are the same." << endl;
}
