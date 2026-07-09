#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		int k;
		long long s=0;
		cin >> k;
		for(int a=1;a<k;a++)
		{
			for(int b=a+1;b<k;b++)
			{
				if(a+b<=k)
				{
					s++;
				}
				else
				{
					break;
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}
