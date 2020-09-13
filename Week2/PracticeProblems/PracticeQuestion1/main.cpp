#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool happy = true;
    bool sad = false;

    if(happy || sad)
    {
        cout << "One value is true!" << endl;
    }
    else
    {
        cout << "Something is wrong!" << endl;
    }
}
