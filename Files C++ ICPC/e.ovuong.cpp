#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long t;
	cin >> t;
	int n, x, y, s;
	for(int i=1;i<=t;i++)
	{
		cin >> n;
		float r;
		s=0;
		for(x=1;x<n;x++)
		{
			for(y=-n;y<n;y++)
			{
				if(y==0)
					y++;
				if(sqrt(x*x+y*y)<=n-0.5)
				{
					s++;
				}
			}
		}
		cout << s*2 << endl;
	}
	return 0;
}
