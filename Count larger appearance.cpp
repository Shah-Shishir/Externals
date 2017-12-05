/***

I love you <3
picchi baccha marbo accha, soja hoye jabi saccha, picchi bacchaaa
sotti bolchi tomake ar valobasi naa, naa, naa, naaaa
charpoka charpoka charpoka pakha kete dibo :-P
khaj kata khaj kata khaz kata
hur hur hur
hm hmm hmmm hmm hmz hmz

***/

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main ()
{
    string str,s;
    int len,i,j,maxi,pos,kase=1;

    while (getline(cin,str))
    {
        stringstream ss(str);
        vector <string> v;
        vector <int> k;

        while (ss >> s)
            v.push_back(s);

        len = v.size();

        for (i=0; i<len-1; i++)
        {
            int count = 0;

            for (j=i+1; j<len; j++)
                if (v[i] == v[j])
                    count++;

            k.push_back(count);
        }

        len = k.size(),maxi = k[0], pos = 0;

        for (i=1; i<len; i++)
        {
            if (k[i] > maxi)
            {
                maxi = k[i];
                pos = i;
            }
        }

        printf ("Case %d : ",kase++);
        cout << v[pos] << " appears most times (" << k[pos]+1 << ") in " << pos+1 << " position.\n\n";
    }

    return 0;
}
