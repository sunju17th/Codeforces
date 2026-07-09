#include<iostream>
#include<vector>

using namespace std;

vector <vector<int> > vuon;
vector <vector<int> > temp;

int main()
{
	long a, b;
	
	long v=0, x=0, h=0, t=0;
	
	cin >> a >> b;
	
	vuon.resize(a+2, vector<int>(b+2, 0));
	temp.resize(a+2, vector<int>(b+2, 0));
	
	for(long i=1;i<=a;i++)
	{
		for(long j=1;j<=b;j++)
		{
			cin >> vuon[i][j];
		}
	}
	
	int q;
	cin >> q;
	for(int i=0;i<q;i++)
	{
		long xl, yl, xr, yr;
		cin >> xl >> yl >> xr >> yr;
		
		temp[xl][yl]++;
		temp[xl][yr+1]--;
		temp[xr+1][yl]--;
		temp[xr+1][yr+1]++;
	}
	
	for(long i=1;i<=a;i++)
	{
		for(long j=1;j<=b;j++)
		{
			temp[i][j]=temp[i][j-1]+temp[i][j];
		}
	}
	
	
	for(long j=1;j<=b;j++)
	{
		for(long i=1;i<=a;i++)
		{
			temp[i][j]+=temp[i-1][j];
			vuon[i][j]+=temp[i][j];
			
			if(vuon[i][j]%4==0) v++;
			if(vuon[i][j]%4==1) x++;
			if(vuon[i][j]%4==2) h++;
			if(vuon[i][j]%4==3) t++;
		}
	}
	
	cout << v <<" "<<x<<" "<<h<<" "<<t;
}
