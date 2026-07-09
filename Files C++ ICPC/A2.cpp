#include<iostream>

using namespace std;

int a[1002][1002]={0};

int main()
{
	int n;
	cin >> n;
	int x, y, x1, y1;
	
	long s = 0, stc = 0;
 	
	for(int i=0;i<n;i++)
	{
		cin >> x >> y >> x1 >> y1;
		a[x][y]++;
		a[x1+1][y]--;
		a[x][y1+1]--;
		a[x1+1][y1+1]++;
	}
	
	
	for(int i=1;i<1001;i++)
	{
		for(int j=1;j<1001;j++)
		{
			a[i][j] += a[i][j-1];
		}
	}
	
	for(int i=1;i<1001;i++)
	{
		for(int j=1;j<1001;j++)
		{
			a[i][j] += a[i-1][j];
		}
	}
	
	for(int i=0;i<1001;i++)
	{
		for(int j=0;j<1001;j++)
		{
			bool kt=false;
			if(a[i][j] != 0 && a[i+1][j] != 0 && a[i][j+1] !=0 && a[i+1][j+1]!=0)
			{
				s++;
				kt=true;
			}
				
			if(a[i][j] != 1 && a[i+1][j] != 1 && a[i][j+1] !=1 && a[i+1][j+1]!=1 && kt==true)
				stc++;
		}
	}
	
	if(stc>0) cout << "YES"<<endl;
	else cout << "NO"<<endl;
	
	cout << s << endl << stc ;

}


