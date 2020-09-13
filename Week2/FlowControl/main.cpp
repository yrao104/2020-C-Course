#include <iostream>
#include <string>

using namespace std;

//you can use else if as well and else
//you can put boolean values into if statements
//Relational Opertors
    // > : greater than
    // < : less than
    // >= : greater than or equal to
    // <+ : less than or equal to
    // == : equal to
    // != : not equal to
//Boolean Operators
    // &&: and (both conditions must be satisfied)
    // || : or (only 1 condition needs to be satisfied)

int main()
{
    int secret = 0;

    //condition inside if statement must evaulate to true(1 in binary)/false(0 in binary)
    if (secret < 100)
    {
        cout << "2 digits or less!" << endl;
    }
    if (secret > 0)
    {
        cout << "POSITIVE!" << endl;
    }
    if (secret <= 0 || secret > 2000)
    {
        cout << "It is weird" << endl;
    }
    if(secret != 100)
    {
        cout << "It's not 100!" << endl;
    }

    bool is_coding = true;
    int time_spent = 50;

    if(is_coding && time_spent > 10)
    {
        cout << "coding intensifies" << endl;
    }
    //if = 0; then it is false
    //if not 0; it is true
    if(time_spent)
    {
        cout << "coding intensifies" << endl;
    }
}
