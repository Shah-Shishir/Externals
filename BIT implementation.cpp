/***

Sample Input
5
11 -6 23 5 80

***/

#include <bits/stdc++.h>
using namespace std;

int BIT[100001],arr[100001],n,i,k,val;

void initializeBIT (int arr[], int n)
{
    memset (BIT,0,n);

    for (i=1; i<=n; i++)
    {
        val = arr[i-1];

        for (k=i; k<=n; k+=k&(-k))
            BIT[k] += val;
    }
}

int query (int r)
{
    int sum = 0;
    ++r;

    for (; r>=1; r-=r&(-r))
        sum += BIT[r];

    return sum;
}

void update (int idx, int val)
{
    ++idx;

    for (; idx<=n; idx+=idx&(-idx))
        BIT[idx] += val;
}

int main ()
{
    cin >> n;

    for (i=0; i<n; i++)
        cin >> arr[i];

    initializeBIT (arr,n);

    for (i=0; i<n; i++)
        cout << "Sum upto index no. " << i << " : " << query(i) << endl;

    update (3,5);

    cout << "Sum upto index no. 3 : " << query(3) << endl;

    return 0;
}
