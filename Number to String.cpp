/***

Sample Input
144545
6767
57879898

Works upto 11999999999999999999

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define pb push_back

int main ()
{
    unsigned long long n,rem;
    char ch;

    while (cin >> n)
    {
        string str;

        while (n)
        {
            rem = n % 10;
            //ch = rem+'0';
            str.pb(rem+'0');
            n /= 10;
        }

        reverse (str.begin(),str.end());

        cout << str << endl;
    }

    return 0;
}
