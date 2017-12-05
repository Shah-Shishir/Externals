#include <stdio.h>

int main ()
{
    unsigned long long n,i,a,b,sum;

    while (scanf("%llu",&n) != EOF)
    {
        a = 0, b = 1;

        printf ("Fibonacci series upto %dth term\n",n);

        for (i=1; i<=n; i++)
        {
            printf ("%llu",a);
            sum = a + b;
            a = b;
            b = sum;

            if (i == n)
                printf ("\n");
            else
                printf (" ");
        }
    }

    return 0;
}
