/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)

long long totient_function (long long n)
{
    long long tot,i;

    tot = n;

    if (n == 1)
        return 1;

    if (!(n & 1))
    {
        tot -= tot >> 1;

        while (!(n & 1))
            n >>= 1;
    }

    for (i=3; i*i<=n; i+=2)
    {
        if (n % i == 0)
        {
            tot -= tot/i;

            while (n % i == 0)
                n /= i;
        }
    }

    if (n > 1)
        tot -= tot/n;

    return tot;
}

int main (void)
{
    long long num;

    while (cin >> num && num)
        cout << num << " has " << totient_function (num) << " co-primes." << endl;

    return 0;
}
