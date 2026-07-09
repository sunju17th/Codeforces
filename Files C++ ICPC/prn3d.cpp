#include<iostream>
#include<math.h>


using namespace std;

int main()
{
	long long n,s;
	cin >> n;
	for(long long i=sqrt(n)+1;i>0;i--)
	{
		if(n%i==0)
		{
			s=i+n/i-1;
		}
	}
	cout << s;
}
