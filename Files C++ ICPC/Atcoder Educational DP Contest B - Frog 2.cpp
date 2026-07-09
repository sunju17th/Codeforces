#include<iostream>
#include<math.h>

using namespace std;

long a[100005];
long kq[100005];

int main()
{
	int n, k;
	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		kq[i]=1000000;
	}
	
	kq[0]=0;
	kq[1]=abs(a[1]-a[0]);
	
	for(int i=2;i<n;i++)
	{
		int j=i-k;
		if(j<0) j=0;
		for(j;j<i;j++)
		{
			kq[i]=min(kq[j]+abs(a[j]-a[i]),kq[i]);
		}
	}
	
	cout << kq[n-1];
}


