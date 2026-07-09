#include<iostream>

using namespace std;

long long giaithua(int n)
{
	if(n==1)
		return 1;
	return n*giaithua(n-1);
}

int main()
{
	int n;
	long long s=0, t;
	cin >> t;
	int k;
	for(int i=1;i<=t;i++)
	{
		cin >> n;
		k=0;
		for(int j=n;j>=0;j=j-2)
		{
			k=j+1;
			s=giaithua(n)/(giaithua(k)*giaithua(n-k))+s;
		}
		cout << s << endl;
	}
	return 0;
	 
} 
