#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string name;
	int s=1;
	getline(cin,name);
	for(int i=0;i<name.size();i++)
	{
		if(name[i]==name[i+1])
		{
			s=s+1;
		}
		else
		{
			if(s==1)
			{
				cout << name[i];
			}
			else
			{
				cout << s << name[i];
				s=1;
			}
		}
	}
	return 0;
}
