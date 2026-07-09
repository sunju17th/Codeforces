#include<iostream>

using namespace std;

int a[1001];

int main()
{
	for(int i=0;i<=1000;i++)
	{
		a[i]=0;
	}
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		a[x]++;
	}
	int max=0;
	for(int i=0;i<=1000;i++)
	{
		if(a[i]>max)
			max = a[i];
	}
	
	cout << max;
}


