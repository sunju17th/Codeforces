#include<iostream>

using namespace std;

int c[100005]={0}, a[200005], t[100005]={0};


int main()
{
	int n;
	long s=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]>0) c[a[i]] = 1;
		else t[a[i]] = 1;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[i]>0&&c[a[i]+a[j]]) s+=2;
			if(a[i]+a[i]<=0&&t[-a[i]-a[j]]) s+=2;
			
		}
	}
	
	cout << s;
}


