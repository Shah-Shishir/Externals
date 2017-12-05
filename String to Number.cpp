/***

Sample Input
144545
6767
57879898
11999999999999999999

Works upto 11999999999999999999

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define pb push_back

unsigned long long power (unsigned long long p)
{
    unsigned long long res = 1;

    while (p--)
        res *= 10;

    return res;
}

int main ()
{
    string str;
    unsigned long long n,len,i,val,p;

    while (cin >> str)
    {
        n = 0, len = str.size(), p = len-1;

        for (i=0; i<len; i++)
        {
            val = str[i] - '0';
            ///n = n * 10 + val;
            n += val * power (p--);

            /*** :D Both are Correct :D ***/
        }

        pf ("%s in STRING == %llu in INT. :)\n",str.c_str(),n);
    }

    return 0;
}
