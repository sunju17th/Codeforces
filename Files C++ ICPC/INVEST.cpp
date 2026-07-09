#include<iostream>

using namespace std;

long kt(long n,long k)
{
	long low=1, high=n/k+1;
	while(high>=low)
	{
		long mid=low+(high-low)/2;
		if(mid*k+mid*(mid-1)/2==n)
		{
			return mid;
		}
		else
		{
			if(mid*k+mid*(mid-1)/2<n)
				low=mid+1;
			else
				high=mid-1;
		}
	}
	return -1;
}

int main()
{
	long n;
	cin >> n;
	for(long i=n/2;i>0;i--)
	{
		if(kt(n,i)!=-1)
		{
			cout << i << " " << i+kt(n,i)-1 << endl;
		}
	}
}
