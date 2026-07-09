#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n, k;
		cin >> n >> k;
		char c='a';
		for(long i=0;i<n*k;i++)
		{
			cout << c;
			c=c+1;
			if(c==k+'a') c='a';
		}
		cout << endl;
	}
}
