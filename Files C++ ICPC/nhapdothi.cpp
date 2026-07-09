#include<iostream>
#include<vector>

using namespace std;

vector<long long> a[100000];

int main()
{
	long n, m;
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		long x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=1;i<=n;i++)
	{
		cout << i << " : ";
		for(int j=0;j<a[i].size();j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
