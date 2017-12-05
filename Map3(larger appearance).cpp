/***

I love you <3
picchi baccha marbo accha, soja hoye jabi saccha, picchi bacchaaa
sotti bolchi tomake ar valobasi naa, naa, naa, naaaa
charpoka charpoka charpoka pakha kete dibo :-P
khaj kata khaj kata khaz kata
hur hur hur
hm hmm hmmm hmm hmz hmz

***/

#include <iostream>
#include <sstream>
#include <map>
using namespace std;

#define pb push_back

int main ()
{
    /*ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/

    string str;

    while (getline (cin,str))
    {
        stringstream ss(str);
        map <string,int> mp;
        map <string,int> :: iterator i;
        string s;

        while (ss >> s)
            mp[s]++;

        int m = 0;

        for (i=mp.begin(); i!=mp.end(); ++i)
        {
            if (i->second > m)
            {
                m = i->second;
                s = i->first;
            }
        }

        cout << s << " appears atmost " << m << " times.\n\n";
    }

    return 0;
}
