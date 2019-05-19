#include <bits/stdc++.h>
using namespace std;

#define             sf                          scanf
#define             pf                          printf

char ans[160];

int multiply (int x, int l)
{
    int carry = 0;
    int i,prod;

    for (i=0; i<l; i++)
    {
        prod = x * (ans[i]-'0') + carry;
        ans[i] = char((prod % 10)+'0');
        carry = prod / 10;
    }

    while (carry)
    {
        ans[l] = char((carry % 10)+'0');
        carry /= 10;
        ++l;
    }

    return l;
}

void getFactorial (int n)
{
    int i;
    int l = 1;
    ans[0] = '1';

    for (i=2; i<=n; i++)
        l = multiply (i,l);

    for (i=l-1; i>=0; i--)
        pf ("%c",ans[i]);

    pf ("\n");
}

int main()
{
    int n;

    while (sf ("%d",&n) != EOF)
        getFactorial(n);

    return 0;
}
