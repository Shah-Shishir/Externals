/***

7
first
second
second
third
third
first
first

***/


#include <iostream>
#include <map>
using namespace std;

int main ()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,i;
    string str;
    map <string,int> mp;

    cin >> n;

    for (i=1; i<=n; i++)
    {
        cin >> str;

        cout << str << " no " << mp[str]+1 << endl;

        mp[str]++;
    }

    return 0;
}
