#include <iostream>
#include <string>

using namespace std;

int main()
{
    int value1 = 100;
    int value2 = 200;
    float value3 = 200.000001;

    if(value1 == value2)
    {
        cout << "100 = 200" << endl;
    }
    if(value2 == value3)
    {
        cout << "200 = 200.000001" << endl;
    }
    if(value1 == value3)
    {
        cout << "100 = 200" << endl;
    }
}
