#include<iostream>
#include<vector>

using namespace std;

vector<long> a;

int main()
{
	long n;
	cin >> n;
	long x;
	for(int i=1;i<=n;i++)
	{
		cin >> x;
		a.push_back(x);
	}
	long l=1, r=n;
	while(l<r)
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]==l)
			{
				a.erase(a.begin()+i);
				cout << i <<endl;
			}
		}
		for(int i=0;i<a.size();i++)
		{
			if(a[i]==r)
			{
				a.erase(a.begin()+i);
				cout << a.size()-i <<endl;
			}
		}
		l++;r--;
		if(a.size()==1) cout << "0";
	}
	
}


