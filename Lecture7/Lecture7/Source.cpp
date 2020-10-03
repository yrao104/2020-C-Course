/*Create a struct that has 4 member variables. An integer, a boolean, and a pointer that 
contains an array of integers. Name the struct "temple", the integer "no_bricks", the 
boolean "has_pharoah", a pointer to the integer array "wealth", along with a weath_size 
integer that is the size of the wealth array.
Note: Remember that a pointer to an array is not int* wealth[]. This creates an array of 
integer pointers! You want a pointer that will point to an array.*/

#include <iostream>
#include <string>

using namespace std;

struct temple {
	int no_bricks;
	bool has_pharoah;
	int wealth_size;
	int* wealth;
};

void print_temple(temple all_temples[], int size);

int main(){
	int a_arr[4] = { 1, 2, 3, 4 };
	temple temple_a{ 100, true, 4, a_arr };

	int b_arr[6] = { 2, 4, 6, 8, 10, 12 };
	temple temple_b{ 35, false, 6, b_arr };

	int c_arr[6] = { 4, 8, 12, 16, 20, 24 };
	temple temple_c{ 225, true, 6, c_arr };

	int d_arr[2] = { 500, 1000 };
	temple temple_d{ 550, false, 2, d_arr };

	temple all_temples[] = { temple_a, temple_b, temple_c, temple_d };

	print_temple(all_temples, 4);
}

void print_temple(temple all_temples[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Number of Bricks: " << all_temples[i].no_bricks << ". ";
		cout << "Wealth: ";
		for (int j = 0; j < all_temples[i].wealth_size; j++) {
			int* wealth = all_temples[i].wealth;
			int brick = wealth[j];
			cout << brick << " ";
		}
		cout << "\n";
	}
}