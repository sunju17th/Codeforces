#include<iostream>

using namespace std;

bool kt(long a)
{	
	long s=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			s=s+i;
		}
	}
	if(a==s)
		return true;
	else
		return false;
}

int main()
{
	long m, n, s=0;
	cin >> m >> n;
	for(m;m<=n;m++)
	{
		if(kt(m)==true)
		{
			cout << m << endl;
			s=s+1;
		}
	}
	if(s==0)
	cout<<"absent";
	return 0;
}
