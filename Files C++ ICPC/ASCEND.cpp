#include<iostream>

using namespace std;

void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}

bool kt(int a[], int n)
{
	for(int i=1;i<n;i++)
	{
		if(a[i-1]>a[i])
			return false;
	}
	return true;
}

int main()
{
	int a[10000], n;
	cin >> n;
	nhap(a,n);
	if(kt(a,n)==true)
		cout << "TRUE";
	else
		cout << "FALSE";
	return 0;
}

