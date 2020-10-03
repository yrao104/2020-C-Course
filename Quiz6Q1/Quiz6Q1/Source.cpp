/*Create an array that stores 5 integers of your choice. Then, write a function that 
takes in an integer array and an integer for the size of the array. Modify a value in 
the array inside the function, then print out the contents of the array. Is the array 
passed by value or by reference? How do you know?*/

#include <iostream>
#include <string>

using namespace std;

void changeValue(int arr[], int size);

int main() {
	int arr[5] = { 4, 9, 23, 48, 790 };
	int size = 5;
	changeValue(arr, size);
	/*for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}*/
}

void changeValue(int arr[], int size){
	arr[0] = 10;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}