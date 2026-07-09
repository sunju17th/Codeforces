#include<iostream>

using namespace std;

bool kt(long a)
{
	for(int i=2;i<a;i++)
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
	long int m, n, s=0;
	cin >> n >> m;
	if(n==1) n=2;
	for(n;n<=m;n++)
	{
		if(kt(n)==true||n==2||n==3)
		{
			cout << n << endl;
			s++;
		}
	}
	if(s==0) cout <<"Absent";
	return 0;
}
