/***

AGGTAB
GXTXAYB

uuguguvjvjv
uguguguvvhv

vbnnbvbnmmnbvbn
rtyuiuytrtyui

HELLOM
HLLDM

***/

#include <bits/stdc++.h>
using namespace std;

int L[1000][1000];

string lcs (char X[],char Y[])
{
    int i,j,m=strlen(X),n=strlen(Y),ind;
    int L[m+1][n+1];

    for (i=0; i<=m; i++)
    {
        for (j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = max (L[i][j-1],L[i-1][j]);
        }
    }

    ind = L[m][n], i=m, j=n;
    string l;

    while (i > 0 && j > 0)
    {
        if (X[i-1] == Y[j-1])
        {
            l.push_back(X[i-1]);
            --i;
            --j;
            --ind;
        }
        else if (L[i-1][j] > L[i][j-1])
            --i;
        else
            --j;
    }

    reverse (l.begin(),l.end());

    return l;
}

int main ()
{
    char a[1000],b[1000];

    while (scanf ("%s %s",a,b) != EOF)
    {
        if ((lcs(a,b)).size() == 0)
            printf ("LCS of %s and %s is NULL.\n",a,b);
        else
            printf ("LCS of %s and %s is %s.\n",a,b,lcs(a,b).c_str());
    }

    return 0;
}
