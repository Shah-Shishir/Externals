#include <stdio.h>

#define arr_size 100
#define sf scanf
#define pf printf

int arr[arr_size],temp[arr_size];

void merging (int startPoint,int midPoint,int endPoint)
{
    int frstArrCnt=startPoint,secArrCnt=midPoint+1,i;

    for (i=frstArrCnt; frstArrCnt<=midPoint && secArrCnt<=endPoint; i++)
    {
        if (arr[frstArrCnt] < arr[secArrCnt])
            temp[i] = arr[frstArrCnt++];
        else
            temp[i] = arr[secArrCnt++];
    }

    while (frstArrCnt <= midPoint)
        temp[i++] = arr[frstArrCnt++];

    while (secArrCnt <= endPoint)
        temp[i++] = arr[secArrCnt++];

    for (i=startPoint; i<=endPoint; i++)
        arr[i] = temp[i];
}

void sorting (int startPoint,int endPoint)
{
    int midPoint;

    if (startPoint >= endPoint)
        return;

    midPoint = (startPoint+endPoint)/2;

    sorting (startPoint,midPoint);
    sorting (midPoint+1,endPoint);
    merging (startPoint,midPoint,endPoint);
}

int main ()
{
    int n,i;

    pf ("Enter the number of array elements : ");
    sf ("%d",&n);

    pf ("Enter %d elements :\n",n);
    for (i=0; i<n; i++)
        sf ("%d",&arr[i]);

    sorting (0,n-1);

    pf ("Sorted array : ");
    for (i=0; i<n; i++)
    {
        pf ("%d",arr[i]);

        if (i == n-1)
            pf ("\n");
        else
            pf (" ");
    }

    return 0;
}
