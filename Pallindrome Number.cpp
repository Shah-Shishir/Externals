#include <bits/stdc++.h>
using namespace std;

int main ()
{
    unsigned long long n,temp,rem,rev;

    while (cin >> n)
    {
        temp = n, rev = 0;

        while (n != 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }

        if (rev == temp)
            printf ("%llu is a pallidrome number because %llu = %llu. :D\n",temp,temp,rev);
        else
            printf ("%llu is not a pallidrome number because %llu != %llu. :3\n",temp,temp,rev);
    }

    return 0;
}
