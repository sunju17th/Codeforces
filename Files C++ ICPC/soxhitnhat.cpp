#include<iostream>
#include<conio.h>
using namespace std;

void nhap(int n, int a[])
{
	for(int i=0;i<n;i++)
	{
	cout << "nhap so thu "<<i+1<<" ";
	cin >> a[i];
	}
}

void dem(int a[], int b[], int n)
{
	for(int i=0;i<n;i++)
	{
		int themang=a[i];
		while (themang!=0)
		{
			int k=themang%10;
			themang=themang/10;
			b[k]++;
		}
	}
}

int xmin(int b[])
{
	int min=b[0];
	for(int i=1; i<10;i++)
	{
		if(b[i]!=0)
		{
			if(b[i]<min)
			min = b[i];
		}
	}
	return min;
}

int main()
{
	int a[100], b[9], n, nho;
	cout <<"nhap n ";
	cin >> n;
	nhap(n,a);
	dem(a,b,n);
	nho=xmin(b);
	cout << nho;
	getch();
 	return 0;
}
