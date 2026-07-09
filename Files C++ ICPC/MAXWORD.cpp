#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string name;
	int s=0, max=0;
	getline(cin,name);
	for(int i=0;i<name.size();i++)
	{
		if(name[i]!=' ')
		{
			s++;
			if(s>max)
			{
				max=s;
			}
		}
		else
		{
			s=0;
		}
	}
	cout << max;
	return 0; 
}
