/***

If N can be represented as sum of consecutive integers, so,
We can write,

n = a + (a+1) + (a+2) + ..... + (a+l)
=> n = (a+a+....+a) + (1+2+3+....+l)
=> n = (l+1)*a + (l*(l+1))/2
=> (l+1)*a = n - (l*(l+1))/2
=> a = (n-(l*(l+1))/2) / (l+1) _____ (i)

Here, if we let X = (l*(l+1))/2), the max value of X can be N-1.
If X be N, a will be 0.

So, we will run a loop from 1 to (l*(l+1))/2) and check everytime
if a be a whole number. If so, we will count a way to represent N
as sum of consecutive integers.

***/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long tc,n,l,count;
    double a;

    scanf ("%lld",&tc);

    while (tc--)
    {
        scanf ("%lld",&n);

        count = 0;

        for (l=1; l*(l+1)<2*n; l++)
        {
            a = (1.0*n-(l*(l+1))/2.0)/(l+1);

            if (a == (long long)(a))
                count++;
        }

        printf ("%lld can be represented as consecutive sum of integers in %lld ways.\n",n,count);
    }
}
