#include<iostream>
#include<math.h>

using namespace std;

long so[1000];

bool snt(long a)
{
	if(a%2==0)
	{
		return false;
	}
	else
	{
		for(int i=3;i<a/2;i=i+2)
		{
			if(a%i==0)
			{
				return false;
			}
		}
		return true;
	}
}

void mangsnt(long so[],long b)
{
	so[0]=2;
	so[1]=3;
	int j=2;
	for(int i=5;i<sqrt(b);i++)
	{
		if(snt(i)==true)
		{
			so[j]=i;
			j++;
		}
	}
}

bool kt(long x, long y)
{
	for(int m=0;m<=sqrt(y);m++)
	{
		if((x%so[m]==0&&y%so[m]!=0)||(x%so[m]!=0&&y%so[m]==0))
			return false;		
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	for(int k=0;k<t;k++)
	{
		long a,b,x,y;
		int dem=0;
		cin >> a >> b;
		mangsnt(so,b);
		for(int n=0;n<b;n++)
		{
			cout<<so[n]<<" ";
		}
		for(x=a;x<=b;x++)
		{
			for(y=a+1;y<=b;y++)
			{
				if(kt(x,y)==true)
				dem++;
			}
		}
		cout << dem;
	}
	return 0;
}
