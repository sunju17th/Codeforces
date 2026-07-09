#include<iostream>

using namespace std;

long long luyThuaNhiPhan(int a, int b)
{
	long long ans=1;
	while(b>0)
	{	
		if(b%2==1) ans*=a;
		a*=a;
		b/=2;
	}
	return ans;
}

int main()
{
	int a,b;
	cin >> a >> b;
	cout << luyThuaNhiPhan(a,b);
	
}


