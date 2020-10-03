/*Write the code to print an arrow pointing right for a given size value.
It should print stars up to size, then a single row of size + 1, and then a decreasing number of stars back down.
Included in the images is the version for size = 3.*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	int size = 3;
	int currentSize = 1;

	while (currentSize <= size + 1)
	{
		for (int i = 0; i < currentSize; i++) {
			cout << "*";
		}

		cout << "\n";
		currentSize += 1;
	}

	currentSize -= 1;

	while (currentSize > 0) {
		for (int i = 0; i < currentSize; i++) {
			cout << "*";
		}

		cout << "\n";
		currentSize -= 1;
	}

}