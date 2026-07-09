#include<iostream>

using namespace std;

long long a[1000000], b[1000000], c[2000000];
long m, n, k, i=0, j=0; 

void nhap(long long a[], long n)
{
	for(long i=0;i<n;i++)
	{
		cin >> a[i];
	}
}


int main()
{
	cin >> m >> n;
	k=0;
	nhap(a,m);
	nhap(b,n);
	while( i<m && j<n && k<(m+n))
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	if(i==m)
	{
		for(j;j<n;j++)
		{
			c[k]=b[j];
			k++;
		}
	}
	else
	{
		for(i;i<m;i++)
		{
			c[k]=a[i];
			k++;
		}
	}
	cout << m+n << endl;
	for(k=0;k<(m+n);k++)
	{
		cout << c[k] << " ";
	}
	return 0;
}
