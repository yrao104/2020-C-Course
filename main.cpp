#include <iostream>

using namespace std;
//when declaring variables: type name
//data types: int(integer), float(floating point), double, char(character), bool(boolean), String
//floats are not always precise : stores very big numbers
//double: double point precision;  largest range of values
//char: stores 1 single letter(1 byte); technically stores small numbers and converts them to letter format
//bool: values are either true or false; true = 1, false = 0
//almost all lines end in a semicolon
//convention to use underscores for variables(snake case)

int main()
{
    int a; //assigns a a space
    int answer = 42; // +- ~2,147,483,648 (range of values)
    float fraction = 123.456; // +- 3.4 e38
    double big_number = 12345564565675; // +- 1.7 e308
    char letter = 'a'; // +- 128 ; used with single quotes
    bool is_coding= false; // ONLY true(1) or false(0)

    cout << is_coding << endl;
}
