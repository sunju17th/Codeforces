#include<iostream>

using namespace std;

long a[100007];

int main()
{
	int n;
	long max, min;
	cin >> n;
	cin >> a[1];
	max=a[1];
	min=a[1];
	for(int i=2;i<=n;i++)
	{
		cin >> a[i];
		if(a[i]>a[max]) max=i;
		if(a[i]<a[min]) min=i;
	}
	if(max<min)
	{
		cout << min-max+1<<" "<<max<<" "<<min;
	}
	else
	{
		cout << max-min+1<<" "<<min<<" "<<max;
	}
}
