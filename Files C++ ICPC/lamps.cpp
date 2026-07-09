#include<iostream>


using namespace std;

long a[100005];

long absl(long n)
{
	if(n>0) return n;
	else return -n;
}

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	int x=1e5, y=1e5;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(absl(a[i]-a[j])>absl(a[x]-a[y]))
			{
				x=i;y=j;
			}
			
		}
	}
	cout << y-x+1 << " " << x+1 << " "<< y+1;
}


