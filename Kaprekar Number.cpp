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
#define pb push_back
#define in insert

int main (void)
{
    long long n,sqr,a,b,i,rem;
    bool k;

    while (cin >> n && n)
    {
        sqr = n * n;

        a = 0, b = 0, i = 0, k = false;

        while (sqr != 0)
        {
            rem = sqr % 10;
            a += rem * pow (10,i);
            b = sqr / 10;
            sqr /= 10;
            i++;

            if (a + b == n && a != 0 && b != 0)
            {
                k = true;
                break;
            }

        }

        if (k == true)
            pf ("%d is a Kaprekar number.\n",n);
        else
            pf ("%d is not a Kaprekar number.\n",n);
    }

    return 0;
}
