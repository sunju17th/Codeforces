#include<bits/stdc++.h>

using namespace std;

string a;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		
		cin >> a;
		
		bool kt = false;
		for(int i=0;i<a.size();i++)
		{
			if(a[i] == 'B') kt = true;
		}
			
		for(int i=0;i<m;i++)
		{
			long x;
			long s = 0;
			cin >> x;
			int k = 0;
			
			if(kt == false) cout << x << endl;
			else
			{
				while(x!=0)
				{
					if(a[k] == 'A') x-=1;
					else x/=2;
					k++;
					if(k==a.size()) k=0; 
					s++;
				}
				
				cout << s << endl;
			}
			
		}
	 } 
}


