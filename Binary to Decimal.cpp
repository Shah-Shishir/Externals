/***

Sample Input
1
10
11
100
101
110
111
1000
1001
1010
1011
1100
1101
1110

***/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string str;
    int len,i,dec,k;

    while (cin >> str)
    {
        k = len = str.size()-1;
        dec = 0;

        for (i=0; i<=len; i++)
            dec += (str[i]-'0') * pow(2,k--);

        cout << dec << endl;
    }

    return 0;
}
