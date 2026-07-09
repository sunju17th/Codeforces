#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

long a[1000006][3];
vector <long> f1; 

double kc(long x, long k)
{
	return sqrt((a[x][1]-a[k][1])*(a[x][1]-a[k][1])+(a[x][0]-a[k][0])*(a[x][0]-a[k][0]));
}

int main()
{
	long n, d, k;
	long sf1=0, sf2=0;
	cin >> n >> k >> d;
	for(long i=1;i<=n;i++)
	{
		cin >> a[i][0] >> a[i][1];
		if(i!=k) a[i][2]=-1;
		else a[i][2]=0;
	}
	
	for(long i=1;i<=n;i++)
	{
		if(i!=k)
		{
			if(kc(i,k)<=d) 
			{
				a[i][2]=1;
				f1.push_back(i);
				sf1++;
			}
		}
	}
	
	for(long i=0;i<f1.size();i++)
	{
		for(long j=1;j<=n;j++)
		{
			if(kc(f1[i],j)<=d&&a[j][2]==-1)
			{
				sf2++;
				a[j][2]==2;
			}
		}
	}
	
	cout << sf1 << " " << sf2;
}


