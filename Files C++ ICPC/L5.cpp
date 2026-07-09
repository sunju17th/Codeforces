#include<iostream>
#include<math.h>

using namespace std;

long long a[100005]; 
long long k[100005];

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	k[1]=0;
	bool kt = true;
	
	for(int i=1;i+1<n;i++)
	{
		if(abs(abs(a[i]-a[k[i]])-abs(a[i]-a[i+1]))<=1) k[i+1]=i;
		else 
		{
			kt = false;
			for(int j=i-1;j>0;j--)
			{
				if(abs(abs(a[j]-a[k[j]])-abs(a[i+1]-a[j]))<=1)
				{
					kt = true;
					k[i+1]=j;
				}
			}
			
			if(kt == false) 
			{
				cout << "false";
				return 0;
			}
		}
	}
	
	cout<<"true";
}


