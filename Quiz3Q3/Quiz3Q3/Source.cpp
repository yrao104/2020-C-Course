/*Print out a multiplication table for a given value of n. 
Here is an example for n = 4. Note: it may look weird for large values as the spacing gets off. 
This is fine as long as the values are correct*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	int n = 4;
	int constant = n;
	int num = 1;

	while (n > 0) {
		for (int i = 1; i <= constant; i++) {
			cout << num*i << " ";
		}
		cout << "\n";
		num += 1;
		n -= 1;
	}

		cout << "\n";

}