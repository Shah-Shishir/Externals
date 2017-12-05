#include <bits/stdc++.h>
using namespace std;

#define lld long long

lld power (lld n,lld p)
{
    lld res = 1;

    while (p--)
        res *= n;

    return res;
}

int main ()
{
    lld n,p;

    while (cin >> n >> p)
        cout << power (n,p) << endl;

    return 0;
}
