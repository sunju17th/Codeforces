#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <long> a;
vector <long> b;

int main()
{
	int q;
	cin >> q;
	for(int t=0;t<q;t++)
	{
		long n, m;
		long s=0;
		cin >> n >> m;
		for(int i=0;i<n;i++)
		{
			long x;
			cin >> x;
			a.push_back(x);
		}
		for(int i=0;i<m;i++)
		{
			long x;
			cin >> x;
			b.push_back(x);
		}
		
		sort(a.begin(),a.end());
		
		for(int i=0;i<m;i++)
		{
			for(int j=i+1;j<m;j++)
			{
				if(b[i]<b[j])
				{
					swap(b[i],b[j]);
				}
			}
		}
		
		for(int i=0;i<n;i++)
		{
			s=s+abs(a[i]-b[i]);
		}
		cout << s  << endl;
	}
}
