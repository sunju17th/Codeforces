#include<iostream>

using namespace std;

int main()
{
	int a[7];
	for(int i=0;i<8;i++)
	{
		cin >> a[i];
	}
	if(a[0]>a[1])
	{
		for(int i=1;i<8;i++)
		{
			if(a[i]<a[i+1])
			{
				cout <<"mixed";
				return 0;
			}
		}	
		cout <<"descending";
	}
	else
	{
		for(int i=1;i<8;i++)
		{
			if(a[i]>a[i])
			{
				cout << "mixed";
				return 0;
			}
			
		}
		cout <<"ascending";
	}
	return 0;
}
