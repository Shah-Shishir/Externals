#include <bits/stdc++.h>
using namespace std;

#define llu unsigned long long

llu power (llu n,llu p)
{
    llu res = 1;

    while (p--)
        res *= n;

    return res;
}

int main ()
{
    llu n,i,sum,k;

    while (cin >> n)
    {
        sum = 1, k = 0;

        if (!(n & 1))
        {
            while (!(n & 1))
            {
                n >>= 1;
                k++;
            }

            sum *= power(2,++k)-1;
        }

        for (i=3; i*i<=n; i+=2)
        {
            if (n % i == 0)
            {
                k = 0;

                while (n % i == 0)
                {
                    n /= i;
                    k++;
                }

                sum *= (power(i,++k)-1)/(i-1);
            }
        }

        if (n > 1)
            sum *= (power(n,2)-1)/(n-1);

        cout << sum << endl;
    }

    return 0;
}
