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
#define llu unsigned long long
#define lld long long
#define U unsigned int

const long long MAX = 1000000;
vector <long long> v,sg,P;
bool prime[MAX];

void simple_sieve ()
{
    long long i,j;

    prime[0] = prime[1] = true;
    v.pb(2);

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
    {
        if (!prime[i])
        {
            v.pb(i);

            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;
        }
    }

    for (i=1001; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

void segmented_sieve (long long l,long long u)
{
    long long i,j,start,x;

    for (i=l; i<=u; i++)
        sg.pb(i);

    if (l == 0)
        sg[1] = 0;
    else if (l == 1)
        sg[0] = 0;

    for (i=0; v[i]*v[i]<=u; i++)
    {
        x = v[i];
        start = x*x;

        if (start < l)
            start = ((l+x-1)/x)*x;

        for (j=start; j<=u; j+=x)
            sg[j-l] = 0;
    }
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    simple_sieve ();

    int tc,l,u,i;

    sf ("%lld",&tc);

    while (tc--)
    {
        sf ("%lld %lld",&l,&u);

        segmented_sieve (l,u);

        for (i=l; i<=u; i++)
            if (sg[i-l] != 0)
                pf ("%lld\n",sg[i-l]);

        sg.clear ();
    }

    return 0;
}
