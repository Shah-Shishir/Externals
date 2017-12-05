#include <stdio.h>

int main ()
{
    unsigned long long n,i,a,b,sum;

    while (scanf ("%llu",&n) != EOF)
    {
        a = 0, b = 1;

        for (i=1; i<=n; i++)
        {
            if (i == n)
                printf ("%lluth fibonacci number is %llu\n",n,a);

            sum = a + b;
            a = b;
            b = sum;
        }
    }

    return 0;
}
