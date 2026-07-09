#include<iostream>
#include<string>

using namespace std;

int main()
{
	long long s=0;
	string name;
	cin >> name;
	for(long i=1;i<name.size();i++)
	{
		if(name[i]=='.')
		{
			long l=i-1;
			long r=i+1;
			long tl=0;
			long tr=0;
			while(l>=0||r<name.size())
			{
				if(name[r]=='T')
				{
					tr++;
				}
				if(name[l]=='T')
				{
					tl++;
				}
				l--;
				r++;
			}
			s=s+tr*tl;
		}
	}
	cout << s;
}
