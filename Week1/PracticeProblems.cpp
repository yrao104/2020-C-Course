#include <iostream>

using namespace std;

int main()
{

    double var = 0.75;

    float code = 2e3; //2000 or 2e+3

    bool happy = true;
    bool sad = false;

    //cout << var << endl;
    //cout << code << endl; //does not print in scientific notation
    //cout << sad - happy << endl;

    //cout << 10 * 20 + 30 / 10 % 2 << endl;
    //division has equal precedence with modulus
    //200 + 3%2 = 200 + 1 = 201

    //output 864 using every operator
    cout << 20 * 45 + 975 / 100 % 3 - 36 << endl;
}
