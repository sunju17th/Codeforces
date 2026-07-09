#include<iostream>

using namespace std;

long sum(long a[],int n)
{
	long s=0;
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
	}
	return s;
}

void nhap(long a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}

long snt(long a[], int n,long s)
{
	s=sum(a,n);
	if(s%2==0)
	{
		return 0;
	}
	else
	{
		for(int i=3;i<=n/2;i=i+2)
		{
			if(s%i==0)
			{
				return 0;
			}
		}
		return s;
	}
}

int main()
{
	long a[10],b[1000], s;
	int n, t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> b[i+1] >> n;
		nhap(a,n);
		s=sum(a,n);
		if(snt(a,n,s)!=0)
		{
			long tong=snt(a,n,s);
			b[i]=tong;
			continue;
		}
		else
		{
			for(int j=n;j>0;j--)
			{
				if(s%j==0)
				{
					long tong=0;
					for(int p=0;p<n;p++)
					{
						tong=tong+a[p];
						if(tong > s/j)
						{
							break;
						}
						if(tong==s/j)
						{
							tong=0;
						}
						b[i]=s/j;
						break;
					}
				}
			}
		}
	}
	for(int i=0;i<t;i++)
	{
		cout << i+1 <<" "<< b[i+1] << endl;
	}
	return 0;
}
