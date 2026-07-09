#include<iostream>
#include<vector>

using namespace std;

vector<long> a;

int main()
{
	int n;
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
		for(long i=0;i<a.size();i++)
		{
			if(a[i]==l)
			{
				a.erase(a.begin()+i);
				cout << i << endl;
				for(int j=0;j<a.size();j++)
				{
					cout << a[j] << " ";
				}
				cout << endl;
			}
			if(a[i]==r)
			{
				a.erase(a.begin()+i);
				cout << a.size()-i << endl;
				for(int j=0;j<a.size();j++)
				{
					cout << a[j] << " ";
				}
				cout << endl;
			}
		}
		l++;r--;
	}
	
}


