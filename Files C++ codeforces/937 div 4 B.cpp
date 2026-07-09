#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n;
		cin >> n;
		int m=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((i+j)%2==0) cout << "##";
				else cout <<"..";
			}
			cout << endl;
			m++;
			if(m%2==0) continue;
			else 
			{
				i--;
			}
			
		}
	}
}


