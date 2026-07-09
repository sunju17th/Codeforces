#include<iostream>

using namespace std;

int s[100000]={0},a[100000], n;

int max(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else 
	{
		return b;
	}
}

void nhap(int a[], int n)
{
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
}

int main()
{
	cin >> n;
	nhap(a,n);
	s[1]=a[1];
	int lon=1;
	for(int i=2;i<=n;i++)
	{
		s[i]=max(s[i-1]+a[i],a[i]);
		if(s[i]>s[lon])
		{
			lon=i;
		}
	}
	for(int i=1;i<=lon;i++)
	{
		cout << s[i] << " ";
	}
	cout << s[lon]-a[lon];
} 
