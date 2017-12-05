#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main ()
{
    string s1,s2;
    int l1,l2,i,sum,carry;

    while (cin >> s1 >> s2)
    {
        if (s1.size() > s2.size())
            swap (s1,s2);

        l1 = s1.size();
        l2 = s2.size();

        string res;

        reverse (s1.begin(),s1.end());
        reverse (s2.begin(),s2.end());


        carry = 0;

        for (i=0; i<l1; i++)
        {
            sum = (s1[i]-'0') + (s2[i]-'0') + carry;
            res.pb(sum % 10 + '0');
            carry = sum/10;
        }

        for (i=l1; i<l2; i++)
        {
            sum = (s2[i]-'0') + carry;
            res.pb(sum % 10 + '0');
            carry = sum/10;
        }

        if (carry)
            res.pb(carry + '0');

        reverse (s1.begin(),s1.end());
        reverse (s2.begin(),s2.end());
        reverse (res.begin(),res.end());

        cout << s1 << " + " << s2 << " = " << res << endl;
    }

    return 0;
}
