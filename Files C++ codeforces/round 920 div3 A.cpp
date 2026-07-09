#include<iostream>
#include<math.h>

using namespace std;

struct canh
{
	int x;
	int y;
};

canh c[5];

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int r, t;
		for(int j=0;j<4;j++)
		{
			int a, b;
			cin >> a >> b;
			c[j]={a,b};
		}
		for(int j=1;j<4;j++)
		{
			if(c[j].x==c[0].x)
			{
				r=abs(c[j].y-c[0].y);
			}
			if(c[j].y==c[0].y)
			{
				t=abs(c[j].x-c[0].x);
			}
		}
		cout << r*t << endl;
	}
	
}
