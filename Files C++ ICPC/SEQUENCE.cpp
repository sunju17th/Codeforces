#include<iostream>

using namespace std;

long n, k, i, j;
long long a[100001];

void nhap(long long a[],long n)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}

long max(long long a[], long n, long *k)
{
	for(long i=0;i<n;i++)
	{
		int k=0;
		if(a[k]<a[i])
		{
			k=i;
		}
	}
	return *k;
}

int main()
{
	long long s;
	cin >> n;
	nhap(a,n);
	k=max(a,n,&k); cout << k<<endl;
	j=max(a,k,&j); cout << j<< endl;
	i=max(a,j,&i); cout << i<<endl;
	s=a[k]*3+a[j]*2+a[i];
	cout << s;
	return 0;
}
