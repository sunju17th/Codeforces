#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		long n;
		cin >> n;
		
		for(long i=2;i*i <= n*n+1;i++)
		{
			if((n*n+1)%i==0)
			{
				long a = (n*n+1)/i;
				long b = (n*n+1)/a;
				a--;b--;
				cout << b << a << endl;
				break;
			} 
		}
	}
}


