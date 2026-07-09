#include<iostream>
#include<math.h>

using namespace std;

long long mink[300007][25];
long long maxk[300007][25];
long long ke[300007];

void squaretables(int n)
{
	for(long j=1;(1<<j)<=n;j++)
	{
		for(long i=0;i+(1<<j)-1<n;i++)
		{
			mink[i][j]=min(mink[i][j-1],mink[i+(1<<(j-1))][j-1]);
			maxk[i][j]=max(maxk[i][j-1],maxk[i+(1<<(j-1))][j-1]);
		}
	}
}

long long kqmax(long l, long r)
{
	long d=r-l+1;
	long d1=log2(r-l+1);
	return max(maxk[l-1][d1],maxk[r-(1<<d1)][d1]);
}

long long kqmin(long l, long r)
{
	long d=r-l+1;
	long d1=log2(r-l+1);
	return min(mink[l-1][d1],mink[r-(1<<d1)][d1]);
}


int main()
{
	long n, t;
	cin >> n >> t;
	for(long i=0;i<n;i++)
	{
		cin >> ke[i];
		mink[i][0]=ke[i];
		maxk[i][0]=ke[i];
	}
	squaretables(n);
	for(long i=0;i<t;i++)
	{
		long a, b;
		cin >> a >> b;
		cout << kqmin(a,b) <<" "<<kqmax(a,b)<< endl;
	}
}
