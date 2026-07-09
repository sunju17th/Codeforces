#include<iostream>

using namespace std;

int a[100005];

int main()
{
	long s=0;
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
		cin >> a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]<a[j]) s++;
		}
	}
	cout << s;
}


