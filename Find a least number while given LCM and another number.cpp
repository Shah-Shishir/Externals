/***

Hints :
Suppose, you are given a number a and another number L. You are to find
a least number b, that lcm (a,b) = L.

Now, how to do this? :)

Well, first check if a divides l or not, if no, it is impossible to find
another integer beacuse a should divide L if L is the lcm. If yes, now we
will follow the rules below.

(i) First divide l by a. (c = l/a)
(ii) Then get the gcd of c and a.
(iii) Run a loop while gcd (c,a) != 1 and multiply c by the gcd and divide
a by the gcd.
(iv) After gcd being 1, loop will break and you have got your answer, c!!!

***/

long long gcd (long long a,long long b)
{
    if (b == 0)
        return a;
    else
        return gcd (b,a%b);
}

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long a,l,c,d;

    while (cin >> a >> l)
    {
        if (l % a != 0)
            cout << "impossible" << endl;
        else
        {
            c = l/a;
            d = gcd (c,a);

            while (d != 1)
            {
                c *= d;
                a /= d;
                d = gcd (c,a);
            }

            cout << c << endl;
        }
    }
}
