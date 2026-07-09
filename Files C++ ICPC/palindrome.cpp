#include<iostream>
#include<string.h>

using namespace std;

int k[1000][1000]={0};
string name;

int min(int a, int b)
{
	if(a>=b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int palin(string name)
{
	int x=name.length()-1;
	for(int i=x-1;i>=0;i--)
	{
		for(int j=i+1;j<=x;j++)
		{
			if(name[i]==name[j])
			{
				k[i][j]=k[i+1][j-1];
			}
			else
			{
				k[i][j]=1+min(k[i][j-1],k[i+1][j]);
			}
		}
	}
	return k[0][x];
}

int main()
{
	getline(cin,name);
	int s=palin(name);
	cout << s;
	return 0;
}
