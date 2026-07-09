#include<bits/stdc++.h>

using namespace std;

long maxn(vector <long> &a)
{
	int n = a.size();
	int maxa = 0;
	for(int i=1;i<n;i++)
	{
		if(maxa < a[i]) maxa = i;
	}
	int ans = a[maxa];
	a.erase(a.begin()+maxa);
	return ans;
}

long minn(vector <long> &a)
{
	int n = a.size();
	int maxa = 0;
	for(int i=1;i<n;i++)
	{
		if(maxa > a[i]) maxa = i;
	}
	int ans = a[maxa];
	a.erase(a.begin()+maxa);
	return ans;
}

long long s;
vector <long> a, b;

int main()
{
	int n, k;
	cin >> n >> k;
	
	for(int i=0;i<n;i++)
	{
		long x;
		cin >> x;
		a.push_back(x);
	}
	
	b=a;
	long long s=0;
	for(int i=0;i<k;i++)
	{
		s+=maxn(a);
		s-=minn(a);
		s+=maxn()
	}
}


