#include<iostream>
using namespace std;

void nhap(int a[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout << "nhap so thu " << i+1 ;
		cin >> a[i];
	}
}

int min(int a[], int n)
{
	int nho = a[0];
	for (int i=0;i<n;i++)
	{
		if(min > a[i])
		nho = a[i];
	}
	return nho;
}

int ucln(int a[], int n)
{
	int nho=min(a,n);
	for (int i=0;i<nho;i++)
	{
		for (int j=0;j<n;j++)
		{
			
		}
	}
	
}
