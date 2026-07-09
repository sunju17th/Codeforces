#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string name;
	int i;
	getline(cin,name);
	while(name[0]==' ')
	{
		name.erase(name.begin());
	}
	for(i=0;i<name.size();i++)
	{
		if(name[i]!=' ')
		{
			cout << name[i];
		}
		else
		{
			for(i;i<name.size();i++)
			{
				if(name[i]!=' ')
				{
					i=i-1;
					cout << endl;
					break;
				
				}
			}
		}
	}
	return 0;
}
