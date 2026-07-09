#include<iostream>

using namespace std;

long long a[200005];

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n;
		bool kt=false;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		for(int i=1;i<n-1;i++)
		{
			a[i-1]=a[i-1]-1;
			a[i]=a[i]-2;
			a[i+1]=a[i+1]-1;
			if(a[i]==0||a[i-1]==0||a[i+1]==0)
			{
				kt=true;
				cout << "YES" <<endl;
				break;
			}
		}
		if(kt==false)
		{
			cout << "NO" <<endl;
		}
	}	
	
}


