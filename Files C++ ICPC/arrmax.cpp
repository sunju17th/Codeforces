#include<iostream>

using namespace std;
long long a[1000000];
int n;
int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		
	}
	long long kq=a[0];
	for(int i=0;i<n;i++)
		if(kq<a[i])
		{
			kq=a[i];
		}
	cout << kq;
	return 0;
}
