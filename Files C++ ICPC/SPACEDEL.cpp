#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string name;
	int i=0;
	getline(cin,name);
	while(name[0]==' ')
	{
		name.erase(name.begin());
	}
	for(i=0;i<name.size();i++)
	{
		if(name[i]==' '&&name[i+1]==' ')
		{
			name.erase(name.begin()+i+1);
			i=i-1;
		}
	}
	cout << name;
}

