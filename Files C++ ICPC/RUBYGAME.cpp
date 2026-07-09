#include<iostream>
#include<vector>

using namespace std;

vector <long long> a[100007];
long long b[100007]={0};

int main()
{
	int m, n;
	long long kqmax=-1e9-7, t;
	cin >> n >> m >> t;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			long long x;
			cin >> x;
			a[i].push_back(x);
			b[j]=0;
		}
	}
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<m;i++)
					b[i]=0;
		
		for(int i=k;i<n;i++)
		{
			
			for(int j=0;j<m;j++)
			{
				b[j]=a[i][j]+b[j];
				
				long long maxk=b[0];
				long long temp=b[0];
					
				for(int i=1;i<m;i++)
				{
					temp=max(temp+b[i],b[i]);
					maxk=max(temp,maxk);
				}
				kqmax=max(maxk,kqmax);
				
			}
		}
		
		
	}
	if(kqmax>=t)
	{
		cout << "WIN" << endl; 
	}
	else
	{
		cout << "LOSE" << endl;
	}
	cout << kqmax;
}
