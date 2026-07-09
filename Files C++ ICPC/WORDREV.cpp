#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string name,name1="",tu="";
	getline(cin,name);
	for(int i=0;i<name.size();i++)
	{
		if(name[i]==' ')
		{
			name1=tu+name1;
			name1=name1+name[i];
			tu=" ";
		}
		else
		{
			tu=tu+name[i];
		}
	}
	cout << name1;
}
