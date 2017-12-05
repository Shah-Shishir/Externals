/***

AGGTAB
GXTXAYB

***/

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
char a[MAX],b[MAX];
int L[MAX+1][MAX+1];

int maxi (int a,int b)
{
    return (a > b) ? a : b;
}

int lcs (char X[],char Y[])
{
    memset (L,0,sizeof L);

    int i,j,m=strlen(X),n=strlen(Y),L[m+1][n+1];

    for (i=0; i<=m; i++)
    {
        for (j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = maxi (L[i-1][j],L[i][j-1]);
        }
    }

    return L[m][n];
}

int main ()
{
   while (scanf ("%s %s",a,b) != EOF)
       printf ("Length of LCS is %d\n",lcs(a,b));

   return 0;
}
