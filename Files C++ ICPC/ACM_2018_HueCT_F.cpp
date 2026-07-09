#include<iostream>

using namespace std;

int a[10001]={0}; 

int main()
{
	int n, m;
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		int x , y;
		cin >> x >> y;
		a[x]++;
		a[y]++;
	}
	
	bool ans = true;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			ans = false;
		}	
	}
	if(ans) cout << "Yes";
	else cout << "No";
}


