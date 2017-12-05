#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define pb push_back
#define MAX 10000

vector <int> edges[MAX+1],cost[MAX+1];
bool vis[MAX+1];
int lv[MAX+1];
int n,e,i,x,y,u,v,a,b,l;

void BFS (int s, int d)
{
    memset (vis,false,sizeof(vis));

    queue <int> q;
    q.push(s);
    vis[s] = true;
    lv[s] = 0;

    while (!q.empty())
    {
        u = q.front();
        q.pop();

        for (i=0; i<edges[u].size(); i++)
        {
            v = edges[u][i];

            //cout << u << " " << edges[u][i] << endl;

            if (!vis[v])
            {
                vis[v] = true;
                q.push(v);
                lv[v] = lv[u]+1;
            }
        }
    }
}

int main ()
{
    sf ("%d %d",&n,&e);

    for (i=1; i<=e; i++)
    {
        sf ("%d %d",&x,&y);

        edges[x].pb(y);
        edges[y].pb(x);
    }

    while (sf ("%d %d",&a,&b) != EOF)
    {
        BFS (a,b);

        pf ("Shortest path from %d to %d is %d.\n",a,b,lv[b]);
    }

    return 0;
}
