#include<iostream>

using namespace std;

int a[100005];
int t[100005]={0};

int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	int q;
	cin >> q;
	for(int i=0;i<q;i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		t[x] += z;
		t[y+1]-=z;
	}
	for(int i=1;i<=n;i++)
	{
		t[i]+=t[i-1];
	}
	
	int xanh=0,vang=0,d0=0;
	for(int i=1;i<=n;i++)
	{
		a[i]+=t[i];
		if(a[i]%3==0) xanh++;
		if(a[i]%3==1) vang++;
		if(a[i]%3==2) d0++;
	}
	
	cout << xanh <<" "<<vang<<" "<<d0;
	
	
}


