#include <bits/stdc++.h>
using namespace std;

void lpf (int n)
{
    vector <int> v (n+1,0);
    int i,j;

    v[1] = 1;

    for (i=2; i<=n; i++)
    {
        if (v[i] == 0)
        {
            v[i] = i;

            for (j=2*i; j<=n; j+=i)
                if (v[j] == 0)
                    v[j] = i;
        }
    }

    for (i=1; i<=n; i++)
        printf ("Least prime factor of %d is %d\n",i,v[i]);
}

int main (void)
{
    int n;

    while (scanf ("%d",&n) != EOF)
        lpf(n);

    return 0;
}
