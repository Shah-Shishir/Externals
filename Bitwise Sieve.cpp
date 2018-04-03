#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define pb push_back

const int MAX = 100000001;
int prime[(MAX/32)+2];
vector <int> v;

int SetBit (int n, int x) {return n | (1 << x);}

int ClearBit (int n, int x) {return n & ~(1 << x);}

int ToggleBit (int n, int x) {return n ^ (1 << x);}

bool CheckBit (int n, int x) {return (bool) (n & (1 << x));}

void sievewithbitmasking ()
{
    int i,j;

    prime[0] = SetBit (prime[0],0);
    prime[0] = SetBit (prime[0],1);

    for (i=4; i<MAX; i+=2)
        prime[i>>5] = SetBit (prime[i>>5],i&31);

    for (i=3; i*i<=MAX; i+=2)
        if (!CheckBit(prime[i>>5],i&31))
            for (j=i*i; j<MAX; j+=(i<<1))
                prime[j>>5] = SetBit (prime[j>>5],j&31);

    v.pb(2);

    for (i=3; i<MAX; i+=2)
        if (!CheckBit(prime[i>>5],i&31))
            v.pb(i);
}

int main ()
{
    sievewithbitmasking ();

    for (int i=0; i<=100; i++)
    {
        pf ("%d : ",i);

        if (!CheckBit(prime[i>>5],i&31))
            pf ("Prime");
        else
            pf ("Composite");

        pf ("\n");
    }

    return 0;
}
