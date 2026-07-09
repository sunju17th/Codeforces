#include<iostream>

using namespace std;

long long a[1000006];
long long s[1000006];
bool r[1000006];


int main()
{
	long n;
	cin >> n;
	for(long i=1;i<=n;i++)
	{
		cin >> a[i];
		r[i]=false;
	}
	
	a[0]=0;
	if(a[1]>0) 
	{
		s[1]=a[1];
		r[1]=true;
	}
	else s[1]=0;
	
	for(int i=2;i<=n;i++)
	{
		if(a[i]<0||r[i-1]==true)
		{
			s[i]=s[i-1];
		}
		if(s[i-1]+a[i]>s[i-1]&&r[i-1]==false)
		{
			s[i]=s[i-1]+a[i];
			r[i]=true;
		}
		if(s[i-2]+a[i]>s[i-1]&&r[i-1]==true)
		{
			s[i]=s[i-2]+a[i];
			r[i-1]=false;
			r[i]=true;
		}
	}
	
	cout << s[n];
}
