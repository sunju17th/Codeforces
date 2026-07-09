#include<iostream>

using namespace std;

int main()
{
	long long q;
	cin >> q;
	for(int t=0;t<q;t++)
	{
		long long n, x, y;
		cin >> n;
		for(long long i=n*n;i>n-1;i--)
		{
			if((n*n-i)%(i+1)==0)
			{
				x=(n*n-i)/(i+1);
				y=i;
				if(x==0||y==0) continue;
				if(x>y) cout << y << x << endl;
				else cout << x << y << endl; 
				break;
			}
		}
	}
}
