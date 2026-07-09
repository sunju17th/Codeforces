#include<iostream>
#include<math.h>

using namespace std;

long labs(long x, long y)
{
	if(x-y>0) return x-y;
	else return y-x;
}

long a[100005];

int main()
{
	long n, k, s=0;
	cin >> n >> k;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(labs(a[i],a[j])==k) s++;
	
	cout << s;
}



