#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		long long k;
		cin >> k;
		bool result=false;
		for(long i=sqrt(k)-1;i>0;i--)
		{
			if((2*k+i)%(2*i+1)==0)
			{
				cout << i << " " << (2*k+i)/(2*i+1)-1 << endl;
				result=true;
				break;
			}
		}
		if(result==false)
		{
			cout << "-1 -1" << endl;	
		}
	}
}
