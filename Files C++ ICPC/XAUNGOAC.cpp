#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string name;
	getline(cin,name);
	if(name.size()%2==0)
	{
		for(int j=0;j<50;j++)
		{
			for(int i=0;i<name.size();i++)
			{
				if(name[i]=='('&&name[i+1]==')')
				{
					name.erase(name.begin()+i,name.begin()+i+1);
					i=i-1;
				}
			}
			if(name.size()==0)
				break;
		}
		cout << "TRUE";
	}
	else
		cout << "FALSE";
}
