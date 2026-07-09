#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string name;
	int so=0;
	getline(cin,name);
	for(int i=0;i<name.size();i++)
	{
		if(isdigit(name[i]))
		{
			int number = name[i] - '0';
			so=so*10+number;
		}
		else
		{
			if(so==0)
			{
				cout << name[i];
			}
			else
			{
				for(int j=0;j<so;j++)
				{
					cout << name[i];
				}
				so=0;
			}
		}
	}
	return 0;
}
