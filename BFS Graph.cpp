#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define pb push_back
#define MAX 10000

vector <int> edges[MAX+1],cost[MAX+1];
bool vis[MAX+1];
int lv[MAX+1];

void BFS (int s, int n)
{
    int u,v,i,l;
    vector <int> G;

    queue <int> q;
    q.push(s);
    vis[s] = true;
    lv[s] = 0;

    while (!q.empty())
    {
        u = q.front();
        G.pb(u);
        q.pop();
        l = edges[u].size();

        for (i=0; i<l; i++)
        {
            v = edges[u][i];

            if (!vis[v])
            {
                q.push(v);
                vis[v] = true;
                lv[v] = lv[u]+1;
            }
        }
    }

    l = G.size();
    pf ("BFS Graph : ");
    for (i=0; i<l; i++)
    {
        pf ("%d",G[i]);

        if (i == l-1)
            pf ("\n");
        else
            pf (" ");
    }
}

int main ()
{
    int n,e,i,x,y,s;

    sf ("%d %d",&n,&e);

    for (i=1; i<=e; i++)
    {
        sf ("%d %d",&x,&y);

        if (x == y)
            edges[x].pb(y);
        else
        {
            edges[x].pb(y);
            edges[y].pb(x);
        }
    }

    sf ("%d",&s);
    BFS (s,n);

    return 0;
}
