#include<iostream>
#include<algorithm>

using namespace std;

int a[10000]={0}, b[100000]={0};

void nhap(int a[], int b[], int n)
{
	for(int i=0; i<n;i++)
	{
		cin >> a[i];
		int c;
		cin >> c;
		if(b[a[i]]<c)
		b[a[i]]=c;
	}
}

int main()
{
	int t, n;
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		int s=0;
		cin >> n;
		nhap(a,b,n);
		sort(b,b+10000);
		int j;
		for(j=0;j<10000;j++)
		{
			if(b[i]==0)
			{
				continue;
			}
			else
			{
				if(b[j]<b[j+1])
				{
					s=s+1;
				}
			}
			
		}
		cout << s << endl;
	}
	return 0;
}
