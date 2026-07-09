#include<iostream>
#include<string.h>

using namespace std;

string name1,name2;

int l[1000][1000]={0};

int main()
{
	getline(cin,name1);
	getline(cin,name2);
	int x=name1.length();
	int y=name2.length();
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(name1[i]==name2[j])
			{
				l[i+1][j+1]=1+l[i][j];
			}
			else
			{
				l[i+1][j+1]=max(l[i+1][j],l[i][j+1]);
			}
		}
	}
	cout << l[x][y];
}
