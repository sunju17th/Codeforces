#include<iostream>
#include<math.h>

using namespace std;

long a[100005];
long kq[100005]={0};

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	kq[0] = 0;
	kq[1] = abs(a[1]-a[0]);
	
	for(int i=2;i<n;i++)
	{
		kq[i] = min(kq[i-2]+abs(a[i-2]-a[i]), kq[i-1]+abs(a[i-1]-a[i]));
	}
	
	cout << kq[n-1] << endl;
	
	
}


