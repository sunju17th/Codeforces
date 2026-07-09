#include<iostream>
#include<cctype>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		char a[20], b[20], c[20];
		int n;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin >> b[i];
		}
		for(int i=0;i<n;i++)
		{
			cin >> c[i];
		}
		bool r=false;
		for(int i=0;i<n;i++)
		{
			 
			if(isupper(a[i])&&tolower(a[i])!=b[i])
			{
				r=true;
			}
			if(islower(a[i])&&a[i]==b[i]&&a[i]!=c[i])
			{
				r=true;
			}
			if(isupper(b[i])&&tolower(b[i])!=a[i])
			{
				r=true;
			}
			if(islower(b[i])&&b[i]==a[i]&&b[i]!=c[i])
			{
				r=true;
			}
		}
		if(r==true)
		{
			cout <<"YES"<<endl;
		}
		else
		{
			cout <<"NO"<<endl;
		}
	}
}

