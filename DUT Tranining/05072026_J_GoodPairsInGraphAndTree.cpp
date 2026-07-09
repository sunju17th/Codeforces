#include<bits/stdc++.h>

using namespace std;

int parent[200005];
long long sz[200005] = {0};

//tim cha
int find_set(int v)
{
    if(v == parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}

// lien ket hai tap hop
void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);

    if(a!=b) 
    {
        if(sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    // nhap cay
    vector<pair<int, int>> tree(n-1);
    for(int i=0;i<n-1;i++)
    {
        int u, v;
        cin >> u >> v;
        if(u>v) swap(u, v);
        tree[i] = {u, v};
    }

    //nhap do thi
    vector<pair<int, int>> graph(m);
    for(int i=0;i<m;i++)
    {
        int u, v;
        cin >> u >> v;
        if(u>v) swap(u, v);
        graph[i]={u, v};
    }

    // sap xep canh do thi
    sort(graph.begin(), graph.end());

    // khoi tao dsu
    for(int i=1;i<=n;i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }

    // neu trong cay va do thi co path => co the gop nhom lai
    for(int i=0;i<n-1;i++)
    {
        if(binary_search(graph.begin(), graph.end(), tree[i])) union_sets(tree[i].first, tree[i].second);
    }

    long long ans = 0;
    for(int i=1;i<=n;i++)
    {
        if(i == parent[i]) ans+=sz[i]*sz[i];
    }

    cout << ans << "\n";
}