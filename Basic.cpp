#include <iostream>
#include <sstream>
using namespace std;

/***
        12
        abc
        f
***/

int main ()
{
    stringstream ss;
    int n;
    string str;
    char ch;

    cin >> n >> str >> ch;
    ss << n << str << ch;

    cout << "StringStream 1 : " << ss.str() << endl; /// Printing out StringStream

    ss.str(""); /// Clearing out StringStream

    cout << "StringStream 2 :" << ss.str() << endl; /// Prints the Empty String

    return 0;
}
