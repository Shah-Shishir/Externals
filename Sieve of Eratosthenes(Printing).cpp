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

const int num = 1500001;
bool check[1500001];

void sieve_of_eratosthenes (int n)
{
    cout << 2 << endl;

    int i,j;

    check[0] = check[1] = true;

    for (i=4; i<=n; i+=2)
        check[i] = true;

    for (i=3; i*i<=n; i+=2)
    {
         if (check[i] == false)
         {
             cout << i << endl;

             for (j=i*i; j<n; j+=2*i)
                check[j] = true;
         }
    }

    for (i*i==n; i<=n; i+=2)
        if (check[i] == false)
            cout << i << endl;

    return;
}

int main (void)
{
    int n;

    while (cin >> n)
        sieve_of_eratosthenes (n);

    return 0;
}
