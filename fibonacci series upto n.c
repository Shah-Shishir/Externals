#include <stdio.h>

int main ()
{
    unsigned long long n,a,b,sum;

    while (scanf ("%llu",&n) != EOF)
    {
        a = 0, b = 1;

        printf ("Fibonacci series upto %llu is\n",n);

        while (a <= n)
        {
            printf ("%llu",a);
            sum = a + b;
            a = b;
            b = sum;

            if (a > n)
                printf ("\n");
            else
                printf (" ");
        }
    }

    return 0;
}
