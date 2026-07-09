#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long s = 0;
		long long a, b;
		cin >> a >> b;
		long long temp = 1;
		for(int i=0;i<=60;i++)
		{
			if(temp>b) break;
			if(temp>=a)s++;
			temp*=2;
		}
		cout << s << endl;
	}
}


