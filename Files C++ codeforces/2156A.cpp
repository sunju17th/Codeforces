#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long n;
		cin >> n;
		
		if(n <= 2) cout << 0 << endl;
		else
		{
			long hao = 0;
			long remain = n;
			do
			{
				hao = hao + remain/3;
				remain = remain - 2*remain/3;
				
				if(remain <= 2) remain = 0;
			}
			while(remain != 0);
			
			cout << hao << endl;
		}
	 } 
}


