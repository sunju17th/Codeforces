#include<iostream>

using namespace std;

int a[100005]; 

long long labs(long long x)
{
	if(x<0) return -x;
	else return x;
}

int main()
{
	int n;
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	long long larr = 0, rarr = 0;
	for(int i=0;i<n;i++)
	{
		if(i<n/2) larr+=a[i];
		else rarr+=a[i];
	}
	
	long long ans = labs(larr-rarr);
	cout << ans;
}


