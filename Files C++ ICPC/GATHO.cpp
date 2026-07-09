#include<iostream>

using namespace std;

int main()
{
	long int m, n, x, y;
	cin >> m >> n;
	if(n%2!=0)
		cout << "-1";
	else
	{
		n=n/2;
		if(n-m<0)
			cout <<"-1";
		else
		{
			y=n-m;
			x=m-y;
			cout << x <<" "<< y ;	
		}	
	}
	return 0;
}
