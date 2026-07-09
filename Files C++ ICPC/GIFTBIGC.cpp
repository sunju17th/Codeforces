#include<iostream>

using namespace std;

long long minbuy[100007][100007]={0};
long long giaban[100007];
long long giatang[100007];

int main()
{
	int n, maxbuy=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> giaban[i];
	}
	for(int i=0;i<n;i++)
	{
		cin >> giatang[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(j==i+1)
			{
				minbuy[i][j]=min(giatang[i],giatang[j]);
			}
			else
			{
				minbuy[i][j]=min(minbuy[i][j-1],giatang[j]);
			}
			int minmua=min(minbuy[i][j],giaban[i]+giaban[j]);
			if(maxbuy<minmua)
			{
				maxbuy=minmua;
			}
		}
	}
	cout << maxbuy;
}
