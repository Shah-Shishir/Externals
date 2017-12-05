#include <iostream>
#include <map>
using namespace std;

int main ()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    pair <char,int> p;
    map <char,int> mp;
    map <char,int> :: iterator i;

    for (char ch='a'; ch<='z'; ++ch)
    {
        p.first = ch;
        p.second = (int)(ch);
        mp.insert(p);
    }

    for (i=mp.begin(); i!=mp.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;

        /***
        EQUIVALENT
        cout << i->first << " " << i->second << endl;
        ***/
    }

    i = mp.find('k');
    cout << i->second << endl;

    return 0;
}
