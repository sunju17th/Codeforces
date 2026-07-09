#include<iostream>

using namespace std;

int main()
{
	long n, s=0;
	for(n=0;n<1000;n++)
	{
		for(long i=1;i<n;i++)
		{
			if(n%i==0)
			{
				s=s+i;
			}
		}
		if(s==n)
		{			
			cout << n << endl;
		}
		s=0;
	}
	return 0;
	
}
