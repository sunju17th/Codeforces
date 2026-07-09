#include<iostream>
#include<vector>

using namespace std;

struct bailam
{
	long can;
	long them;
};

vector <bailam> bl;

int main()
{
	long n, c, s=0;
	cin >> n >> c;
	for(int i=0;i<n;i++)
	{
		long a, b;
		cin >> a >> b;
		bl.push_back({a,b});
	}
	for(long i=0;i<n;i++)
	{
		for(long j=i;j<n;j++)
		{
			if(bl[i].can>bl[j].can)
			{
				bailam tam=bl[i];
				bl[i]=bl[j];
				bl[j]=tam;
			}
		}
	}
	for(long i=0;i<n;i++)
	{
		if(c>=bl[i].can)
		{
			c=c+bl[i].them;
			s++;
		}
		else
		{
			break;
		}
	}
	cout << s;
}
