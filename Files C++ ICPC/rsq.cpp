#include<bits/stdc++.h>

using namespace std;

long long tong[100000][100]={0};
long long s[100000];

void squaretable(long n)
{
	for(int i=0;i<n;i++)
	{
		tong[i][0]=s[i];
	}
	for(long j=1;(1<<j)<=n;j++)
	{
		for(long i=0;i+(1<<j)-1<n;i++)
		{
			tong[i][j]=tong[i+(1<<(j-1))][j-1]+tong[i][j-1];
		}
	}
}

long long query(long long l, long long r,long long x)
{
	if(r<l) return 0;
	if(r==l) return x-tong[l-1][0];
	long d=(int)log2(r-l+1);
	return x*(1<<d)-tong[l-1][d]+query(l+(1<<d),r,x);
}

int main()
{
	long long n, x, q, temp;
	cin >> n >> q >> x;
	for(long i=0;i<n;i++)
	{
		cin >> s[i];
	}
	
	squaretable(n);
	
	for(long i=0;i<q;i++)
	{
		long long r , l;
		cin >> l >> r;
		cout << query(l,r,x) << endl;
	}
 } 
