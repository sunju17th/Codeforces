#include<iostream>

using namespace std;

long long a[1001];

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
		
	int l=0, r=n-1;
	
	long long d=0, s=0;
	
	while(l<=r)
	{
		if(a[l]>a[r])
		{
			s+=a[l];
			l++;
		}
		else
		{
			s+=a[r];
			r--;
		}
		
		if(r<l) break;
		
		if(a[l]>a[r])
		{
			d+=a[l];
			l++;
		}
		else
		{
			d+=a[r];
			r--;
		}
		
	}
	
	cout << s << " " << d;
}


