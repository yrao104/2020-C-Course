#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool happy = false;
    bool sad = true;
    bool coding = false;

    if((happy && sad) || (sad && coding)  || (coding && happy))
    {
        cout << "At least 2 of the values are true!" << endl;
    }
    else
    {
        cout << "Less than 2 of the values are true!" << endl;
    }

}
