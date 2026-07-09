#include<iostream>

using namespace std;

int main()
{
	int n, l, r;
	cin >> n >> l >> r;
	if(l+r > n+1 || l+r<=2) 
	{
		cout <<"no";
	}
	else
	{
		if(l>=r)
		{
			cout << "yes" << endl;
			for(int i = n-l+1;i<=n;i++)
				cout << i << " ";
			for(int i=1;i<=n-l-r+1;i++)
				cout << i << " ";
			for(int i=n-l;i>n-l-r+1;i--)
				cout << i << " ";
		}
		else 
		{
			cout << "yes" << endl;
			for(int i=n-l-r+2;i<n-l;i++)
				cout << i << " ";
			for(int i=n-l-r+1;i>=1;i--)
				cout << i << " ";
			for(int i=n;i>=n-l;i--)
				cout << i << " ";
		}
	}
}


