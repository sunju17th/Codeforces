#include<bits/stdc++.h>

using namespace std;

int main()
{
	int  n = 5000;

	for(int i=3;i<=5000;i++)
	{ 
		bool kt =false;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j == 0) kt = true; 
		}
		if(kt == false) cout << i << ", ";
	}
}


