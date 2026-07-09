#include<iostream>

using namespace std;

int prime[100005];

void sang()
{
	for(int i=0;i<100005;i++)
		prime[i]=1;
		
	for(int i=2;i*i<100005;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<100005;j+=i)
			{
				prime[j]=0;
			}
		}
	}
}

int main()
{
	sang();
	long tong=0;
	int l, r;
	cin >> l >> r;
	for(int i=l;i<=r;i++)
	{
		if(prime[i]) tong+=i;
	}
	cout << tong;
}


