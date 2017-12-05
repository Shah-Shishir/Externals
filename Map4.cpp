#include <iostream>
#include <map>
using namespace std;

int main ()
{
    pair <int,char> p;
    map <int,char> mp;
    map <int,char> :: iterator it;

    mp[1] = 'a';
    mp[2] = 'b';
    mp[3] = 'c';
    mp[4] = 'd';
    mp[5] = 'e';
    mp[6] = 'g';
    mp[6] = 'f';

    cout << mp[5] << " " << mp[6] << endl;
    cout << mp.size() << " " << mp.empty() << endl << endl;

    for (it=mp.begin(); it!=mp.end(); it++)
        cout << it->first << " " << it->second << endl;

    mp.clear();
    cout << endl << mp.size() << " " << mp.empty() << endl << endl;

    for (int i=97; i<=102; ++i)
    {
        p.first = i-96;
        p.second =char(i);
        mp.insert(p);
    }

    for (it=mp.begin(); it!=mp.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;

    cout << endl << mp.size() << " " << mp.empty() << endl;

    it = mp.find(2);
    cout << it->second << endl;
    mp.erase(it);
    for (it=mp.begin(); it!=mp.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;

    return 0;
}
