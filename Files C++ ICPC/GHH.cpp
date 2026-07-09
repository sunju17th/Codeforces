#include<iostream>

using namespace std;

long a[1000006];

int main()
{
	long n;
	cin >> n;
	for(long i=0;i<n;i++)
		cin >> a[i];
	
	for(int i=0;i<n;i++)
	{
		long s=0;
		for(int j=1;j*j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				if(j!=a[i]/j)
					s+=j+a[i]/j;
				else s+=j;
			}
		}
		if(s>=2*a[i]) cout << "1" << endl;
		else cout <<"0"<<endl;
		
	}
}


