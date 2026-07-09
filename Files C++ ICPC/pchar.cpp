#include<iostream>
#include<string.h>

using namespace std;

string name;

int main()
{
	
	getline(cin,name);
	bool m=false;
	int s=0;
	for(long i=0;i<name.size();i++)
	{
		if(name[i]=='#')
		{
			m=true;
		}
		if(m==true&&name[i]=='.')
		{
			s++;
		}
	}
	cout << s;
	return 0;
} 
