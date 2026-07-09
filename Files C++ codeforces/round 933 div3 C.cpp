#include<iostream>

using namespace std;

char name[1000006];

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		long n;
		long s = 0;
		cin >> n;
		for(long i=0;i<n;i++)
		{
			cin >> name[i];
		}
		
		for(int i=0;i<n-2;i++)
		{
			if(i+4<n)
			{
				if(name[i]=='m'&&name[i+1]=='a'&&name[i+2]=='p'&&name[i+3]=='i'&&name[i+4]=='e')
				{
					s++;
				}
			}
			if(name[i]=='m'&&name[i+1]=='a'&&name[i+2]=='p')
			{
				s++;
			}
			if(name[i]=='p'&&name[i+1]=='i'&&name[i+2]=='e')
			{
				s++;
			} 
		}
		cout << s << endl;
	}
}


