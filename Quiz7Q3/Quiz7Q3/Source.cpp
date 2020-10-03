/*What happens if you create two structs, then add them as member variables to each other? 
Make a wallet struct and person struct. Then make the person struct have a wallet member variable, 
and the wallet struct have a person member variable. Finally, attempt to create a new person. 
Describe what occurs when you do this. Are there any problems?
To reiterate, make sure to add person to the wallet struct as a member variable, and 
wallet to the person struct as a member variable.
*/

#include <iostream>
#include <string>

using namespace std;

struct wallet {
	struct person;
};

struct person {
	struct wallet;
};

int main() {
	person person_a(wallet wallet_a);
}