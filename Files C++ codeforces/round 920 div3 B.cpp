#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n, s=0, sa=0, sb=0;
		char a[100007];
		char b[100007];
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin >> b[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]=='0'&&b[i]=='1')
			{
				sa++;
			}
			if(b[i]=='0'&&a[i]=='1')
			{
				sb++;
			}
		}
		s=max(sa,sb);
		cout << s << endl;
	}
}
