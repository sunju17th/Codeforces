#include<iostream>

using namespace std;

long x[300000]={0}, y[300000]={0}, n, xcn[100000], ycn[100000], p;

void nhap(long x[], long y[], long n)
{
	for(int i=0;i<n;i++)
	{
		cin >> x[i];
		cin >> y[i];
	}
}

int main()
{
	cin >> n;
	nhap(x,y,n);
	cin >> p;
	for(int i=0;i<p;i++)
	{
		long x1, y1, x2, y2, s=0;
		cin >> x1 >> y1 >> x2 >> y2;
		for(int j=0;j<n;j++)
		{
			if(((x[j]==x1||x[j]==x2)&&(y[j]>=y1&&y[j]<=y2))||(y[j]==y1||y[j]==y2)&&(x[j]<=x2&&x[j]>=x1))
			{
				s=s+1;
			}
		}
		cout << s << endl;
	}
	return 0;
}
