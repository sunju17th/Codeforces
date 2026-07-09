#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		int p, n, s=0;
		cin >> n >> p;
		for(int i=1;i<=n;i++)
		{
			if(p*i>n)
			{
				break;
			}
			int x=p*i;
			while(x%p==0)
			{
				s++;
				x=x/p;
			}
		}
		cout << s << endl;
	}
	return 0;
}
