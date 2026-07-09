#include<iostream>
#include<algorithm>

using namespace std;

long int a[100000], n,s=1; 

void nhap(long int a[],long int n)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}

int main()
{ 
	cin >> n;
	nhap(a,n);
	sort(a,a+n);
	for(int i=0;i<(n-1);i++)
	{
		if(a[i]!=a[i+1])
		{
			s++;
		}
	}
	cout << s;
	return 0;
}
