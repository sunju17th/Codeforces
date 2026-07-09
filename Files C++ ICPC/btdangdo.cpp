#include<iostream>
#include<string.h>
#include<cctype>

using namespace std;

int main()
{
	string name;
	int a[26]={0};
	getline(cin,name);
	for(int i=0;i<name.size();i++)
	{
		if(isupper(name[i]))
		{
			a[name[i]-'A']++;
		}
		if(islower(name[i]))
		{
			name[i]=toupper(name[i]);
			a[name[i]-'A']++;
		}	
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]>0)
		{
			cout << (char)(i+'A') << " " << a[i] << endl;
		}
	}
	return 0;
}
