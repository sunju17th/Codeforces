#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <long long> a, b;

int main()
{
	long n,m,i,j,s=0;
	cin >> n;
	for(i=0;i<n;i++)
	{		
		cin >> m;
		a.push_back(m);
	}
	for(i=0;i<n;i++)
	{
		cin >> m;
		b.push_back(m);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	i=n-1;
	j=n-1;
	while(i>=0&&j>=0)
	{
		if(a[i]>=b[j])
		{
			i--;
		}
		else
		{
			s++;
			i--;
			j--;
		}
	}
	cout << s;
	return 0;
} 
