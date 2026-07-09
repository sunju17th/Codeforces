#include<iostream>

using namespace std;

long long a[200005];
long long maxa[200005]; 

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n; 
		for(int i=0;i<n;i++)
			cin >> a[i];
			
		long long m = a[0];
		for(int i=0;i<n;i++)
		{
			maxa[i] = max(m, a[i]);
			m = maxa[i];
		}
			
			
		for(int i=1;i<n;i+=2)
		{
			a[i] = maxa[i];
		}
		
		
		long long ans = 0;
		for(int i=1;i<n;i+=2)
		{
			if(i<n-1)
				if(a[i] <= a[i+1])
				{
					ans += a[i+1] - a[i] + 1;
					a[i+1] = a[i] - 1;
				} 
				
			if(a[i] <= a[i-1]) 
			{
				ans += a[i-1] - a[i] + 1;
				a[i-1] = a[i] - 1;
			 } 
	 	}
		
		cout << ans << endl;
	 } 
	
}


