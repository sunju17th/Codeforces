#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string s, dn="";
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		dn=s[i]+dn;
	}
	cout << dn;
	return 0;
}
