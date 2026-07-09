#include<iostream>

using namespace std;

int a[1000];

void nhap(int n, int a[])
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}

int arrmax(int a[],int n)
{
	int i=0;
	int j=n-1;
	while(i!=j)
	{
		if(a[i]>a[j])
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	return a[i];
}

int main()
{
	int n;
	cin >> n;
	nhap(n,a);
	int s=arrmax(a,n);
	cout << s;
}
