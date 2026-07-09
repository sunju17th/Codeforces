#include<iostream>

using namespace std;

int  a[300007];

int main()
{
	long n, d, m=0, s=0;
	cin >> n >> d;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]==1)
		{
			m=0;
		}
		if(a[i]==0)
		{
			m++;
		}
		if(m>=d)
		{
			m=0;
			s++;
		}
	}
	cout << s;
}
