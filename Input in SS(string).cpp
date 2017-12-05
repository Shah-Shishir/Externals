#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main ()
{
    string str,s;

    while (getline(cin,str))
    {
        stringstream ss(str);
        vector <string> v;

        while (ss >> s)
            v.push_back(s);

        cout << v.size() << endl;
    }

    return 0;
}
