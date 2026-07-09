#include<iostream>
#include<string>
#include<math.h>

using namespace std;

string a, b;

int main()
{
	int n, s=0, pass, bd;
	cin >> n;
	cin >> a;
	cin >> b;
	for(int i=0;i<n;i++)
	{
		bd=a[i]-'0';
		pass=b[i]-'0';
		if(abs(bd-pass)>10-abs(bd-pass))
		{
			s=s+10-abs(bd-pass);
		}
		else
		{
			s=s+abs(bd-pass);
		}
	}
	cout << s;
	return 0;
}
