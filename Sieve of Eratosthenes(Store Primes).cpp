/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert

int num = 1500001;
bool check[1500001];
vector <int> v;

void sieve_of_eratosthenes ()
{
    v.pb (2);

    int i,j;

    check[0] = check[1] = true;

    for (i=4; i<=num; i+=2)
        check[i] = true;

    for (i=3; i*i<=num; i+=2)
    {
        if (check[i] == false)
        {
            v.pb(i);

            for (j=i*i; j<num; j+=2*i)
                check[j] = true;
        }
    }

    for (i*i==num; i<=num; i+=2)
        if (check[i] == false)
            v.pb(i);
}

int main (void)
{
    sieve_of_eratosthenes ();

    int n,len=v.size(),i;

    cout << "Total primes from 1 to 1500001 : " << len << endl;

    cout << "Last prime : " << v[len-1] << endl;

    cout << "Last 50 primes :\n";
    for (i=len-1; i>=len-50; i--)
        cout << v[i] << endl;

    return 0;
}
