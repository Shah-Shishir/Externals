/***
Input

2
10 3
1 5 2 4 6 1 3 5 7 10
S 1 9
U 5 25
S 5 9
9 4
1 2 3 4 5 6 7 8 9
S 4 6
U 6 -1
S 6 6
S 1 8

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int arr[1000001];
int block[1001];

int blk_size,blk_ind,i,l,r,n;

void preprocess (int n)
{
    blk_size = sqrt(n);
    blk_ind = -1;

    for (i=0; i<n; i++)
    {
        if (i % blk_size == 0)
            ++blk_ind;

        block[blk_ind] += arr[i];
    }
}

int getSum (int l, int r)
{
    int sum = 0;

    while (l<r and l!=0 and l%blk_size!=0)
    {
        sum += arr[l];
        ++l;
    }

    while (l+blk_size <= r)
    {
        sum += block[l/blk_size];
        l += blk_size;
    }

    while (l <= r)
    {
        sum += arr[l];
        ++l;
    }

    return sum;
}

void update (int ind, int val)
{
    int blocknumber = ind/blk_size;
    block[blocknumber] += val - arr[ind];
    arr[ind] = val;
}

int main ()
{
    int tc,pos,m,a,b;
    char str[2];

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%d %d",&n,&m);

        for (i=0; i<n; i++)
            sf ("%d",&arr[i]);

        preprocess (n);

        while (m--)
        {
            sf ("%s %d %d",str,&a,&b);

            if (strcmp (str,"S") == 0)
                pf ("%d\n",getSum(a,b));
            else
                update (a,b);
        }

        memset (block,0,sizeof block);
    }

    return 0;
}
