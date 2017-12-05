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
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

bool isPrime (lld n)
{
    lld i;
    bool k = true;

    if (n < 2 || (!(n & 1) && n != 2))
        return false;

    if (n == 2)
        return true;

    for (i=2; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            k = false;
            break;
        }
    }

    return k;
}

int main (void)
{
    lld tc,num;

    cin >> tc;

    while (tc--)
    {
        cin >> num;

        if (isPrime(num))
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }

    return 0;
}
