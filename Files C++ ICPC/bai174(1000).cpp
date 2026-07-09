#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << "nhap so thu ";
		cin >> a[i];
	}
}

void sx(int a[], int n)
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1; j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		
	}
}

int main()
{
	int a[100], n, i, j;
	cout << "nhap n ";
	cin>>n;
	nhap(a,n);
	sx(a,n);
	for(i=0;i<n;i++)
	cout << a[i] << endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			cout << a[i] << " " << a[j] << endl;
		}
	}
	return 0;
}
