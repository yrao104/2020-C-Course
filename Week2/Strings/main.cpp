#include <iostream>
#include <string> //includes datatype string

//string is not a built in datatype
//stores any text
//

using namespace std;

int main()
{
    string test_string = "hello world";
    cout << test_string << endl;

    string string1 = "hello ";
    string string2 = "world!";
    //sends string1 and then string 2 to console
    cout << string1 << string2 << endl;
    //concatenate strings
    cout << string1 + string2 << endl;

    //strings only support concatenation
}
