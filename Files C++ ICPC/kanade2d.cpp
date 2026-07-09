#include<iostream>
#include<math.h>

using namespace std;

long long a[1000][1000];
long long sum[1000];




long long kadane2d(long n, long m)
{
	long  ans=-1e9-7;
	
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<m;i++)
			sum[i] = 0;
		
		for(int i=k;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				sum[j] += a[i][j];
			}
			
			long maxg=sum[0];
		    long maxc=sum[0];
		    
		    for(int i=1;i<m;i++)
		    {
		    	maxc=max(sum[i],maxc+sum[i]);
		    	maxg=max(maxc,maxg);
			}
			
			ans=max(ans,maxg);
			
		}
	}
        
    return ans;
	
}

int main()
{
	long n, m;
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];
		}
	}
	
	cout << kadane2d(n,m) << endl;
	
}


