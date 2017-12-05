/***

        Sample Input

        5
        1 2 3 4 5
        1

        5
        5 4 7 0 -4
        34

        6
        3 2 1 6 7 2
        2

        7
        5 4 178 5 178 90 8
        178
***/

#include <bits/stdc++.h>
using namespace std;

int binary_search (int arr[],int high, int low, int num)
{
    int mid,pos;

    while (low <= high)
    {
        mid = (high + low) / 2;

        if (num == arr[mid])
            return mid+1;
        else if (num > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (low > high)
        return -1;
}

int main ()
{
    int n,pos,i,num;

    while (cin >> n)
    {
        int arr[n];

        for (i=0; i<n; i++)
            cin >> arr[i];

        cin >> num;

        sort (arr,arr+i);

        pos = binary_search (arr,n-1,0,num);

        if (pos == -1)
            printf ("%d is not found.\n",num);
        else
            printf ("%d is found at position %d.\n",num,pos);
    }

    return 0;
}
