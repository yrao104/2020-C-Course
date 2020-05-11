#include <iostream>

using namespace std;
//Operators: +, -, *, /, %

int main()
{
    int a = 10;
    int b = 20;
    int c = a * b;
    int d = a/b; //floor operation: when dividing integers, it returns an integer(everything before the decimal point_
    int e = a % b; //gives you a value in the range of the first value(0-10)
    int f = b % a;

    //cout << a + b << endl;
    //cout << c << endl;
    //cout << d << endl;
    //cout << e << endl;
    cout << f << endl;
}
