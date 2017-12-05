/***

We know, The totient function of a number N can be determined,
phi(N) = N * (1-(1/p1)) * (1-(1/p2)) * ....... (1-(1/pn));
where p1,p2,...,pn are distinct prime factors of N.

So, we run a loop from 1 to n and store the ith value in the ith index of phi[]. Then run another loop from 2 to N and check if i
be prime or not. If i be prime, we will set phi[i]=i-1 and then run a nested loop to set its multiples totient value. Each time a
prime number p appears, it will multiply its all multiples (phi[i]) by (1-(1/p)).

Then after the end of the loop, we will get our all totient value upto N.

We can use Sieve() here, but it is an extra addition that will increase runtime by 0.01s.
It is enough to move in the simple way. :)

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define pb push_back

const int MAX = 1000005;
long long phi[MAX+1];

void totient_func ()
{
    int i,j;

    for (i=1; i<=MAX; i++)
        phi[i] = i;

    for (i=2; i<=MAX; i++)
    {
        if (phi[i] == i)
        {
            phi[i] = i-1;

            for (j=2*i; j<=MAX; j+=i)
                phi[j] = (phi[j]/i)*(i-1);
        }
    }
}

int main ()
{
    totient_func ();

    int n;

    while (cin >> n)
        cout << phi[n] << endl;
}
