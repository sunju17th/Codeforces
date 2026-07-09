#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

vector <string> name;

int main()
{
	long n, s=0, max=0, m=0;
	string h;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		s++;
		cin >> h;
		name.push_back(h);
		for(int j=i-1;j>=m;j--)
		{
			if(name[i]==name[j])
			{
				s=1;
				m=i;
				break;
			}
		}
		if(s>max)
		{
			max=s;
		}
	}
	cout << max;
}
