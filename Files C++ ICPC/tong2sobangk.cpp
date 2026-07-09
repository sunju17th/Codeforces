#include<iostream>
using namespace std;

void nhap(int n; int a[])
{
	for (int i=0;i<n;i++)
	{
		cout << "nhap so thu "<<i+1<<" ";
		cin >> a[i];
	}
}

int timso(int a[], int b[], int n, int k)
{
	for (int i = 0;i<n;i++)
	{
		b[i]=k-a[i];
	}
}
