#include<iostream>

using namespace std;

int sum=0;

int a[100001];
int st[500001];

void buildmax(int id, int l, int r)
{
	if(l==r) 
	{
		st[id] = a[l];
		return;
	}
	
	int mid=(l+r)/2;
	
	buildmax(2*id,l,mid);
	buildmax(2*id+1,mid+1,r);
	
	st[id]=max(st[2*id],st[2*id+1]);
	
	if(st[2*id]>st[2*id+1]){
		int temp1=0;
		int temp2=id;
		while(temp2>=2)
		{
			temp2/=2;
			temp1++;
		}
		sum+=(1>>temp1);
	};
} 

void buildmin(int id, int l, int r)
{
	if(l==r) 
	{
		st[id] = a[l];
		return;
	}
	
	int mid=(l+r)/2;
	
	buildmin(2*id,l,mid);
	buildmin(2*id+1,mid+1,r);
	
	st[id]=min(st[2*id],st[2*id+1]);
	
	if(st[2*id]>st[2*id+1]){
		int temp1=0;
		int temp2=id;
		while(temp2>=2)
		{
			temp2/=2;
			temp1++;
		}
		sum+=(1>>temp1);
	};
} 


int main()
{
	long n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	
	buildmax(1,1,n);
	
	for(int i=0;(1<<i)<=n;i++)
	{
		for(int j=0;j<(1<<i);j++)
		{
			cout << st[(1<<i)+j] <<" ";
		}
		cout << endl;
	}
	
	buildmin(1,1,n);
	
	for(int i=0;(1<<i)<=n;i++)
	{
		for(int j=0;j<(1<<i);j++)
		{
			cout << st[(1<<i)+j] <<" ";
		}
		cout << endl;
	}
	
	cout << sum;
}


