#include<iostream>
#include<vector>

using namespace std;

vector <int> a[100005];
bool b[100005]={0};
int k=1;

int dfs(int x)
{
	b[x]=true;
	cout << x << " ";
	for(int i=0;i<a[x].size();i++)
	{
		if(b[a[x][i]]==false)
			dfs(a[x][i]);
	}
}

int main()
{
	int m, n;
	cin >> n >> m;
	
	for(int i=0;i<m;i++)
	{
		int x, y;
		cin >> x >> y;
		
		a[x].push_back(y);
		a[y].push_back(x);
	}
	
	for(int i=1;i<=n;i++)
	{
		if(b[i]==false)
		{
			cout << "Component "<< k <<" :";
			dfs(i);
			k++;
		}
		cout << endl;
	}
	
}


