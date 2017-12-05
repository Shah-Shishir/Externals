/***

Sample Input

00000123
6678
000000000001699
0000100000
0000000000000005005

***/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char a[1005],b[1005];
    int len,i,m;
    bool k;

    while(scanf ("%s",a) != EOF)
    {
        len = strlen(a), m = 0, k = false;

        for (i=0; i<len; i++)
        {
            if (a[i] != '0')
                k = true;

            if (k == false)
                continue;

            b[m++] = a[i];
        }

        b[m] = '\0';

        printf ("%s\n",b);
    }

    return 0;
}
