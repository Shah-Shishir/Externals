#include <bits/stdc++.h>
using namespace std;

#define lld long long

lld power (lld n, lld p)
{
    if (p == 0)
        return 1;

    if (p == 1)
        return n;

    if (p & 1)
        return n*power(n,p-1);
    else
    {
        int x = power(n,p/2);

        return x*x;
    }
}

int main ()
{
    lld n,p;

    while (cin >> n >> p)
        cout << power(n,p) << endl;

    return 0;
}
