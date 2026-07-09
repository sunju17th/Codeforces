#include<iostream>

using namespace std;

long long a[200], b[200];

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n, m, k, s=0;
		cin >> n >> m >> k;
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int j=0;j<m;j++)
			cin >> b[j];
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i]+b[j]<=k)
					s++;
			}
		}
		cout << s << endl;
	}

}


