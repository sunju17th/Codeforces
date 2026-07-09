#include<iostream>

using namespace std;

int main()
{
	long a, b, c, max=0;
	cin >> a >> b >> c;
	for(int i=0;a*i<=c;i++)
	{
		for(int j=(c%b+1);b*j<=c;j--)
		{
			if(a*i+b*j>c)
			{
				break;
			}
			if(a*i+b*j>max)
			{
				max=a*i+b*j;
			}
		}
	}
	cout << max;
} 
