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

int main (void)
{
    string str;
    int len,i,num,p,res,count;
    double sum;

    while (cin >> str)
    {
        len = str.size(), num = 0, p = len-1;

        /// Converting String into Int

        for (i=0; i<len; i++)
            num += (str[i] - '0') * pow(10.0,p--);

        /// Digits of the Factorial

        sum = 0;

        for (i=2; i<=num; i++)
            sum += log10(i);

        sum = (int)(floor(sum)+1);

        /// Calculating Trailing Zeroes

        p = 1;
        count = 0;

        while (1)
        {
            res = num/pow(5.0,p);
            count += res;
            p++;

            if (res <= 0)
                break;
        }

        cout << num << "! has " << sum << " digits and " << count << " trailing zeroes." << endl;
    }

    return 0;
}
