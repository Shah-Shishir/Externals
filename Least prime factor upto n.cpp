#include <bits/stdc++.h>
using namespace std;

void lpf (int n)
{
    int i,j,arr[n+1];

    arr[0] = 0;
    arr[1] = 1;

    for (i=2; i<=n; i++)
        arr[i] = i;

    for (i=4; i<=n; i+=2)
        arr[i] = 2;

    for (i=3; i*i<=n; i+=2)
        if (arr[i] == i)
            for (j=i*i; j<=n; j+=2*i)
                if (arr[j] == j)
                    arr[j] = i;

    for (i=1; i<=n; i++)
        printf ("Least prime factor of %d is %d\n",i,arr[i]);
}

int main (void)
{
    int n;

    while (scanf ("%d",&n) != EOF)
        lpf(n);

    return 0;
}
