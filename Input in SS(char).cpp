#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main ()
{
    string str;
    char ch;

    while (getline(cin,str)) /// Taking input a long string from buffer
    {
        stringstream ss(str); /// Set the long string in ss

        vector <char> v; /// Taking a character vector for storing the chars

        while (ss >> ch) /// Extracting the chars
            v.push_back(ch); /// Inserting chars into the vector

        cout << v.size() << endl; /// Print the size of the vector
    }

    return 0;
}
