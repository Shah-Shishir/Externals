#include <iostream>
#include <stdio.h>
using namespace std;

#define sf scanf
#define pf printf

int arr[10055];

int GCD (int a,int b)
{
    if (b == 0)
        return a;
    else
        GCD (b,a%b);
}

int main ()
{
    int n,i,gcd,lcm;

    while (cin >> n)
    {
        for (i=0; i<n; i++)
            cin >> arr[i];

        lcm = arr[0];

        for (i=1; i<n; i++)
        {
            gcd = GCD (lcm,arr[i]);
            lcm = (lcm / gcd) * arr[i];
        }

        pf ("LCM of %d numbers : ",n);
        cout << lcm << endl;
    }

    return 0;
}
