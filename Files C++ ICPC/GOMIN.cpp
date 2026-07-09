#include<iostream>

using namespace std;

int main()
{
	int a[101];
	int n, t;
	cin >> n >> t;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int k;
	int tong=0;
	cin >> k;
	if(a[k-1]-t!=1 || a[k-1]+t!=a[n-1])
	{
		tong = a[n-1]+a[k-1]-2;
	}
	else tong = a[n-1]-1;
	cout << tong ;
}


