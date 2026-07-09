#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t, a[10], kq[1000];
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		for(int j=0;j<11;j++)
		{
			cin >> a[j];
		}
		sort(a+1,a+11);
		kq[i]=a[8];
	}
	for(int i=1;i<=t;i++)
	{
		cout << i <<" "<<kq[i]<<endl;
	}
	return 0;
} 
