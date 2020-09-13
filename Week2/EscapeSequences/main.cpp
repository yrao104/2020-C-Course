#include <iostream>

using namespace std;

//escape sequences are used to differentiate between the program and its data
//escape sequences are always denoted by a backslash in front of them
//important escape sequences: \n, \', \", \\

int main()
{
    // \n: new line
    string string1 = "hello my name is: \nYamuna";
    cout << string1 << endl;

    // \t: tab
    string string2 = "hello my name is: \tYamuna";
    cout << string2 << endl;

    // \': a single quote(to ensure no confusion with strings)
    string string3 = "hello my name is: \'Yamuna\'";
    cout << string3 << endl;

    // \": a double quote(to ensure no confusion with strings)
    string string4 = "hello my name is: \"Yamuna\"";
    cout << string4 << endl;

    // \\: backslash(2 backslashes per backslash you want to print)
    string string5 = "hello my website is: http:\\\\google.com";
    cout << string5 << endl;

    // \?: question mark
    string string6 = "hello my name is: Yamuna\?";
    cout << string6 << endl;

    // \r: carriage return(puts portion in front)
    string string7 = "hello my name is: \rYamuna";
    cout << string7 << endl;
}
