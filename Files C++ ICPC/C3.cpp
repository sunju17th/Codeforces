#include<iostream>

using namespace std;

long a[100005][5]; 

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i][1] >> a[i][2];
	}
	
	long long k;
	cin >> k;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i][1]>a[j][1])
			{
				swap(a[i][1],a[j][1]);
				swap(a[i][2],a[j][2]);
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		k=k-a[i][1];
		if(k<=0)
		{
			cout << a[i][1];
			return 0;
		}
	}
}


