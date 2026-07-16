#include<bits/stdc++.h>

using namespace std;

int ans = 0;
int a[10], visited[10]={0};
vector<vector<int>> k = {
        {2, 3, 4, 5}, 
        {2, 3, 4, 5}, 
        {1, 4, 0, 5}, 
        {1, 4, 0, 5}, 
        {1, 2, 3, 0}, 
        {1, 2, 3, 0}  
    };

void dfs(int u, int step, int curnum)
{
    if(step == 6) {
        if(curnum > ans) ans = curnum;
        return;
    }

    visited[u] = 1;

    for(int i=0;i<k[u].size();i++)
    {
        if(visited[k[u][i]] == 0){
            dfs(k[u][i], step + 1, curnum*10 + a[k[u][i]]);
        }
    }

    visited[u] = 0;
}

int main()
{
    
    for(int i=0;i<6;i++)
    { 
        cin >> a[i];
        visited[i] = 0;
    }
    
    for(int i=0;i<6;i++)
    {
        dfs(i, 1, a[i]);
    }

    cout << ans;
}

