#include<iostream>

using namespace std;

int main()
{
	long t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n, k, m;
		int s[30]={0};
		char c[1007];
		cin >> n >> k >> m;
		for(int i=0;i<m;i++)
		{
			cin >> c[i];
			s[c[i]-'a']++;
		}
		bool kt=true;
		for(int i=0;i<k;i++)
		{
			if(s[i]<n)
			{
				cout <<"NO"<<endl;
				for(int j=0;j<n;j++)
				{
					char f='a'+i;
					cout << f;
				
				}
				kt=false;
				cout <<endl;	break;
			}
		}
		if(kt==true) cout << "YES" <<endl;
	}
}
