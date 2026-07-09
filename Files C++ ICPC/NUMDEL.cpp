#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string name;
	getline(cin,name);
	for(int i=0;i<name.size();i++)
	{
		if(isdigit(name[i]))
		{
			name.erase(name.begin()+i);
			i--;
		}
	}
	cout << name;
	return 0;
}
