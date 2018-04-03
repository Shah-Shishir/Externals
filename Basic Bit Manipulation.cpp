#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define U unsigned

string dectobin (U n)
{
    string str;

    while (n)
    {
        if (n & 1)
            str += "1";
        else
            str += "0";

        n >>= 1;
    }

    reverse (str.begin(),str.end());

    return str;
}

int main ()
{
    U n,t,x;

    while (sf ("%u %u",&n,&x) != EOF)
    {
        pf ("Binary Form of the number : %s.\n",dectobin(n).c_str());

        ///Setting a bit
        t = n | (1ULL << x);
        pf ("\nAfter Setting Bit no. %u,\nChanged Number : %u, Changed Binary : %s.\n",x,t,dectobin(t).c_str());

        ///Clearing/Reseting a bit
        t = n & ~(1ULL << x);
        pf ("\nAfter Clearing Bit no. %u,\nChanged Number : %u, Changed Binary : %s.\n",x,t,dectobin(t).c_str());

        ///Toggling a bit
        t = n ^ (1ULL << x);
        pf ("\nAfter Toggling Bit no. %u,\nChanged Number : %u, Changed Binary : %s.\n",x,t,dectobin(t).c_str());

        ///Checking a bit
        pf ("\nAfter Checking, bit no %u is %u.\n\n",x,(bool)(n & (1ULL << x)));
    }

    return 0;
}
