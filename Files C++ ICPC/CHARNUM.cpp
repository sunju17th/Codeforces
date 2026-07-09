#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string k;
	int s=0;
	getline(cin,k);
	for(int i=0;i<k.size();i++)
	{
		if(isdigit(k[i]))
		{
			s++;
		}
	}
	cout << s;
	return 0;
}
