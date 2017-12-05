#include <bits/stdc++.h>
using namespace std;

#define lld long long

lld power (lld n,lld p)
{
    string bin;

    while (p)
    {
        int res = p % 2;

        if (res == 0)
            bin += "0";
        else
            bin += "1";

        p /= 2;
    }

    reverse (bin.begin(),bin.end());

    lld l = bin.size(),i,res=1;

    for (i=0; i<l; i++)
    {
        res *= res;

        if (bin[i] == '1')
            res *= n;
    }

    return res;
}

int main ()
{
    lld n,p;

    while (cin >> n >> p)
        cout << power (n,p) << endl;

    return 0;
}
