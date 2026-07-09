#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n, m;
		string namen,  namem;
		cin >> n >> namen >> m >> namem;
		string D;
		cin >> D;
		
		int l=0;
		
		for(int i=0;i<D.size();i++)
		{
			if(D[i]=='D')
			{
				namen += namem[l];
				l++;
			}
			else
			{
				namen = namem[l] + namen;
				l++;
			}
		}
		cout << namen << endl;
	} 
}


