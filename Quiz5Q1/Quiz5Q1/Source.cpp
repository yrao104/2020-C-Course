/*Can you assign the memory address of an integer pointer to an integer pointer ? 
If so, write the code to do so, if not, explain why.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int num = 10;

	int* ptr = &num;
	int** dblPtr = &ptr;

	cout << ptr << endl;
	cout << dblPtr << endl;
}