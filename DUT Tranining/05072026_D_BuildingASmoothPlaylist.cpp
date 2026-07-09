#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, m;
		cin >> n >> m;
		long long c[200005];
		for(int i=0;i<n;i++)
			cin >> c[i];
			
		sort(c, c+n);
	
		long long minc, maxc;
		long long tempm = m, tempn = n;
		for(int i=0;i<n;i++)
		{
			if(c[i]*tempn < tempm) 
			{
				tempm -= c[i];
				tempn--;
			}
			else
			{
				if(i==0) minc = m/n;
				else minc = c[0];  
				maxc = (tempm + tempn - 1) / tempn;
				break; 
			}
		}
		
		cout << maxc - minc << endl;
	}
}


