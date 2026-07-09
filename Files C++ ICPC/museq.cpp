#include<iostream>
#include<set>
#include<vector>

using namespace std;

set <long> pt;
vector <long> a;
set<long>::iterator it ; 

int main()
{
	int n, t;
	cin >> t;
	for(int p=0;p<t;p++)
	{
		cin >> n; 
		long x;
		pt.clear();
		a.clear();
		for(int i=0;i<n;i++)
		{
			cin >> x;
			a.push_back(x);
			pt.insert(x);
		}
		for(int i=0;i<n;i++)
		{
			it = pt.find(a[i]);
			int position = distance(pt.begin(), it) + 1;
			cout << position << " ";
		}
		cout << endl;
	}
} 
