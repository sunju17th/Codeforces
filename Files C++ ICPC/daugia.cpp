#include<iostream>

using namespace std;

bool kt(int a)
{
	int s=0, i=0, b=a;
	while(b!=0)
	{
		i=b%10;
		b=b/10;
		s=s*10+i;
	}
	if(s==a)
		return true;
	else 
		return false;
}

bool snt(int a)
{
	for(int i=2;i<(a/2);i++)
	{
		if(a%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int m, n, i=0;
	cin >> n >> m;
	for(n;n<=m;n++)
	{
		if(kt(n)==true&&snt(n)==true)
		{
			i++;
		}
	}
	cout << i;
	return 0;
}

