#include<iostream>

using namespace std;

long a[1002];
long n, l;

int main()
{
	cin >> n >> l;
	for(int i=1;i<n;i++) cin >> a[i];
	a[n] = l;
	a[0] = 0;
	
	for(int i=0;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(a[i]<a[j]) swap(a[i],a[j]);
			
	long maxDis = -1;
	for(int i=0;i<=n;i++)
	{
		if(a[i]-a[i+1] > maxDis) maxDis = a[i] - a[i+1];
	}
	
	cout << maxDis/2 << endl;
	
	for(int i=0;i<=n;i++)
	{
		cout << a[i] <<" ";
	}
}


