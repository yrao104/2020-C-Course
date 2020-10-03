/*Create an array of size 3 that stores integer pointers. Then create 3 integers, 
and assign the pointers in the array to those 3 memory locations. Finally, use a loop 
through the array to print out the data at those 3 locations.
Remember there are 4 parts to this: the array of int pointers, the 3 normal integers, 
assignment, and the loop to print them*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	int* arr[3];

	int num1 = 4;
	int num2 = 29;
	int num3 = 946;

	arr[0] = &num1;
	arr[1] = &num2;
	arr[2] = &num3;

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}
}