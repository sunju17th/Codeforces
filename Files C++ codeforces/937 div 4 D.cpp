#include<iostream>

using namespace std;

int a[15] = {10,11,100,101,110,111,1000,1001,1010,1100,1110,1101,1011,1111,10000};

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n;
		cin >> n;
		int m=n;
		bool kt=true;
		while(m>0)
		{
			int k=m%10;
			if(k!=0&&k!=1) kt=false;
			m=m/10;
		}
		if(kt==true) cout << "YES" <<endl;
		else
		{
			for(int i=0;i<=14;i++)
			{
				while(n%a[i]==0)
				n/=a[i];
			}
			if(n==1) cout << "YES" <<endl;
			else cout <<"NO"<<endl;
		}
		
	}
}


