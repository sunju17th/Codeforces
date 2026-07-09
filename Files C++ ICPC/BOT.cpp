#include<iostream>
#include<vector>

using namespace std;

vector <long long> a;

int main()
{
	long n;
	cin >> n;
	for(long i=0;i<n;i++)
	{
		long long x;
		cin >> x;
		a.push_back(x);
	}
	long long maxk=a[0];
	long long maxkq=a[0];
	long x=0;
	for(long i=1;i<n;i++)
	{
		maxk=max(maxk+a[i],a[i]);
		if(maxkq<maxk)
		{
			x=i;
			maxkq=maxk;
		}
	}
	maxk=maxkq;
	for(long i=x;i>0;i--)
	{
		maxk=maxk-a[i];
		if(maxk==0)
		{
			cout << i+1 <<" "<< x+1 <<" "<<maxkq;
			break;
		}
	}
}



