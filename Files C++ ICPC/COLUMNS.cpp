#include<iostream>
#include<math.h>

using namespace std;

long long a[3000006];

int main()
{
	long n, s=0, moc=0, result=0;
	cin >> n;
	for(long i=0;i<n;i++)
	{
		cin >> a[i];
		if(i>0)
		{
			s=s+a[i]-a[i-1];
		}
	}
	s=s/(n-1);
	for(int i=1;i<n;i++)
	{
		if(a[i]-a[i-1]==s)
		{
			moc=i;
			break;
		}
		
	}
	long l=moc-1,r=moc+1;
	while(l>=0||r<=n-1)
	{
		if(l>=0) 
		{
			long temp=a[l];
			a[l]=a[l+1]-s;
			result=result+abs(temp-a[l+1]+s);
		}
		if(r<=n-1) 
		{
			long temp=a[r];
			a[r]=a[r-1]+s;
			result=result+abs(temp-a[r-1]-s);
		}
		l--;
		r++;
	}
	cout << result <<" "<<a[0]<<" "<<s;
}
