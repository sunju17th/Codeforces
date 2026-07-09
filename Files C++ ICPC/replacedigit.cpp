#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		string name;
		cin >> name;
		for(int j=0;j<name.size();j++)
		{
			if(name[j]=='0')
			{
				name[j]='5';
			}
		}
		cout << name << endl;
	}
	return 0;
}
