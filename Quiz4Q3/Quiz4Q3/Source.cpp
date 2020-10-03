/*For an array, sum up the even and odd numbers, then print out if the sum of the even 
numbers is greater than the sum of the odd numbers.For example, [1, 4, 2, 8, 2, 2, 7, 7] 
has even sum 4 + 2 + 8 + 2 + 2 = 18 and odd sum 1 + 7 + 7 = 15, so print out "even sum is larger".
Like the previous question, include a size variable and match it to your test case so the size of 
the array is known.
hint: One sum will always be greater than the other, and there will always be at least 
one evenand odd number in the array.Consider trying your code on a few test cases to make sure it works.*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	int size = 8;
	int arr[8] = { 1, 4, 2, 8, 2, 2, 7, 7 };
	int evenSum = 0;
	int oddSum = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			evenSum += arr[i];
		}
		else {
			oddSum += arr[i];
		}
	}

	if (evenSum > oddSum) {
		cout << "Even sum is larger." << endl;
	}
	else {
		cout << "Odd sum is larger." << endl;
	}
}
