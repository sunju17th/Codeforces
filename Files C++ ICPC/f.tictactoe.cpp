#include<iostream>

using namespace std;

char a[3][3];

int o, x, c;
bool wino=false, winx=false;

void pl(int x, int y)
{
	if(a[x][y]=='0') wino=true;
	if(a[x][y]=='X') winx=true;
	
}

int main()
{
	int n; cin >> n;
	while(n--)
	{
		wino=false; winx=false;
		o=x=c=0;
		
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
			{
				cin >> a[i][j];
				if(a[i][j]=='0') o++;
				if(a[i][j]=='X') x++;
				if(a[i][j]=='.') c++;
			}
			
		if(o>x||x-2>o) 
		{
			cout << "illegal" << endl;
			continue;
		}
		
		for(int i=0;i<n;i++)
		{
			if(a[i][0]==a[i][1]&&a[i][1]==a[i][2])
				pl(i,0);
			if(a[0][i]==a[1][i]&&a[2][i]==a[0][i])
				pl(0,i);
		}
		if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]) 
			pl(1,1);
		if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]) 
			pl(1,1);
		
		if(winx==true&&wino==true)
		{
			cout << "illegal" << endl;
			continue;
		}
		if(winx==true)
		{
			cout << "the first player won" << endl;
			continue;
		}
		if(wino==true)
		{
			cout << "the second player won" << endl;
			continue;
		}
		if(c!=0)
		{
			if(x>o) 
			{
				cout<<"second"<<endl;
				continue;
			}
			else
			{
				cout<<"first"<<endl;
				continue;
			}
		}
		else
		{
			cout <<"draw"<<endl;
			continue;
		}
	}
	
}


