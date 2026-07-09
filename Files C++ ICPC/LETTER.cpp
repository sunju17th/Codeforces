#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string name,name1,name2;
	int k;
	getline(cin,name);
	cin >> k;
	for(int i=0;i<k;i++)
	{
		name1=name[i]+name1;
	}
	for(int i=k;i<name.size();i++)
	{
		name2=name[i]+name2;
	}
	name=name1+name2;
	cout << name;
	return 0;
}
