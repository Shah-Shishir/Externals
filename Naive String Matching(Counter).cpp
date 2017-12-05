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
    int i,j,len,l,k,pos,e,val=0;

    len = text.length();
    l = pattern.length();
    k = len-l;

    if (l > len)
        return 0;

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
            val++;
    }

    return val;
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

        cout << "Case " << pos << ": " << b << " is found " << res << " times in " << a << endl;
    }

    return 0;
}
