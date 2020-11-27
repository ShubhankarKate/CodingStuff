#include<bits/stdc++.h>
using namespace std;
typedef  pair<int, int> iP;

struct DisjointSets
{
    int *parent, *rnk;
    int n;
    DisjointSets(int n)
    {
        this->n = n;
        parent = new int[n+1];
        rnk = new int[n+1];
        for (int i = 0; i <= n; i++)
        {
            rnk[i] = 0;
            parent[i] = i;
        }
    }
    int find_set(int u)
    {
        if (u != parent[u])
        {
            parent[u] = find_set( parent[u] );
        }
        return parent[u];
    }
    void merge_set(int x, int y)
    {
        x = find_set(x), y = find_set(y);
        if (rnk[x] > rnk[y])
        {
            parent[y] = x;
        }
        else
        {
            parent[x] = y;
        }

        if (rnk[x] == rnk[y])
        {
            rnk[y]++;
        }
    }
};

struct complete_graph
{
    int V, E;
    vector< pair<int, iP> > edges;
    complete_graph(int V, int E)
    {
        this->V = V;
        this->E = E;
    }
    void addEdge(int p, int q, int w)
    {
        edges.push_back({w, {p, q}});
    }
    int msTree();
};

int complete_graph::msTree()
{
    int mst_wt = 0;
    sort(edges.begin(), edges.end());
    DisjointSets ds(V);
    vector< pair<int, iP> >::iterator it;
    for (it=edges.begin(); it!=edges.end(); it++)
    {
        int u = it->second.first;
        int v = it->second.second;
        int set_u = ds.find_set(u);
        int set_v = ds.find_set(v);
        if (set_u != set_v)
        {
            mst_wt += it->first;
            ds.merge_set(set_u, set_v);
        }
    }

    return mst_wt;
}

int main()
{
    //initial stuff
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //Declaration and input
    int i,j,k,h,v,e,n,d,wt,fin;
    cin>>n>>d;

    v = n;
    e = ( n * ( n - 1 )) / 2;

    int inp[n][d];
    wt=0;

    complete_graph g(v, e);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < d; j++)
        {
            cin>>inp[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            for(h = 0; h< d; h++)
            {
                wt += abs( inp[j][h] - inp[i][h] );
            }
            g.addEdge(i, j, (-1)*wt);
            wt = 0;
        }
    }
    fin = g.msTree();
    cout<< (-1)*fin<<endl;
}
