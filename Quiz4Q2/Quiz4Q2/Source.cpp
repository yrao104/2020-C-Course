/*Given an array of incrementally increasing values, find the missing valueand print it out.
For example, the array could look like[1, 2, 3, 4, 5, 7, 8], and you should print out 6. 
For[-2, 0, 1, 2, 3], print out - 1. For the array size, use a variable called size and match 
it to the length of the array(ex. 7 for the first example, 5 for the second)
Hint: The array can start at any value, and subsequent values always increase by one, 
unless the value is missing.There will not be any test cases where there is no missing value(ex.[1, 2, 3]).*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	int size = 5;
	int arr[5] = { -2, 0, 1, 2, 3 };

	for (int i = 0; i < size-1; i++) {
		if (arr[i] + 1 != arr[i+1]) {
			cout << arr[i] + 1;
		}
	}

}