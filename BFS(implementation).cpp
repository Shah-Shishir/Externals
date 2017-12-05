#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define pb push_back

const int MAX = 10000;
vector <int> edges[MAX];
bool visited[MAX];
int level[MAX];

void BFS (int s, int n)
{
    int i,j,u,v;

    queue <int> Q;
    memset (visited,0,sizeof visited);
    Q.push(s);
    visited[s] = 1;
    level[s] = 0;

    while (!Q.empty())
    {
        u = Q.front();
        Q.pop();

        for (i=0; i<edges[u].size(); i++)
        {
            v = edges[u][i];

            if (!visited[v])
            {
                visited[v] = 1;
                Q.push(v);
            }
        }
    }
}

int main ()
{
    int n,e,i,x,y;

    sf ("%d %d",&n,&e);

    for (i=1; i<=e; i++)
    {
        sf ("%d %d",&x,&y);

        edges[x].pb(y);
        edges[y].pb(x);
    }

    return 0;
}
