#include<iostream>

using namespace std;

long a[1000], x1, x2;
int n, r; 


int main()
{
	cin >> n >> r >> x1 >> x2;
	for(int i=0;i<n;i++)
	{
		cin >> a[i]; 
		if((a[i]<x1+r&&a[i]>x1-r)||(a[i]<x2+r&&a[i]>x2-r))
			continue;
		if(x1>x2)
		{
			if(a[i]>x1)
			{
				cout<<"GOAL";
				return 0;
			}
		}
		else
		{
			if(a[i]<x1)
			{
				cout<<"GOAL";
				return 0;
			}
		}
	}
	cout <<"NO GOAL";
	return 0;
}

