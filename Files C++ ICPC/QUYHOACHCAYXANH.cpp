#include<iostream>

using namespace std;

long a[100005];
long temp[10005]={0};
int main()
{
	long n, maxd=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(i>=1)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i]>=a[j]&&temp[i]<temp[j]+1)
				{
					temp[i]=temp[j]+1;
					maxd=max(temp[i],maxd);
				}
			}
		}
	}
	maxd++;
	
	cout << n-maxd;
}
