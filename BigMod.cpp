/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <iterator>
#include <sstream>
#include <iomanip>
using namespace std;

#define sf scanf
#define pf printf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

lld bigmod (lld base, lld power, lld mod)
{
    lld p1,p2;

    if (power == 0)
        return 1;
    else if (power & 1)
    {
        p1 = base % mod;
        p2 = (bigmod (base, power-1, mod)) % mod;

        return (p1 * p2) % mod;
    }
    else if (power % 2 == 0)
    {
        p1 = (bigmod (base, power/2, mod)) % mod;

        return (p1 * p1) % mod;
    }
}

int main ()
{
    lld t,pos,a,b,c;

    while (sf ("%lld %lld %lld",&a,&b,&c) != EOF)
        pf ("%lld\n",bigmod (a,b,c));

    return 0;
}
