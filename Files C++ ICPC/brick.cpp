#include<iostream>

using namespace std;

int main()
{
	long long a,b,x,y;
	cin >> a >> b;
	for(int y=0;y<=(b+4)/2;y++)
	{
		x=(a+4)/2-y;
		if((x-2)*(y-2)==b)
		{
			if(x>y)
			{
				int temp=x;
				x=y;
				y=temp;
			}
			cout << x<<" "<<y;
			break;
		}
	}
}
