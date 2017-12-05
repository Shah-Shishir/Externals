#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
    string str;
    int num;

    while (getline(cin,str))
    {
        stringstream ss(str);
        vector <int> v;

        while (ss >> num)
            v.push_back(num);

        cout << v.size() << endl;
    }

    return 0;
}
