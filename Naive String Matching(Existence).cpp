/***

5
Naive String Matching
ve Str
De Silva
Se Dilva
Ki koro
Koro
Bose asi
se asi
ami ekta olos lok
olos

***/

#include <bits/stdc++.h>
using namespace std;

int match (string text,string pattern)
{
    int i,j,len,l,k,pos,e;

    len = text.length();
    l = pattern.length();
    k = len-l;

    if (l > len)
        return -1;

    for (i=0; i<=k; i++)
    {
        pos = e = i;

        for (j=0; j<l; j++)
        {
            if (text[e] == pattern[j])
                e++;
            else
                break;
        }

        /// If u wanna put e there, think a while about this case :) -> string ring <- :D
        if (j == l)
            return pos;
    }

    return -1;
}

int main ()
{
    string a,b;
    int t,pos,res;

    cin >> t;

    getchar();

    for (pos=1; pos<=t; pos++)
    {
        getline(cin,a);
        getline(cin,b);

        res = match(a,b);

        cout << "Case " << pos << ": ";

        if (res == -1)
            cout << b << " is not found in " << a << endl;
        else
            cout << b << " is found at location " << ++res << " in " << a << endl;
    }

    return 0;
}
