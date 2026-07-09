#include<iostream>

using namespace std;

int a[400000];

int main()
{
	int n;
	cin >> n;
	int m=1;
	for(int i=1;i<=n;i++)
	{
		a[i]=0;
		cout << a[i];
	}
	cout << endl;
	while(m!=0)
	{
		m=0;
		for(int i=n;i>0;i--)
		{
			if(a[i]==0)
			{
				m=1;
				a[i]=1;
				for(int j=i+1;j<=n;j++)
				{
					a[j]=0;
				}
				break;
			}
		}
		for(int i=1;i<=n;i++)
		{
			cout << a[i];
		}
		cout << endl;
	}
	
}
