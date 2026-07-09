#include<iostream>
#include<vector>

using namespace std;

struct giatri
{
	long stt;
	long long gtri;
};

vector <giatri> a;

int main()
{
	long n, k, s=0;
	cin >> n >> k;
	for(long i=0;i<n;i++)
	{
		long long x;
		cin >> x;
		a.push_back({i,x});
	}
	for(long i=0;i<a.size();i++)
	{
		for(long j=i+1;j<a.size();j++)
		{
			if(a[i].gtri<a[j].gtri)
			{
				giatri temp=a[i];
				a[i]=a[j];
				a[j] = temp;
			}
			
		}
	}
	a.erase(a.begin()+k,a.end());
	for(long i=0;i<a.size();i++)
	{
		for(long j=i+1;j<a.size();j++)
		{
			if(a[i].stt>a[j].stt)
			{
				giatri temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	for(long i=1;i<=a.size();i++)
	{
		s=s+a[i-1].gtri*i;
	}
	cout << s;
 } 

