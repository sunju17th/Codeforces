#include<iostream>

using namespace std;

long long s[10000][10000]={0};

int main()
{
	int n,k;
	cin >> n >> k;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=k;j++)
		{
			if(j==0)
			{
				s[i][j]=0;
			} 
			else
			{
				if((i==0&&j>0)||j==1)
				{
					s[i][j]=1;
				}
				else
				{
					if(i<j)
					{
						s[i][j]=s[i][i];
					}
					else
					{
						s[i][j]=s[i][j-1]+s[i-j][j];
					}
				}
			}
		}
	}
	cout << s[n][k];
	return 0;
}
