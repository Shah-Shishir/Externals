#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define fast ios_base::sync_with_stdio(0)
#define pb push_back
#define pii pair <int,int>
#define endl "\n"

int lv[10][10];
bool vis[10][10];
int fx[] = {1,1,-1,-1,2,2,-2,-2};
int fy[] = {2,-2,2,-2,1,-1,1,-1};

void BFS (int a,int b,int c,int d)
{
    memset (vis,false,sizeof vis);
    queue <pii> q;
    q.push(pii(a,b));
    lv[a][b] = 0;
    vis[a][b] = true;

    while (!q.empty())
    {
        pii u = q.front();
        q.pop();

        if (u.first == c && u.second == d)
        {
            pf ("%c%d needs %d moves to reach %c%d.\n",char(b+96),a,lv[u.first][u.second],char(d+96),c);
            break;
        }

        for (int i=0; i<8; i++)
        {
            int x = u.first+fx[i];
            int y = u.second+fy[i];

            if (x >= 1 && x <= 8 && y >= 1 && y <= 8 && !vis[x][y])
            {
                vis[x][y] = true;
                q.push(pii(x,y));
                lv[x][y] = lv[u.first][u.second]+1;
            }
        }
    }
}

int main ()
{
    int a,b,c,d;
    string x,y;

    fast;

    while (cin >> x >> y)
    {
        a = x[1]-'0';
        b = x[0]-96;
        c = y[1]-'0';
        d = y[0]-96;

        BFS (a,b,c,d);
    }

    return 0;
}
