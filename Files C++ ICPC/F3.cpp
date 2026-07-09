#include<iostream>

using namespace std;

long a[100007];
long s[100007]={0};

int main()
{
	int n;
	int sohang=0;
	long result =0;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		s[a[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i]!=0)
		{
			sohang++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i]!=0)
		{
			result += sohang*s[i];
			sohang--;
		}
	}
	cout << result ;
	
}
