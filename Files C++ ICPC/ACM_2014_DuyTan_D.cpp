#include<iostream>

using namespace std;

long long a[100];

void fibo(int n)
{
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	return;
}


int main()
{
	int t;
	cin >> t;
	fibo(91);
	while(t--)
	{
		int n;
		cin >> n;
		cout << a[n]<<endl;
	 } 
}


