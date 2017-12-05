#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n,p,count,t;

    while (cout << "Enter a number : ")
    {
        cin >> n;

        cout << "Enter a prime : ";
        cin >> p;

        count = 0,t = n;

        while (n)
        {
            n /= p;

            count += n;
        }

        printf ("%lld appears %lld times in %lld!\n",p,count,t);
    }

    return 0;
}
