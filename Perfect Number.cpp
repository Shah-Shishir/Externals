#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
    int n,i,sum;

    while (cin >> n)
    {
        sum = 1;

        for (i=2; i*i<=n; i++)
        {
            if (n % i == 0)
            {
                if (i*i == n)
                    sum += i;
                else
                    sum += i + n/i;
            }
        }

        if (sum == n)
            printf ("%d is a perfect number.\n",n);
        else
            printf ("%d is not a perfect number.\n",n);
    }

    return 0;
}
