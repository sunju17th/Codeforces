#include<iostream>
#include<vector>

using namespace std;

vector <long long> a;

long timmax(long n,long max)
{
	max=max+1;
	for(long i=max;i<n;i++)
	{
		if(a[i]>a[max])
		{
			max=i;
		}
	}
	return max;
}

int main()
{
	int t;
	long n, max, moc;
	long long s=0;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		max=0;s=0;moc=0;
		a.clear();
		cin >> n;
		for(long i=0;i<n;i++)
		{
			long long x;
			cin >> x;
			a.push_back(x);
		}

		while(moc<n)
		{
			max=timmax(n,max);
			s=s+a[max]*(max-moc);
			for(long i=moc;i<max;i++)
			{
				s=s-a[i];
			}
			moc=max+1;
		}
		cout << s <<endl;
 	}
	
}
