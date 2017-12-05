#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main() {
	int n,i,x,mid,low,high,pos;
	bool k;

	while (cin >> n)
	{
		int arr[n];

		for (i=0; i<n; i++)
			cin >> arr[i];

		cin >> x;

		sort (arr,arr+i);

		low = 0;
		high = n-1;
		k = false;
		pos = 0;

        while (low <= high)
        {
            mid = (low + high) / 2;

            if (x == arr[mid])
            {
                k = true;
                pos = mid + 1;
                high = mid - 1;
            }
            else if (x > arr[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }

		if (!k)
			pf ("%d is not found.\n",x);
		else
			pf ("%d is found at position %d.\n",x,pos);
	}

	return 0;
}
