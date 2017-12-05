#include <bits/stdc++.h>
using namespace std;

int main ()
{
    //ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    string str;
    unsigned long long m,len,i,res;

    while (cin >> str >> m)
    {
        len = str.size(), res = 0;

        for (i=0; i<len; i++)
            res = ((res*10)%m+(str[i]-'0')%m)%m;

        cout << str << " % " << m << " = " << res << endl;
    }

    return 0;
}
