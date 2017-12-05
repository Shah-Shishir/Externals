/***

        Sample Input
        5
        1 2 3 4 5
        5

        7
        1 2 3 4 5 6 7
        -99

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main() {
	int n,i,x,mid,low,high;

	while (cin >> n)
	{
		int arr[n];

		for (i=0; i<n; i++)
			cin >> arr[i];

		cin >> x;

		sort (arr,arr+i);

		low = 0;
		high = n-1;

        while (low <= high)
        {
            mid = (low + high) / 2;

            if (x == arr[mid])
                break;
            else if (x > arr[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }

		if (low > high)
			pf ("%d is not found.\n",x);
		else
			pf ("%d is found at position %d.\n",x,mid+1);
	}

	return 0;
}
