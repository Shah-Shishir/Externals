#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000005;
bool prime[MAX];

#define pb push_back

void sieve ()
{
    int i,j;

    prime[0] = prime[1] = true;

    for (i=4; i<=MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
           for (j=i*i; j<=MAX; j+=2*i)
            prime[j] = true;

    return;
}

int main ()
{
    sieve ();

    int l,u,r,i,k;

    while (cin >> l >> u)
    {
        printf ("From %d to %d there are ",l,u);
        k = -1;
        vector <int> v;

        if (l <= 2 || u == 2)
            v.pb(2);

        if (!(l & 1))
            l++;

        if (!(u & 1))
            u--;

        for (i=l; i<=u; i+=2)
            if (!prime[i])
                v.pb(i);

        k = v.size();

        printf ("%d primes. :)\n",k);

        for (i=0; i<k; i++)
            cout << v[i] << endl;
    }

    return 0;
}
