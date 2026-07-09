#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		if(a>b) swap(a,b);
		
		for(long i=b;i<=a*b;i++)
		{
			if(i%a==i%b) 
			{
				cout << i <<endl;
				break;
			}
		}
	} 
}


