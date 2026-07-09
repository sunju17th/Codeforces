#include<iostream>

using namespace std;

long long a[1007];

int main()
{
	long long n, k, s=0;
	cin >> k >> n;
	a[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		if(a[i]+a[i-1]>=k)
		{
			s++;
			a[i]=((a[i]%k)+(a[i-1]%k))%k;
		}
	}
	cout << s;
	return 0;
}
