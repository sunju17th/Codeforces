#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		int n,s=0,j=1;
		cin >> n ;
		while(s<n)
		{
			s=s+j;
			j++;
		}
		if(s==n)
		{
			cout <<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
