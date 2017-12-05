#include <bits/stdc++.h>
using namespace std;

int main ()
{
    //ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    string str;
    int m,res,div,l,i;

    while (cin >> str >> m)
    {
        vector <int> v;

        l = str.size(), res = 0;

        for (i=0; i<l; i++)
        {
            div = (res*10+(str[i]-'0'))/m;
            res = ((res*10)%m+(str[i]-'0')%m)%m;

            if (v.empty() && div == 0)
                continue;

            v.push_back(div);
        }

        l = v.size();

        cout << str << " / " << m << " = ";
        for (i=0; i<l; i++)
            cout << v[i];
        cout << endl;
    }

    return 0;
}
