/***

Sample Input

5
3 2 1 4 5

***/


#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int BIT[100001],n,i;

void update (int i, int val)
{
    for (; i<=n; i+=i&(-i))
        BIT[i] += val;
}

int query (int i)
{
    int sum = 0;

    for (; i>0; i-=i&(-i))
        sum += BIT[i];

    return sum;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int val;

    sf ("%d",&n);

    memset (BIT,0,sizeof BIT);

    for (i=1; i<=n; i++)
    {
        sf ("%d",&val);
        update (i,val);
    }

    pf ("\ni    query(i)     BIT[i]\n");

    for (i=1; i<=n; i++)
        pf ("%d     %2d            %2d\n",i,query(i),BIT[i]);

    return 0;
}
