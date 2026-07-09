#include<iostream>

using namespace std;

long s[10000][10000]={0};

int main()
{
	int n;
	cin >> n ;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> s[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << s[i][j];
		}
	}
}
