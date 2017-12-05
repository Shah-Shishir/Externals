#include <stdio.h>
#include <string.h>

#define pf printf
#define sf scanf
#define range 1000000
#define arr_size 1000001

int arr[arr_size];
int sarray[arr_size];

int main ()
{
    int n,val,i,j,k=0;

    pf ("Enter the number of input data N upto 200:\n");
    sf ("%d",&n);

    pf ("\nEnter %d datas >= 0:\n",n);
    for (i=1; i<=n; i++)
    {
        sf ("%d",&val);
        arr[val]++;
    }

    for (i=1; i<=range; i++)
        if (arr[i] > 0)
            for (j=1; j<=arr[i]; j++)
                sarray[k++] = i;

    pf ("\nSorted Array in ascending order :\n");
    for (i=0; i<k; i++)
    {
        pf ("%d",sarray[i]);

        if (i == k-1)
            pf ("\n");
        else
            pf (" ");
    }

    memset (sarray,0,sizeof(sarray));
    k = 0;

    for (i=range; i>=1; i--)
        if (arr[i] > 0)
            for (j=1; j<=arr[i]; j++)
                sarray[k++] = i;

    pf ("\nSorted Array in descending order :\n");
    for (i=0; i<k; i++)
    {
        pf ("%d",sarray[i]);

        if (i == k-1)
            pf ("\n");
        else
            pf (" ");
    }

    return 0;
}
