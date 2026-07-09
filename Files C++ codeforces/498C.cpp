#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	if(k<n||9*n<k) cout << -1 << " " << -1 <<endl;
	else
	{
		bool kt = true;
		string maxstr, minstr;
		
		int temp = k;
		
		for(int i=0;i<n;i++)
		{
			if(temp>=9) 
			{
				cout << temp <<" ";
				temp-=9;
				maxstr.push_back('9');
				
			}
			else 
			{
				maxstr = maxstr + char(temp);
				temp = 0;
			}
			cout << i << " ";
		}
		cout << maxstr;
	}
}


