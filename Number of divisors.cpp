#include <bits/stdc++.h>
using namespace std;

int main ()
{
    unsigned long long n,i,k,count;

    while (cin >> n)
    {
        count = 1, k = 0;

        if (!(n & 1))
        {
            while (!(n & 1))
            {
                n >>= 1;
                k++;
            }

            count = ++k;
        }

        for (i=3; i*i<=n; i+=2)
        {
            k = 0;

            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    n /= i;
                    k++;
                }

                count *= ++k;
            }
        }

        if (n > 1)
            count *= 2;

        cout << count << endl;
    }

    return 0;
}
